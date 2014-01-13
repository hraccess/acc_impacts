<?php
/**
 * @file
 * acc_impacts.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function acc_impacts_taxonomy_default_vocabularies() {
  return array(
    'acc_impact_types' => array(
      'name' => 'Access Impact Types',
      'machine_name' => 'acc_impact_types',
      'description' => 'Provides an Impact Types taxonomy',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
