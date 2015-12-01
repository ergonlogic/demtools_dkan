<?php
/**
 * @file
 * ndi_dkan_question_topics.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function ndi_dkan_question_topics_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Topic 2',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3d42a3bd-7b2e-419e-9759-df51000949fa',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'topic',
  );
  $terms[] = array(
    'name' => 'Infographic',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '729c4816-3ba6-4dca-bece-468f7710f6f2',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'data_type',
  );
  $terms[] = array(
    'name' => 'Chart',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '8871b6b5-c3b7-4e7e-a1be-9d951d7890cb',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'data_type',
  );
  $terms[] = array(
    'name' => 'Topic 1',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '921fd820-dc69-4d8d-b340-30752779e62a',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'topic',
  );
  $terms[] = array(
    'name' => 'Topic 3',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'b41fb0f1-e55e-4b54-9dc9-82160d311c5a',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'topic',
  );
  $terms[] = array(
    'name' => 'Map',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'bb012fda-aee8-40d6-a182-1f5215ba353a',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'data_type',
  );
  return $terms;
}
