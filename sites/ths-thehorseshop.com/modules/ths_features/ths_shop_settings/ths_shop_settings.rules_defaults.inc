<?php
/**
 * @file
 * ths_shop_settings.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ths_shop_settings_default_rules_configuration() {
  $items = array();
  $items['commerce_payment_bank_transfer'] = entity_import('rules_config', '{ "commerce_payment_bank_transfer" : {
      "LABEL" : "Pago por Transferencia bancaria",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Payment" ],
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_bank_transfer" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : "bank_transfer"
          }
        }
      ]
    }
  }');
  $items['commerce_payment_commerce_cod'] = entity_import('rules_config', '{ "commerce_payment_commerce_cod" : {
      "LABEL" : "Pago en la tienda",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Payment" ],
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_commerce_cod" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : "commerce_cod"
          }
        }
      ]
    }
  }');
  $items['commerce_payment_paypal_wps'] = entity_import('rules_config', '{ "commerce_payment_paypal_wps" : {
      "LABEL" : "PayPal WPS",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Payment" ],
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_paypal_wps" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : { "value" : {
                "method_id" : "paypal_wps",
                "settings" : {
                  "business" : "oliverobrador@gmail.com",
                  "currency_code" : "EUR",
                  "allow_supported_currencies" : 0,
                  "language" : "ES",
                  "server" : "sandbox",
                  "payment_action" : "authorization",
                  "ipn_logging" : "notification",
                  "receiver_emails" : "Cash on Delivery ",
                  "ipn_create_billing_profile" : 0,
                  "show_payment_instructions" : 0
                }
              }
            }
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_collect_in_store'] = entity_import('rules_config', '{ "commerce_shipping_service_collect_in_store" : {
      "LABEL" : "Rate Collect in store",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "type" : "commerce_order", "label" : "Order" } },
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "collect_in_store",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_shipping_service_example'] = entity_import('rules_config', '{ "commerce_shipping_service_example" : {
      "LABEL" : "Rate Example",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_shipping" ],
      "USES VARIABLES" : { "commerce_order" : { "type" : "commerce_order", "label" : "Order" } },
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "example",
            "commerce_order" : [ "commerce-order" ]
          }
        }
      ]
    }
  }');
  $items['commerce_tax_rate_iva'] = entity_import('rules_config', '{ "commerce_tax_rate_iva" : {
      "LABEL" : "Calculate IVA",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Tax", "vat" ],
      "REQUIRES" : [ "commerce_tax" ],
      "USES VARIABLES" : { "commerce_line_item" : { "type" : "commerce_line_item", "label" : "Line item" } },
      "DO" : [
        { "commerce_tax_rate_apply" : {
            "USING" : {
              "commerce_line_item" : [ "commerce-line-item" ],
              "tax_rate_name" : "iva"
            },
            "PROVIDE" : { "applied_tax" : { "applied_tax" : "Applied tax" } }
          }
        }
      ]
    }
  }');
  return $items;
}
