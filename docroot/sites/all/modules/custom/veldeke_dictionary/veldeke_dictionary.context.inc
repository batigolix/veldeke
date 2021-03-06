<?php
/**
 * @file
 * veldeke_dictionary.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function veldeke_dictionary_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'dictionary';
  $context->description = '';
  $context->tag = 'Dictionary';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'terms/*' => 'terms/*',
        'terms' => 'terms',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'veldeke_dictionary-download_csv' => array(
          'module' => 'veldeke_dictionary',
          'delta' => 'download_csv',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'veldeke_dictionary-toc' => array(
          'module' => 'veldeke_dictionary',
          'delta' => 'toc',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'veldeke_dictionary-lang_nav' => array(
          'module' => 'veldeke_dictionary',
          'delta' => 'lang_nav',
          'region' => 'content',
          'weight' => '-15',
        ),
        'veldeke_dictionary-instruct' => array(
          'module' => 'veldeke_dictionary',
          'delta' => 'instruct',
          'region' => 'content',
          'weight' => '-14',
        ),
        'veldeke_dictionary-search_terms' => array(
          'module' => 'veldeke_dictionary',
          'delta' => 'search_terms',
          'region' => 'content',
          'weight' => '-13',
        ),
        'veldeke_dictionary-az_browse' => array(
          'module' => 'veldeke_dictionary',
          'delta' => 'az_browse',
          'region' => 'content',
          'weight' => '-12',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-11',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Dictionary');
  $export['dictionary'] = $context;

  return $export;
}
