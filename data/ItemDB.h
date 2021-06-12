#pragma once

#include <nlohmann/json.hpp>
#include <fstream>
#include <iostream>
#include "../types/types.h"
using json = nlohmann::json;

struct itemInfo {
  i32 id;
  i32 sub_type;
  i32 type;
  i32 rarity;
  i32 carry_limit;
  i32 unk;
  i32 sort_order;
  i32 flags;
  i32 icon_id;
  i32 icon_color;
  i32 sell_price;
  i32 buy_price;
  std::string name;
  std::string description;

  itemInfo() {
    id = 0;
    sub_type = 0;
    type = 0;
    rarity = 0;
    carry_limit = 0;
    unk = 0;
    sort_order = 0;
    flags = 0;
    icon_id = 0;
    icon_color = 0;
    sell_price = 0;
    buy_price = 0;
  }
};

static bool operator==(const itemInfo& lhs, const itemInfo& rhs) {
  return lhs.id == rhs.id; /*
      && lhs.subType == rhs.subType
      && lhs.storageID == rhs.storageID
      && lhs.rarity == rhs.rarity
      && lhs.carryLimit == rhs.carryLimit
      && lhs.unk == rhs.unk
      && lhs.sortOrder == rhs.sortOrder
      && lhs.flags == rhs.flags
      && lhs.iconID == rhs.iconID
      && lhs.iconColor == rhs.iconColor
      && lhs.carryItem == rhs.carryItem
      && lhs.sellPrice == rhs.sellPrice
      && lhs.buyPrice == rhs.buyPrice; */
}

NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(itemInfo, id, sub_type, type, rarity, carry_limit, unk, sort_order, flags, icon_id, icon_color, sell_price, buy_price, name, description)

class ItemDB
{
  static ItemDB* instance;
  std::vector<itemInfo> items;
  std::vector<std::string> names;

  ItemDB();

public:
  static ItemDB* GetInstance();
  void Free();

  itemInfo* GetItemById(u32 id);
  itemInfo* GetItemByIndex(int index);
  int count();

  std::vector<itemInfo> itemVector();
  std::vector<std::string> itemNamesVector();
};