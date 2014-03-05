<?php
/**
 * @file
 * paintings.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function paintings_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'tableaux';
  $page->task = 'page';
  $page->admin_title = 'galerie tableaux';
  $page->admin_description = '';
  $page->path = 'galerie-tableaux';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => 'Tableaux',
    'name' => 'main-menu',
    'weight' => '2',
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
  $handler->name = 'page_tableaux_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'tableaux';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panneau',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
  );
  $display = new panels_display();
  $display->layout = 'omega_16_twocol_8_8';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'left' => array(
        'style' => '$',
        'settings' => array(
          'name' => '_temporary',
          'style_base' => 'region_rounded_shadow',
          'palette' => array(
            'background' => '#FFFFFF',
            'text' => '#000000',
          ),
          'font' => array(
            'font' => '',
            'size' => '',
            'letter_spacing' => '',
            'word_spacing' => '',
            'decoration' => '',
            'weight' => '',
            'style' => '',
            'variant' => '',
            'case' => '',
            'alignment' => '',
          ),
          'padding' => array(
            'top' => '',
            'right' => '',
            'bottom' => '',
            'left' => '',
          ),
        ),
      ),
      'right' => NULL,
    ),
    'left' => array(
      'style' => 'stylizer',
    ),
    'style' => 'naked',
  );
  $display->cache = array();
  $display->title = 'Tableaux';
  $display->uuid = 'd24153a0-63b6-456a-9d3b-213e8ecbe50a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a1e66f91-d928-4e97-97f2-7f0f28ad32ce';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'tableaux_20_20';
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
      'display' => 'block_2',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a1e66f91-d928-4e97-97f2-7f0f28ad32ce';
    $display->content['new-a1e66f91-d928-4e97-97f2-7f0f28ad32ce'] = $pane;
    $display->panels['left'][0] = 'new-a1e66f91-d928-4e97-97f2-7f0f28ad32ce';
    $pane = new stdClass();
    $pane->pid = 'new-b04711bd-8eb7-4cbf-bb58-b5b10e6665b9';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'block-3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'b04711bd-8eb7-4cbf-bb58-b5b10e6665b9';
    $display->content['new-b04711bd-8eb7-4cbf-bb58-b5b10e6665b9'] = $pane;
    $display->panels['right'][0] = 'new-b04711bd-8eb7-4cbf-bb58-b5b10e6665b9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['tableaux'] = $page;

  return $pages;

}
