<?php
/**
 * @file
 * drupalaton_sponsor.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function drupalaton_sponsor_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sponsors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'sponsors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sponsors';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_sponsor_category',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'sor';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Category (field_sponsor_tax_category) */
  $handler->display->display_options['relationships']['field_sponsor_tax_category_tid']['id'] = 'field_sponsor_tax_category_tid';
  $handler->display->display_options['relationships']['field_sponsor_tax_category_tid']['table'] = 'field_data_field_sponsor_tax_category';
  $handler->display->display_options['relationships']['field_sponsor_tax_category_tid']['field'] = 'field_sponsor_tax_category_tid';
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_sponsor_logo']['id'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['table'] = 'field_data_field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['field'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['label'] = '';
  $handler->display->display_options['fields']['field_sponsor_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sponsor_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sponsor_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_sponsor_category']['id'] = 'field_sponsor_category';
  $handler->display->display_options['fields']['field_sponsor_category']['table'] = 'field_data_field_sponsor_category';
  $handler->display->display_options['fields']['field_sponsor_category']['field'] = 'field_sponsor_category';
  $handler->display->display_options['fields']['field_sponsor_category']['label'] = '';
  $handler->display->display_options['fields']['field_sponsor_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sponsor_category']['element_label_colon'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_sponsor_tax_category']['id'] = 'field_sponsor_tax_category';
  $handler->display->display_options['fields']['field_sponsor_tax_category']['table'] = 'field_data_field_sponsor_tax_category';
  $handler->display->display_options['fields']['field_sponsor_tax_category']['field'] = 'field_sponsor_tax_category';
  $handler->display->display_options['fields']['field_sponsor_tax_category']['label'] = '';
  $handler->display->display_options['fields']['field_sponsor_tax_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sponsor_tax_category']['element_label_colon'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'field_sponsor_tax_category_tid';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sponsor' => 'sponsor',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_sponsor_logo']['id'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['table'] = 'field_data_field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['field'] = 'field_sponsor_logo';
  $handler->display->display_options['fields']['field_sponsor_logo']['label'] = '';
  $handler->display->display_options['fields']['field_sponsor_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sponsor_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sponsor_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_sponsor_category']['id'] = 'field_sponsor_category';
  $handler->display->display_options['fields']['field_sponsor_category']['table'] = 'field_data_field_sponsor_category';
  $handler->display->display_options['fields']['field_sponsor_category']['field'] = 'field_sponsor_category';
  $handler->display->display_options['fields']['field_sponsor_category']['label'] = '';
  $handler->display->display_options['fields']['field_sponsor_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sponsor_category']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['path'] = 'sponsors-old';
  $handler->display->display_options['menu']['title'] = 'Sponsors';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Diamond */
  $handler = $view->new_display('block', 'Diamond', 'block_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sponsor' => 'sponsor',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Category (field_sponsor_tax_category) */
  $handler->display->display_options['filters']['field_sponsor_tax_category_tid']['id'] = 'field_sponsor_tax_category_tid';
  $handler->display->display_options['filters']['field_sponsor_tax_category_tid']['table'] = 'field_data_field_sponsor_tax_category';
  $handler->display->display_options['filters']['field_sponsor_tax_category_tid']['field'] = 'field_sponsor_tax_category_tid';
  $handler->display->display_options['filters']['field_sponsor_tax_category_tid']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_sponsor_tax_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_sponsor_tax_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sponsor_tax_category_tid']['vocabulary'] = 'sponsors';

  /* Display: Gold */
  $handler = $view->new_display('block', 'Gold', 'block_2');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sponsor' => 'sponsor',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Category (field_sponsor_tax_category) */
  $handler->display->display_options['filters']['field_sponsor_tax_category_tid']['id'] = 'field_sponsor_tax_category_tid';
  $handler->display->display_options['filters']['field_sponsor_tax_category_tid']['table'] = 'field_data_field_sponsor_tax_category';
  $handler->display->display_options['filters']['field_sponsor_tax_category_tid']['field'] = 'field_sponsor_tax_category_tid';
  $handler->display->display_options['filters']['field_sponsor_tax_category_tid']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_sponsor_tax_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_sponsor_tax_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sponsor_tax_category_tid']['vocabulary'] = 'sponsors';

  /* Display: Diamond in header */
  $handler = $view->new_display('block', 'Diamond in header', 'sponsor_diamond_header');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = 'Diamond sponsor';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Big logo */
  $handler->display->display_options['fields']['field_sponsor_big_logo']['id'] = 'field_sponsor_big_logo';
  $handler->display->display_options['fields']['field_sponsor_big_logo']['table'] = 'field_data_field_sponsor_big_logo';
  $handler->display->display_options['fields']['field_sponsor_big_logo']['field'] = 'field_sponsor_big_logo';
  $handler->display->display_options['fields']['field_sponsor_big_logo']['label'] = '';
  $handler->display->display_options['fields']['field_sponsor_big_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sponsor_big_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sponsor_big_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_sponsor_category']['id'] = 'field_sponsor_category';
  $handler->display->display_options['fields']['field_sponsor_category']['table'] = 'field_data_field_sponsor_category';
  $handler->display->display_options['fields']['field_sponsor_category']['field'] = 'field_sponsor_category';
  $handler->display->display_options['fields']['field_sponsor_category']['label'] = '';
  $handler->display->display_options['fields']['field_sponsor_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sponsor_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sponsor' => 'sponsor',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Category (field_sponsor_tax_category) */
  $handler->display->display_options['filters']['field_sponsor_tax_category_tid']['id'] = 'field_sponsor_tax_category_tid';
  $handler->display->display_options['filters']['field_sponsor_tax_category_tid']['table'] = 'field_data_field_sponsor_tax_category';
  $handler->display->display_options['filters']['field_sponsor_tax_category_tid']['field'] = 'field_sponsor_tax_category_tid';
  $handler->display->display_options['filters']['field_sponsor_tax_category_tid']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_sponsor_tax_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_sponsor_tax_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sponsor_tax_category_tid']['vocabulary'] = 'sponsors';
  /* Filter criterion: Content: Big logo (field_sponsor_big_logo:fid) */
  $handler->display->display_options['filters']['field_sponsor_big_logo_fid']['id'] = 'field_sponsor_big_logo_fid';
  $handler->display->display_options['filters']['field_sponsor_big_logo_fid']['table'] = 'field_data_field_sponsor_big_logo';
  $handler->display->display_options['filters']['field_sponsor_big_logo_fid']['field'] = 'field_sponsor_big_logo_fid';
  $handler->display->display_options['filters']['field_sponsor_big_logo_fid']['operator'] = '!=';
  $handler->display->display_options['filters']['field_sponsor_big_logo_fid']['group'] = 1;
  $export['sponsors'] = $view;

  return $export;
}
