<?php
/**
 * @file
 * paintings.features.inc
 */

/**
 * Implements hook_block_class_features_default_class().
 */
function paintings_block_class_features_default_class() {
  return array(
    'views:tableaux_20_20-block' => array(
      'module' => 'views',
      'delta' => 'tableaux_20_20-block',
      'css_classes' => 'mosaic20',
    ),
    'views:tableaux_20_20-block_1' => array(
      'module' => 'views',
      'delta' => 'tableaux_20_20-block_1',
      'css_classes' => 'mosaic30',
    ),
  );
}

/**
 * Implements hook_ctools_plugin_api().
 */
function paintings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function paintings_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function paintings_image_default_styles() {
  $styles = array();

  // Exported image style: tableau.
  $styles['tableau'] = array(
    'name' => 'tableau',
    'label' => 'tableau',
    'effects' => array(
      3 => array(
        'label' => 'Redimensionner',
        'help' => 'Le redimensionnement ne respecte pas les proportions de l\'image. Ce qui peut se traduire par des images étirées ou compressées.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 800,
          'height' => 800,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: zoom_thumb.
  $styles['zoom_thumb'] = array(
    'name' => 'zoom_thumb',
    'label' => 'zoom_thumb',
    'effects' => array(
      2 => array(
        'label' => 'Échelle',
        'help' => 'La mise à l\'échelle maintiendra les proportions originales de l\'image. Si une seule dimension est précisée, l\'autre dimension sera calculée automatiquement.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 150,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function paintings_node_info() {
  $items = array(
    'tableau' => array(
      'name' => t('tableau'),
      'base' => 'node_content',
      'description' => t('Tableau'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Les images de tableaux doivent toutes être téléchargées en jpeg 72ppp 400x400pixels pour un bon fonctionnement de la mosaïque, quel que soit le format du tableau.'),
    ),
  );
  return $items;
}
