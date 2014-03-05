<?php
/**
 * @file
 * paintings.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function paintings_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'papiers_peints';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Papiers peints';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '20 x 20';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Pied de page: Global : Zone de texte */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Texte';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Champ: Contenu : image */
  $handler->display->display_options['fields']['field_imgtabl']['id'] = 'field_imgtabl';
  $handler->display->display_options['fields']['field_imgtabl']['table'] = 'field_data_field_imgtabl';
  $handler->display->display_options['fields']['field_imgtabl']['field'] = 'field_imgtabl';
  $handler->display->display_options['fields']['field_imgtabl']['label'] = '';
  $handler->display->display_options['fields']['field_imgtabl']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imgtabl']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imgtabl']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Critère de tri: Contenu : Date de publication */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tableau' => 'tableau',
  );

  /* Display: Block papiers peints */
  $handler = $view->new_display('block', 'Block papiers peints', 'block');
  $handler->display->display_options['display_description'] = 'Papiers peints';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_column_class';
  $handler->display->display_options['style_options']['row_class'] = 'grid-2';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['class'] = 'img-tableau';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_imgtabl' => 'field_imgtabl',
  );
  $handler->display->display_options['row_options']['separator'] = '/';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tableau' => 'tableau',
  );
  /* Critère de filtrage: Contenu : dimension (field_dim) */
  $handler->display->display_options['filters']['field_dim_value']['id'] = 'field_dim_value';
  $handler->display->display_options['filters']['field_dim_value']['table'] = 'field_data_field_dim';
  $handler->display->display_options['filters']['field_dim_value']['field'] = 'field_dim_value';
  $handler->display->display_options['filters']['field_dim_value']['value'] = array(
    '20cm x 20cm' => '20cm x 20cm',
  );
  $translatables['papiers_peints'] = array(
    t('Master'),
    t('20 x 20'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('Texte'),
    t('Block papiers peints'),
    t('Papiers peints'),
  );
  $export['papiers_peints'] = $view;

  $view = new view();
  $view->name = 'tableaux_20_20';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'tableaux 20x20';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '20 x 20';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Pied de page: Global : Zone de texte */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Texte';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Champ: Contenu : image */
  $handler->display->display_options['fields']['field_imgtabl']['id'] = 'field_imgtabl';
  $handler->display->display_options['fields']['field_imgtabl']['table'] = 'field_data_field_imgtabl';
  $handler->display->display_options['fields']['field_imgtabl']['field'] = 'field_imgtabl';
  $handler->display->display_options['fields']['field_imgtabl']['label'] = '';
  $handler->display->display_options['fields']['field_imgtabl']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imgtabl']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imgtabl']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Critère de tri: Global : Au hasard */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tableau' => 'tableau',
  );

  /* Display: Block 20x20 */
  $handler = $view->new_display('block', 'Block 20x20', 'block');
  $handler->display->display_options['display_description'] = 'Tableaux 20x20cm';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_column_class';
  $handler->display->display_options['style_options']['row_class'] = 'grid-2';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['class'] = 'img-tableau';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_imgtabl' => 'field_imgtabl',
  );
  $handler->display->display_options['row_options']['separator'] = '/';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tableau' => 'tableau',
  );
  /* Critère de filtrage: Contenu : dimension (field_dim) */
  $handler->display->display_options['filters']['field_dim_value']['id'] = 'field_dim_value';
  $handler->display->display_options['filters']['field_dim_value']['table'] = 'field_data_field_dim';
  $handler->display->display_options['filters']['field_dim_value']['field'] = 'field_dim_value';
  $handler->display->display_options['filters']['field_dim_value']['value'] = array(
    '20cm x 20cm' => '20cm x 20cm',
  );
  /* Critère de filtrage: Contenu : Langue */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Block 30x30 */
  $handler = $view->new_display('block', 'Block 30x30', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '30 x 30';
  $handler->display->display_options['display_description'] = 'Tableaux 30x30cm';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_column_class';
  $handler->display->display_options['style_options']['row_class'] = 'grid-3';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['style_options']['class'] = 'img-tableau';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : image */
  $handler->display->display_options['fields']['field_imgtabl']['id'] = 'field_imgtabl';
  $handler->display->display_options['fields']['field_imgtabl']['table'] = 'field_data_field_imgtabl';
  $handler->display->display_options['fields']['field_imgtabl']['field'] = 'field_imgtabl';
  $handler->display->display_options['fields']['field_imgtabl']['label'] = '';
  $handler->display->display_options['fields']['field_imgtabl']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imgtabl']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imgtabl']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tableau' => 'tableau',
  );
  /* Critère de filtrage: Contenu : dimension (field_dim) */
  $handler->display->display_options['filters']['field_dim_value']['id'] = 'field_dim_value';
  $handler->display->display_options['filters']['field_dim_value']['table'] = 'field_data_field_dim';
  $handler->display->display_options['filters']['field_dim_value']['field'] = 'field_dim_value';
  $handler->display->display_options['filters']['field_dim_value']['value'] = array(
    '30cm x 30cm' => '30cm x 30cm',
  );
  /* Critère de filtrage: Contenu : Langue */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Block 20x20 all */
  $handler = $view->new_display('block', 'Block 20x20 all', 'block_2');
  $handler->display->display_options['display_description'] = 'Tableaux 20x20cm';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_column_class';
  $handler->display->display_options['style_options']['row_class'] = 'grid-2';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['class'] = 'img-tableau';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_imgtabl' => 'field_imgtabl',
  );
  $handler->display->display_options['row_options']['separator'] = '/';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tableau' => 'tableau',
  );
  /* Critère de filtrage: Contenu : dimension (field_dim) */
  $handler->display->display_options['filters']['field_dim_value']['id'] = 'field_dim_value';
  $handler->display->display_options['filters']['field_dim_value']['table'] = 'field_data_field_dim';
  $handler->display->display_options['filters']['field_dim_value']['field'] = 'field_dim_value';
  $handler->display->display_options['filters']['field_dim_value']['value'] = array(
    '20cm x 20cm' => '20cm x 20cm',
  );
  $translatables['tableaux_20_20'] = array(
    t('Master'),
    t('20 x 20'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('Texte'),
    t('Block 20x20'),
    t('Tableaux 20x20cm'),
    t('Block 30x30'),
    t('30 x 30'),
    t('Tableaux 30x30cm'),
    t('Block 20x20 all'),
  );
  $export['tableaux_20_20'] = $view;

  return $export;
}
