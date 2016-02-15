<?php
/**
 * @file
 * ndi_dkan_translations.variable.inc
 */

/**
 * Implements hook_variable_realm_default_variables().
 */
function ndi_dkan_translations_variable_realm_default_variables() {
$realm_variables = array();
  $realm_variables['language']['ar'] = array(
  'site_name' => 'DKAN | العربية',
  'site_slogan' => '',
);
  $realm_variables['language']['en'] = array(
  'site_name' => 'DKAN | English',
  'site_slogan' => '',
);
  $realm_variables['language']['es'] = array(
  'site_name' => 'DKAN | Español',
  'site_slogan' => '',
);
  $realm_variables['language']['fr'] = array(
  'site_name' => 'DKAN | Français',
  'site_slogan' => '',
);
  $realm_variables['language']['ru'] = array(
  'site_name' => 'DKAN | Русский',
  'site_slogan' => '',
);

return $realm_variables;
}
