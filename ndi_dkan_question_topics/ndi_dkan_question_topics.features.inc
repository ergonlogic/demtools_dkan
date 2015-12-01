<?php
/**
 * @file
 * ndi_dkan_question_topics.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ndi_dkan_question_topics_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
