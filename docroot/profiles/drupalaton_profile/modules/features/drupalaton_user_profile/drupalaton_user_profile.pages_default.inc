<?php
/**
 * @file
 * drupalaton_user_profile.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function drupalaton_user_profile_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'sponsors';
  $page->task = 'page';
  $page->admin_title = 'Sponsors';
  $page->admin_description = '';
  $page->path = 'sponsors';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Sponsors',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_sponsors_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'sponsors';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'sponsor',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Sponsors';
  $display->uuid = '33b79e31-cda7-4f45-9453-5cc3959e797d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1a05da73-6587-4a1e-9ad9-13320cccef75';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'sponsors';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1a05da73-6587-4a1e-9ad9-13320cccef75';
    $display->content['new-1a05da73-6587-4a1e-9ad9-13320cccef75'] = $pane;
    $display->panels['middle'][0] = 'new-1a05da73-6587-4a1e-9ad9-13320cccef75';
    $pane = new stdClass();
    $pane->pid = 'new-468123c5-7334-41d2-90b2-f1a06cc10ee1';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'attendees-individual_sponsor';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '468123c5-7334-41d2-90b2-f1a06cc10ee1';
    $display->content['new-468123c5-7334-41d2-90b2-f1a06cc10ee1'] = $pane;
    $display->panels['middle'][1] = 'new-468123c5-7334-41d2-90b2-f1a06cc10ee1';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-1a05da73-6587-4a1e-9ad9-13320cccef75';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['sponsors'] = $page;

  return $pages;

}
