<?php
/**
 * @file
 * dkan_sitewide_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function dkan_sitewide_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about:node/1
  $menu_links['main-menu_about:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_about:node/1',
      'node_type' => 'page',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: main-menu_add-dataset:node/add/dataset
  $menu_links['main-menu_add-dataset:node/add/dataset'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/dataset',
    'router_path' => 'node/add/dataset',
    'link_title' => 'Add Dataset',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_add-dataset:node/add/dataset',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_all-questions:all-questions
  $menu_links['main-menu_all-questions:all-questions'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'all-questions',
    'router_path' => 'all-questions',
    'link_title' => 'All Questions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_all-questions:all-questions',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_charts:charts
  $menu_links['main-menu_charts:charts'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'charts',
    'router_path' => 'charts',
    'link_title' => 'Charts',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_charts:charts',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_data-types:charts',
  );
  // Exported menu link: main-menu_data-types:charts
  $menu_links['main-menu_data-types:charts'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'charts',
    'router_path' => 'charts',
    'link_title' => 'Data Types',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_data-types:charts',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_datasets:dataset
  $menu_links['main-menu_datasets:dataset'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'dataset',
    'router_path' => 'dataset',
    'link_title' => 'Datasets',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_datasets:dataset',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: main-menu_groups:groups
  $menu_links['main-menu_groups:groups'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'groups',
    'router_path' => 'groups',
    'link_title' => 'Groups',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_groups:groups',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
  );
  // Exported menu link: main-menu_infographics:infographics
  $menu_links['main-menu_infographics:infographics'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'infographics',
    'router_path' => 'infographics',
    'link_title' => 'Infographics',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_infographics:infographics',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_data-types:charts',
  );
  // Exported menu link: main-menu_maps:maps
  $menu_links['main-menu_maps:maps'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'maps',
    'router_path' => 'maps',
    'link_title' => 'Maps',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_maps:maps',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_data-types:charts',
  );
  // Exported menu link: main-menu_stories:stories
  $menu_links['main-menu_stories:stories'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'stories',
    'router_path' => 'stories',
    'link_title' => 'Stories',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_stories:stories',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Add Dataset');
  t('All Questions');
  t('Charts');
  t('Data Types');
  t('Datasets');
  t('Groups');
  t('Infographics');
  t('Maps');
  t('Stories');


  return $menu_links;
}
