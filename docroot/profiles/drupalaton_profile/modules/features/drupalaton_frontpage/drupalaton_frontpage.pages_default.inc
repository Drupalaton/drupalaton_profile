<?php
/**
 * @file
 * drupalaton_frontpage.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function drupalaton_frontpage_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'fronpage';
  $page->task = 'page';
  $page->admin_title = 'Fronpage';
  $page->admin_description = '';
  $page->path = 'frontpage';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_fronpage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'fronpage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 2,
          1 => 'main-row',
          2 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bottom',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'bottom' => array(
        'type' => 'region',
        'title' => 'bottom',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'sponsow',
        ),
        'parent' => 'main',
        'class' => 'sponsor',
      ),
      'sponsow' => array(
        'type' => 'region',
        'title' => 'Sponsor',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'bottom' => NULL,
      'sponsow' => array(
        'corner_location' => 'pane',
      ),
    ),
    'sponsow' => array(
      'style' => 'rounded_corners',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6f3c7443-853b-47c7-bb2d-efe6574ac698';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-727805bc-f60c-4e62-a221-7c54fcbd6ed2';
    $pane->panel = 'bottom';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '1',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container_12',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '727805bc-f60c-4e62-a221-7c54fcbd6ed2';
    $display->content['new-727805bc-f60c-4e62-a221-7c54fcbd6ed2'] = $pane;
    $display->panels['bottom'][0] = 'new-727805bc-f60c-4e62-a221-7c54fcbd6ed2';
    $pane = new stdClass();
    $pane->pid = 'new-cb5bea3b-83ad-4d24-a77a-bd7296595cc6';
    $pane->panel = 'bottom';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '4',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container_12 sponsor_packages',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cb5bea3b-83ad-4d24-a77a-bd7296595cc6';
    $display->content['new-cb5bea3b-83ad-4d24-a77a-bd7296595cc6'] = $pane;
    $display->panels['bottom'][1] = 'new-cb5bea3b-83ad-4d24-a77a-bd7296595cc6';
    $pane = new stdClass();
    $pane->pid = 'new-43948b8c-2486-4f3a-9a4f-d23878fdabae';
    $pane->panel = 'bottom';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '6',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => 'Tickets',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'ticket',
      'css_class' => 'container_12',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '43948b8c-2486-4f3a-9a4f-d23878fdabae';
    $display->content['new-43948b8c-2486-4f3a-9a4f-d23878fdabae'] = $pane;
    $display->panels['bottom'][2] = 'new-43948b8c-2486-4f3a-9a4f-d23878fdabae';
    $pane = new stdClass();
    $pane->pid = 'new-e7753706-bb83-479d-921d-691af611cac6';
    $pane->panel = 'bottom';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '14',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container_12',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'e7753706-bb83-479d-921d-691af611cac6';
    $display->content['new-e7753706-bb83-479d-921d-691af611cac6'] = $pane;
    $display->panels['bottom'][3] = 'new-e7753706-bb83-479d-921d-691af611cac6';
    $pane = new stdClass();
    $pane->pid = 'new-7787364b-d64c-45e0-a547-648b5ac359e8';
    $pane->panel = 'bottom';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '2',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container_12',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '7787364b-d64c-45e0-a547-648b5ac359e8';
    $display->content['new-7787364b-d64c-45e0-a547-648b5ac359e8'] = $pane;
    $display->panels['bottom'][4] = 'new-7787364b-d64c-45e0-a547-648b5ac359e8';
    $pane = new stdClass();
    $pane->pid = 'new-fa4de4a5-2129-4aab-8f3f-9eb2d968a61c';
    $pane->panel = 'sponsow';
    $pane->type = 'views_panes';
    $pane->subtype = 'sessions-featured_session';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container_12 featured_sessions keynote',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fa4de4a5-2129-4aab-8f3f-9eb2d968a61c';
    $display->content['new-fa4de4a5-2129-4aab-8f3f-9eb2d968a61c'] = $pane;
    $display->panels['sponsow'][0] = 'new-fa4de4a5-2129-4aab-8f3f-9eb2d968a61c';
    $pane = new stdClass();
    $pane->pid = 'new-a03e6d29-a005-4ddd-b943-1d50ea195e97';
    $pane->panel = 'sponsow';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Sprint banner',
      'title' => 'Sprint all four days',
      'body' => '<div class="tab-button" style="float: right;"><a href="/sprint" style="padding-left: 2em; padding-right: 2em; margin-top: 0.4em;">More information</a></div>
<style>.pane-sprint-button h2 { float: left; }</style>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container_12 pane-sprint-button',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a03e6d29-a005-4ddd-b943-1d50ea195e97';
    $display->content['new-a03e6d29-a005-4ddd-b943-1d50ea195e97'] = $pane;
    $display->panels['sponsow'][1] = 'new-a03e6d29-a005-4ddd-b943-1d50ea195e97';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['fronpage'] = $page;

  return $pages;

}
