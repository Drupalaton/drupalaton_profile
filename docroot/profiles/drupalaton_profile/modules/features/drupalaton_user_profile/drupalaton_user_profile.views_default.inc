<?php
/**
 * @file
 * drupalaton_user_profile.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function drupalaton_user_profile_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'attendees';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Attendees';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Attendees';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '36';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = '.col-xs-12 .col-sm-6 .col-md-3 .col-lg-3';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_profile_first_name' => 'field_profile_first_name',
    'field_profile_last_name' => 'field_profile_last_name',
  );
  $handler->display->display_options['row_options']['separator'] = ' ';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['field_profile_picture']['id'] = 'field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['table'] = 'field_data_field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['field'] = 'field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['label'] = '';
  $handler->display->display_options['fields']['field_profile_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_picture']['settings'] = array(
    'image_style' => 'attendees',
    'image_link' => '',
  );
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_profile_first_name']['id'] = 'field_profile_first_name';
  $handler->display->display_options['fields']['field_profile_first_name']['table'] = 'field_data_field_profile_first_name';
  $handler->display->display_options['fields']['field_profile_first_name']['field'] = 'field_profile_first_name';
  $handler->display->display_options['fields']['field_profile_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_profile_first_name']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['field_profile_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_first_name']['hide_empty'] = TRUE;
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_profile_last_name']['id'] = 'field_profile_last_name';
  $handler->display->display_options['fields']['field_profile_last_name']['table'] = 'field_data_field_profile_last_name';
  $handler->display->display_options['fields']['field_profile_last_name']['field'] = 'field_profile_last_name';
  $handler->display->display_options['fields']['field_profile_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['field_profile_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_last_name']['hide_empty'] = TRUE;
  /* Field: User: Organization */
  $handler->display->display_options['fields']['field_profile_organization']['id'] = 'field_profile_organization';
  $handler->display->display_options['fields']['field_profile_organization']['table'] = 'field_data_field_profile_organization';
  $handler->display->display_options['fields']['field_profile_organization']['field'] = 'field_profile_organization';
  $handler->display->display_options['fields']['field_profile_organization']['label'] = '';
  $handler->display->display_options['fields']['field_profile_organization']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_organization']['hide_empty'] = TRUE;
  /* Sort criterion: User: First name (field_profile_first_name) */
  $handler->display->display_options['sorts']['field_profile_first_name_value']['id'] = 'field_profile_first_name_value';
  $handler->display->display_options['sorts']['field_profile_first_name_value']['table'] = 'field_data_field_profile_first_name';
  $handler->display->display_options['sorts']['field_profile_first_name_value']['field'] = 'field_profile_first_name_value';
  /* Sort criterion: User: Last name (field_profile_last_name) */
  $handler->display->display_options['sorts']['field_profile_last_name_value']['id'] = 'field_profile_last_name_value';
  $handler->display->display_options['sorts']['field_profile_last_name_value']['table'] = 'field_data_field_profile_last_name';
  $handler->display->display_options['sorts']['field_profile_last_name_value']['field'] = 'field_profile_last_name_value';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    5 => '5',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'attendees';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Attendees';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Individual sponsors */
  $handler = $view->new_display('panel_pane', 'Individual sponsors', 'individual_sponsor');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Individual sponsors';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['field_profile_picture']['id'] = 'field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['table'] = 'field_data_field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['field'] = 'field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['label'] = '';
  $handler->display->display_options['fields']['field_profile_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_picture']['settings'] = array(
    'image_style' => 'attendees',
    'image_link' => '',
  );
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_profile_first_name']['id'] = 'field_profile_first_name';
  $handler->display->display_options['fields']['field_profile_first_name']['table'] = 'field_data_field_profile_first_name';
  $handler->display->display_options['fields']['field_profile_first_name']['field'] = 'field_profile_first_name';
  $handler->display->display_options['fields']['field_profile_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_profile_first_name']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['field_profile_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_first_name']['hide_empty'] = TRUE;
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_profile_last_name']['id'] = 'field_profile_last_name';
  $handler->display->display_options['fields']['field_profile_last_name']['table'] = 'field_data_field_profile_last_name';
  $handler->display->display_options['fields']['field_profile_last_name']['field'] = 'field_profile_last_name';
  $handler->display->display_options['fields']['field_profile_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['field_profile_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_last_name']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    6 => '6',
  );
  $export['attendees'] = $view;

  $view = new view();
  $view->name = 'individual_sponsors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Individual sponsors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Individual sponsors';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '6';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_profile_first_name' => 'field_profile_first_name',
    'field_profile_last_name' => 'field_profile_last_name',
  );
  $handler->display->display_options['row_options']['separator'] = ' ';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['field_profile_picture']['id'] = 'field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['table'] = 'field_data_field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['field'] = 'field_profile_picture';
  $handler->display->display_options['fields']['field_profile_picture']['label'] = '';
  $handler->display->display_options['fields']['field_profile_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_picture']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_profile_first_name']['id'] = 'field_profile_first_name';
  $handler->display->display_options['fields']['field_profile_first_name']['table'] = 'field_data_field_profile_first_name';
  $handler->display->display_options['fields']['field_profile_first_name']['field'] = 'field_profile_first_name';
  $handler->display->display_options['fields']['field_profile_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_profile_first_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_profile_first_name']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['field_profile_first_name']['element_label_colon'] = FALSE;
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_profile_last_name']['id'] = 'field_profile_last_name';
  $handler->display->display_options['fields']['field_profile_last_name']['table'] = 'field_data_field_profile_last_name';
  $handler->display->display_options['fields']['field_profile_last_name']['field'] = 'field_profile_last_name';
  $handler->display->display_options['fields']['field_profile_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_profile_last_name']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['field_profile_last_name']['element_label_colon'] = FALSE;
  /* Sort criterion: User: First name (field_profile_first_name) */
  $handler->display->display_options['sorts']['field_profile_first_name_value']['id'] = 'field_profile_first_name_value';
  $handler->display->display_options['sorts']['field_profile_first_name_value']['table'] = 'field_data_field_profile_first_name';
  $handler->display->display_options['sorts']['field_profile_first_name_value']['field'] = 'field_profile_first_name_value';
  /* Sort criterion: User: Last name (field_profile_last_name) */
  $handler->display->display_options['sorts']['field_profile_last_name_value']['id'] = 'field_profile_last_name_value';
  $handler->display->display_options['sorts']['field_profile_last_name_value']['table'] = 'field_data_field_profile_last_name';
  $handler->display->display_options['sorts']['field_profile_last_name_value']['field'] = 'field_profile_last_name_value';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    7 => '7',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['individual_sponsors'] = $view;

  return $export;
}
