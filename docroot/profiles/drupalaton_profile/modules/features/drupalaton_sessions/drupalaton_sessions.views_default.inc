<?php
/**
 * @file
 * drupalaton_sessions.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function drupalaton_sessions_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sessions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sessions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sessions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['label'] = 'Session queue';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'session' => 'session',
    'featured_sessions' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div id="speaker-[nid]">[title]</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'views-field-field-speaker-session-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_session_type']['id'] = 'field_session_type';
  $handler->display->display_options['fields']['field_session_type']['table'] = 'field_data_field_session_type';
  $handler->display->display_options['fields']['field_session_type']['field'] = 'field_session_type';
  $handler->display->display_options['fields']['field_session_type']['label'] = '';
  $handler->display->display_options['fields']['field_session_type']['element_class'] = 'views-field-field-speaker-session-type';
  $handler->display->display_options['fields']['field_session_type']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['block_description'] = 'Sessions';

  /* Display: Sessions */
  $handler = $view->new_display('panel_pane', 'Sessions', 'panel_pane_1');

  /* Display: Featured session */
  $handler = $view->new_display('panel_pane', 'Featured session', 'featured_session');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured sessions';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'user';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 0;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'sessions' => 'sessions',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Speaker name */
  $handler->display->display_options['fields']['field_session_speaker_name']['id'] = 'field_session_speaker_name';
  $handler->display->display_options['fields']['field_session_speaker_name']['table'] = 'field_data_field_session_speaker_name';
  $handler->display->display_options['fields']['field_session_speaker_name']['field'] = 'field_session_speaker_name';
  $handler->display->display_options['fields']['field_session_speaker_name']['label'] = '';
  $handler->display->display_options['fields']['field_session_speaker_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_speaker_name']['element_wrapper_class'] = 'speaker-name';
  /* Field: Content: Speaker nick */
  $handler->display->display_options['fields']['field_session_speaker_nick']['id'] = 'field_session_speaker_nick';
  $handler->display->display_options['fields']['field_session_speaker_nick']['table'] = 'field_data_field_session_speaker_nick';
  $handler->display->display_options['fields']['field_session_speaker_nick']['field'] = 'field_session_speaker_nick';
  $handler->display->display_options['fields']['field_session_speaker_nick']['label'] = '';
  $handler->display->display_options['fields']['field_session_speaker_nick']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_speaker_nick']['element_wrapper_class'] = 'speaker-nick';
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_session_speaker_title']['id'] = 'field_session_speaker_title';
  $handler->display->display_options['fields']['field_session_speaker_title']['table'] = 'field_data_field_session_speaker_title';
  $handler->display->display_options['fields']['field_session_speaker_title']['field'] = 'field_session_speaker_title';
  $handler->display->display_options['fields']['field_session_speaker_title']['label'] = '';
  $handler->display->display_options['fields']['field_session_speaker_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_speaker_title']['element_wrapper_class'] = 'speaker-title';
  /* Field: Content: Speaker image */
  $handler->display->display_options['fields']['field_session_speaker_image']['id'] = 'field_session_speaker_image';
  $handler->display->display_options['fields']['field_session_speaker_image']['table'] = 'field_data_field_session_speaker_image';
  $handler->display->display_options['fields']['field_session_speaker_image']['field'] = 'field_session_speaker_image';
  $handler->display->display_options['fields']['field_session_speaker_image']['label'] = '';
  $handler->display->display_options['fields']['field_session_speaker_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_session_speaker_image']['alter']['path'] = 'schedule#speaker-[nid]';
  $handler->display->display_options['fields']['field_session_speaker_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_speaker_image']['element_wrapper_class'] = 'image';
  $handler->display->display_options['fields']['field_session_speaker_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_session_speaker_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<a href="/schedule#speaker-[nid]">View details</a>';
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['link_class'] = 'hide';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_class'] = 'about-speaker tab-button';
  $handler->display->display_options['fields']['view_node']['text'] = 'View details';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
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
    'session' => 'session',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Nodequeue: Subqueue title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'nodequeue_subqueue';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['title']['value'] = 'Featured sessions';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $export['sessions'] = $view;

  return $export;
}
