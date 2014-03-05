<?php
/**
 * @file
 * paintings.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function paintings_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'tableaux';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'node/4' => 'node/4',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'une_colonne',
    ),
  );
  $context->condition_mode = 0;
  $export['tableaux'] = $context;

  return $export;
}
