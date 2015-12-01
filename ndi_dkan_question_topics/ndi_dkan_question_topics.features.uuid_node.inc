<?php
/**
 * @file
 * ndi_dkan_question_topics.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function ndi_dkan_question_topics_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Topic 2',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'en',
  'created' => 1448999263,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '26b8d22b-b58a-4ba2-ad85-3cccc9e46551',
  'body' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'date' => '2015-12-01 19:47:43 +0000',
  'user_uuid' => '862bb959-5a34-46d0-8b67-89517b10d8fc',
);
  $nodes[] = array(
  'title' => 'Topic 3',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'en',
  'created' => 1448999279,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '4fa7bbe9-921e-4c14-9cfb-657161c7d78b',
  'body' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'date' => '2015-12-01 19:47:59 +0000',
  'user_uuid' => '862bb959-5a34-46d0-8b67-89517b10d8fc',
);
  $nodes[] = array(
  'title' => 'Topic 1',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'en',
  'created' => 1448997070,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f0be34f9-ce1f-444f-821f-942db5a4882d',
  'body' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'date' => '2015-12-01 19:11:10 +0000',
  'user_uuid' => '862bb959-5a34-46d0-8b67-89517b10d8fc',
);
  $nodes[] = array(
  'title' => 'Question',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'question',
  'language' => 'en',
  'created' => 1449000280,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f50a4254-32fd-45b6-82ad-e60046957fd7',
  'body' => array(),
  'field_embed_code' => array(
    'und' => array(
      0 => array(
        'value' => '<iframe src="https://www.google.com/maps/embed?pb=!1m18!1m12!1m3!1d3105.0029436829195!2d-77.01757599999999!3d38.901047999999996!2m3!1f0!2f0!3f0!3m2!1i1024!2i768!4f13.1!3m3!1m2!1s0x89b7b78c67f66e7b%3A0x8ccb2d3dcce334f9!2s455+Massachusetts+Ave+NW%2C+Washington%2C+DC+20001!5e0!3m2!1sen!2sus!4v1444322088891" width="600" height="450" frameborder="0" style="border:0" allowfullscreen></iframe>',
        'format' => 'html',
      ),
    ),
  ),
  'field_entity_link' => array(
    'und' => array(
      0 => array(
        'url' => 'www.google.com',
        'title' => 'Test link',
        'attributes' => array(),
      ),
    ),
  ),
  'field_infographic_screenshot' => array(),
  'field_topic' => array(
    'und' => array(
      0 => array(
        'tid' => '921fd820-dc69-4d8d-b340-30752779e62a',
        'uuid' => '921fd820-dc69-4d8d-b340-30752779e62a',
      ),
      1 => array(
        'tid' => '3d42a3bd-7b2e-419e-9759-df51000949fa',
        'uuid' => '3d42a3bd-7b2e-419e-9759-df51000949fa',
      ),
      2 => array(
        'tid' => 'b41fb0f1-e55e-4b54-9dc9-82160d311c5a',
        'uuid' => 'b41fb0f1-e55e-4b54-9dc9-82160d311c5a',
      ),
    ),
  ),
  'field_type' => array(
    'und' => array(
      0 => array(
        'tid' => '8871b6b5-c3b7-4e7e-a1be-9d951d7890cb',
        'uuid' => '8871b6b5-c3b7-4e7e-a1be-9d951d7890cb',
      ),
      1 => array(
        'tid' => '729c4816-3ba6-4dca-bece-468f7710f6f2',
        'uuid' => '729c4816-3ba6-4dca-bece-468f7710f6f2',
      ),
      2 => array(
        'tid' => 'bb012fda-aee8-40d6-a182-1f5215ba353a',
        'uuid' => 'bb012fda-aee8-40d6-a182-1f5215ba353a',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'date' => '2015-12-01 20:04:40 +0000',
  'user_uuid' => '862bb959-5a34-46d0-8b67-89517b10d8fc',
);
  return $nodes;
}
