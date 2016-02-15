<?php
/**
 * @file
 * ndi_dkan_question_topics.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ndi_dkan_question_topics_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ndi_question_topic_1';
  $context->description = 'Place "Topic 1" Views blocks on Topic 1 node page.';
  $context->tag = 'topics';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'topic-1' => 'topic-1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-questions-block_1' => array(
          'module' => 'views',
          'delta' => 'questions-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Place "Topic 1" Views blocks on Topic 1 node page.');
  t('topics');
  $export['ndi_question_topic_1'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ndi_question_topic_2';
  $context->description = 'Place "Topic 2" Views blocks on Topic 2 node page.';
  $context->tag = 'topics';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'topic-2' => 'topic-2',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-questions-block_2' => array(
          'module' => 'views',
          'delta' => 'questions-block_2',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Place "Topic 2" Views blocks on Topic 2 node page.');
  t('topics');
  $export['ndi_question_topic_2'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ndi_question_topic_3';
  $context->description = 'Place "Topic 3" Views blocks on Topic 3 node page.';
  $context->tag = 'topics';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'topic-3' => 'topic-3',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-questions-block_3' => array(
          'module' => 'views',
          'delta' => 'questions-block_3',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Place "Topic 3" Views blocks on Topic 3 node page.');
  t('topics');
  $export['ndi_question_topic_3'] = $context;

  return $export;
}
