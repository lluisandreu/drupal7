<?php
/**
 * @file
 * course_booking.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function course_booking_default_rules_configuration() {
  $items = array();
  $items['commerce_payment_commerce_stripe'] = entity_import('rules_config', '{ "commerce_payment_commerce_stripe" : {
      "LABEL" : "Stripe",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Payment" ],
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_commerce_stripe" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : "commerce_stripe"
          }
        }
      ]
    }
  }');
  return $items;
}
