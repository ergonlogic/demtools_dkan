<?php
/**
 * @file
 * ndi_language_switcher.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ndi_language_switcher_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ndi_language_switcher';
  $context->description = 'A list of supported languages.';
  $context->tag = 'site-wide, l10n';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'locale-language' => array(
          'module' => 'locale',
          'delta' => 'language',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('A list of supported languages.');
  t('site-wide, l10n');
  $export['ndi_language_switcher'] = $context;

  return $export;
}
