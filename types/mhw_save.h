#pragma once
#include "types.h"
#include "mhw_enums.h"
#include "constants.h"

#pragma pack(push, 1)
struct monsters128_u32 {
  u32 anjanath,            rathalos,          aptonoth,          jagras,
      zorah_magdaros,      mosswine,          gajau,             great_jagras,
      kestodon_male,       rathian,           pink_rathian,      azure_rathalos,
      diablos,             black_diablos,     kirin,             behemoth,
      kushala_daora,       lunastra,          teostra,           lavasioth,
      deviljho,            barroth,           uragaan,           leshen,
      pukei_pukei,         nergigante,        xeno_jiiva,        kulu_ya_ku,
      tzitzi_ya_ku,        jyaratodus,        tobi_kadachi,      paolumu,
      legiana,             great_girros,      odogaron,          radobaan,
      vaal_hazak,          dodogama,          kulve_taroth,      bazelgeuse,
      apceros,             kelbia,            kelbib,            hornetaur,
      vespoid,             mernos,            kestodon_female,   raphinos,
      shamos,              barnos,            girros,            ancient_leshen,
      gastodon,            noios,             unknown0[2],       gajalaka,
      unknown1[4],         tigrex,            nargacuga,         barioth,
      savage_deviljho,     brachydios,        glavenus,          acidic_glavenus,
      fulgur_anjanath,     coral_pukei_pukei, ruiner_nergigante, viper_tobi_kadachi,
      nightshade_paolumu,  shrieking_legiana, ebony_odogaron,    blackveil_vaal_hazak,
      seething_bazelgeuse, beotodus,          banbaro,           velkhana,
      namielle,            shara_ishvalda,    popo,              anteka,
      wulg,                cortos,            boaboa,            alatreon,
      gold_rathian,        silver_rathalos,   yian_garuga,       rajang,
      furious_rajang,      brute_tigrex,      zinogre,           stygian_zinogre,
      raging_brachydios,   safi_jiiva,        unknown2,          scarred_yian_garuga,
      frostfang_barioth,   fatalis,           unknown3[26];
};

struct monsters128_u16 {
  u16 anjanath,            rathalos,          aptonoth,          jagras,
      zorah_magdaros,      mosswine,          gajau,             great_jagras,
      kestodon_male,       rathian,           pink_rathian,      azure_rathalos,
      diablos,             black_diablos,     kirin,             behemoth,
      kushala_daora,       lunastra,          teostra,           lavasioth,
      deviljho,            barroth,           uragaan,           leshen,
      pukei_pukei,         nergigante,        xeno_jiiva,        kulu_ya_ku,
      tzitzi_ya_ku,        jyaratodus,        tobi_kadachi,      paolumu,
      legiana,             great_girros,      odogaron,          radobaan,
      vaal_hazak,          dodogama,          kulve_taroth,      bazelgeuse,
      apceros,             kelbia,            kelbib,            hornetaur,
      vespoid,             mernos,            kestodon_female,   raphinos,
      shamos,              barnos,            girros,            ancient_leshen,
      gastodon,            noios,             unknown0[2],       gajalaka,
      unknown1[4],         tigrex,            nargacuga,         barioth,
      savage_deviljho,     brachydios,        glavenus,          acidic_glavenus,
      fulgur_anjanath,     coral_pukei_pukei, ruiner_nergigante, viper_tobi_kadachi,
      nightshade_paolumu,  shrieking_legiana, ebony_odogaron,    blackveil_vaal_hazak,
      seething_bazelgeuse, beotodus,          banbaro,           velkhana,
      namielle,            shara_ishvalda,    popo,              anteka,
      wulg,                cortos,            boaboa,            alatreon,
      gold_rathian,        silver_rathalos,   yian_garuga,       rajang,
      furious_rajang,      brute_tigrex,      zinogre,           stygian_zinogre,
      raging_brachydios,   safi_jiiva,        unknown2,          scarred_yian_garuga,
      frostfang_barioth,   fatalis,           unknown3[26];
};

struct monsters128_u8 {
  u8  anjanath,            rathalos,          aptonoth,          jagras,
      zorah_magdaros,      mosswine,          gajau,             great_jagras,
      kestodon_male,       rathian,           pink_rathian,      azure_rathalos,
      diablos,             black_diablos,     kirin,             behemoth,
      kushala_daora,       lunastra,          teostra,           lavasioth,
      deviljho,            barroth,           uragaan,           leshen,
      pukei_pukei,         nergigante,        xeno_jiiva,        kulu_ya_ku,
      tzitzi_ya_ku,        jyaratodus,        tobi_kadachi,      paolumu,
      legiana,             great_girros,      odogaron,          radobaan,
      vaal_hazak,          dodogama,          kulve_taroth,      bazelgeuse,
      apceros,             kelbia,            kelbib,            hornetaur,
      vespoid,             mernos,            kestodon_female,   raphinos,
      shamos,              barnos,            girros,            ancient_leshen,
      gastodon,            noios,             unknown0[2],       gajalaka,
      unknown1[4],         tigrex,            nargacuga,         barioth,
      savage_deviljho,     brachydios,        glavenus,          acidic_glavenus,
      fulgur_anjanath,     coral_pukei_pukei, ruiner_nergigante, viper_tobi_kadachi,
      nightshade_paolumu,  shrieking_legiana, ebony_odogaron,    blackveil_vaal_hazak,
      seething_bazelgeuse, beotodus,          banbaro,           velkhana,
      namielle,            shara_ishvalda,    popo,              anteka,
      wulg,                cortos,            boaboa,            alatreon,
      gold_rathian,        silver_rathalos,   yian_garuga,       rajang,
      furious_rajang,      brute_tigrex,      zinogre,           stygian_zinogre,
      raging_brachydios,   safi_jiiva,        unknown2,          scarred_yian_garuga,
      frostfang_barioth,   fatalis,           unknown3[26];
};

struct monsters128_f32 {
  f32 anjanath,            rathalos,          aptonoth,          jagras,
      zorah_magdaros,      mosswine,          gajau,             great_jagras,
      kestodon_male,       rathian,           pink_rathian,      azure_rathalos,
      diablos,             black_diablos,     kirin,             behemoth,
      kushala_daora,       lunastra,          teostra,           lavasioth,
      deviljho,            barroth,           uragaan,           leshen,
      pukei_pukei,         nergigante,        xeno_jiiva,        kulu_ya_ku,
      tzitzi_ya_ku,        jyaratodus,        tobi_kadachi,      paolumu,
      legiana,             great_girros,      odogaron,          radobaan,
      vaal_hazak,          dodogama,          kulve_taroth,      bazelgeuse,
      apceros,             kelbia,            kelbib,            hornetaur,
      vespoid,             mernos,            kestodon_female,   raphinos,
      shamos,              barnos,            girros,            ancient_leshen,
      gastodon,            noios,             unknown0[2],       gajalaka,
      unknown1[4],         tigrex,            nargacuga,         barioth,
      savage_deviljho,     brachydios,        glavenus,          acidic_glavenus,
      fulgur_anjanath,     coral_pukei_pukei, ruiner_nergigante, viper_tobi_kadachi,
      nightshade_paolumu,  shrieking_legiana, ebony_odogaron,    blackveil_vaal_hazak,
      seething_bazelgeuse, beotodus,          banbaro,           velkhana,
      namielle,            shara_ishvalda,    popo,              anteka,
      wulg,                cortos,            boaboa,            alatreon,
      gold_rathian,        silver_rathalos,   yian_garuga,       rajang,
      furious_rajang,      brute_tigrex,      zinogre,           stygian_zinogre,
      raging_brachydios,   safi_jiiva,        unknown2,          scarred_yian_garuga,
      frostfang_barioth,   fatalis,           unknown3[26];
};

struct monsters96_16 {
  u16 great_jagras,         kulu_ya_ku,       pukei_pukei,        barroth,
      jyaratodus,           tobi_kadachi,     anjanath,           rathian,
      tzitzi_ya_ku,         paolumu,          great_girros,       radobaan,
      legiana,              odogaron,         rathalos,           diablos,
      kirin,                zorah_magdaros,   dodogama,           pink_rathian,
      bazelgeuse,           lavasioth,        uragaan,            azure_rathalos,
      black_diablos,        nergigante,       teostra,            kushala_daora,
      vaal_hazak,           xeno_jiiva,       deviljho,           kulve_taroth,
      lunastra,             behemoth,         leshen,             ancient_leshen,
      beotodus,             banbaro,          viper_tobi_kadachi, nightshade_paolumu,
      coral_pukei_pukei,    barioth,          nargacuga,          glavenus,
      tigrex,               brachydios,       acidic_glavenus,    shrieking_legiana,
      fulgur_anjanath,      ebony_odogaron,   velkhana,           seething_bazelgeuse,
      blackveil_vaal_hazak, namielle,         savage_deviljho,    ruiner_nergigante,
      shara_ishvalda,       zinogre,          yian_garuga,        scarred_yian_garuga,
      brute_tigrex,         gold_rathian,     silver_rathalos,    rajang,
      stygian_zinogre,      safi_jiiva,       furious_rajang,     raging_brachydios,
      frostfang_barioth,    alatreon,         fatalis,            monster[25];
};

struct monsters96_8 {
  u8  great_jagras,         kulu_ya_ku,       pukei_pukei,        barroth,
      jyaratodus,           tobi_kadachi,     anjanath,           rathian,
      tzitzi_ya_ku,         paolumu,          great_girros,       radobaan,
      legiana,              odogaron,         rathalos,           diablos,
      kirin,                zorah_magdaros,   dodogama,           pink_rathian,
      bazelgeuse,           lavasioth,        uragaan,            azure_rathalos,
      black_diablos,        nergigante,       teostra,            kushala_daora,
      vaal_hazak,           xeno_jiiva,       deviljho,           kulve_taroth,
      lunastra,             behemoth,         leshen,             ancient_leshen,
      beotodus,             banbaro,          viper_tobi_kadachi, nightshade_paolumu,
      coral_pukei_pukei,    barioth,          nargacuga,          glavenus,
      tigrex,               brachydios,       acidic_glavenus,    shrieking_legiana,
      fulgur_anjanath,      ebony_odogaron,   velkhana,           seething_bazelgeuse,
      blackveil_vaal_hazak, namielle,         savage_deviljho,    ruiner_nergigante,
      shara_ishvalda,       zinogre,          yian_garuga,        scarred_yian_garuga,
      brute_tigrex,         gold_rathian,     silver_rathalos,    rajang,
      stygian_zinogre,      safi_jiiva,       furious_rajang,     raging_brachydios,
      frostfang_barioth,    alatreon,         fatalis,            monster[25];
};

struct mhw_save_header
{
  u32 magic; // 0x01_00_00_00
  u32 unknown0;
  u32 unknown1;
  u8 hash[20];

  /// <summary>
  /// Size of file minus header
  /// Base Game Data Size = 9438368
  /// Iceborne Data Size = 11284640
  /// </summary>
  u64 data_size;

  u64 steam_id;
  u8 padding[16];
};

struct mhw_section_offsets
{
  u64 section[4];
};

struct mhw_section_header
{
  u32 signature;
  u32 unknown0;
  u64 size;
};

struct mhw_color
{
  u8 r, g, b, a;
};

struct mhw_pos
{
  f32 x, y;
};

struct mhw_dimension
{
  f32 width, height;
};

struct mhw_hunter
{
  str64 name;
  u32 hunter_rank;
  u32 master_rank;
  u32 zeni;
  u32 research_points;
  u32 hunter_rank_xp;
  u32 master_rank_xp;
  u32 playtime; // In seconds
};

struct mhw_character_makeup
{
  mhw_color color;
  mhw_pos pos;
  mhw_dimension size;
  f32 glossy;
  f32 metallic;
  f32 luminescent; // New in Iceborne
  u32 type;
};

struct mhw_character_appearance
{
  i32 unknown0; // New in Iceborne
  mhw_character_makeup makeup[3]; // 3 for iceborne, 2 for pre-iceborne

  mhw_color left_eye_color;
  mhw_color right_eye_color;
  mhw_color eyebrow_color;
  mhw_color facial_hair_color;

  u8 eye_width;
  u8 eye_height;
  u8 skin_color_x;
  u8 skin_color_y;
  u8 age;
  u8 wrinkles;
  u8 nose_height;
  u8 mouth_height;
  mhw_gender gender;
  u8 brow_type;
  u8 face_type;
  u8 eye_type;
  u8 nose_type;
  u8 mouth_type;
  u8 eyebrow_type;
  mhw_eyelash_length eyelash_length;
  u8 facial_hair_type;
  u32 zero0;

  mhw_color hair_color;
  mhw_color clothing_color;

  u16 hair_type;
  u8 clothing_type;
  u8 voice;
  u32 expression;
};

struct mhw_palico_appearance
{
  mhw_color pattern_color[3];
  mhw_color fur_color;
  mhw_color left_eye_color;
  mhw_color right_eye_color;
  mhw_color clothing_color;

  f32 fur_length;
  f32 fur_thickness;
  u8 pattern_type;
  u8 eye_type;
  u8 ear_type;
  u8 tail_type;
  mhw_palico_voice_type voice_type;
  mhw_palico_voice_pitch voice_pitch;
  u16 unknown0;
};

struct mhw_equipment_ref
{
  u32 type;
  u32 id;
};

struct mhw_palico_equipment
{
  mhw_equipment_ref weapon;
  mhw_equipment_ref helmet;
  mhw_equipment_ref body;
  mhw_equipment_ref gadget;
};

struct mhw_palico
{
  str64 name;
  u32 rank; // Base 1
  mhw_palico_equipment equipment;
  u32 unknown0[3];
  u8 gadget[6];
};

struct mhw_palico_loadout
{
  u32 slot_id;
  str256 name;
  u32 weapon_index;
  u32 mask_index;
  u32 coat_index;
  u32 tool_index;
  u32 unknown0;
  u32 bitmask_custom_color; // 000000mc
  u32 bitmask_rainbow; // 000000mc
  mhw_color mask_color;
  mhw_color coat_color;
};

struct mhw_weapon_usage16
{
  u16 greatsword;
  u16 longsword;
  u16 sword_and_shield;
  u16 dual_blades;
  u16 hammer;
  u16 hunting_horn;
  u16 lance;
  u16 gunlance;
  u16 switch_axe;
  u16 charge_blade;
  u16 insect_glaive;
  u16 light_bowgun;
  u16 heavy_bowgun;
  u16 bow;
};

struct mhw_weapon_usage32
{
  u32 greatsword;
  u32 longsword;
  u32 sword_and_shield;
  u32 dual_blades;
  u32 hammer;
  u32 hunting_horn;
  u32 lance;
  u32 gunlance;
  u32 switch_axe;
  u32 charge_blade;
  u32 insect_glaive;
  u32 light_bowgun;
  u32 heavy_bowgun;
  u32 bow;
};

struct mhw_hunter_equipment
{
  mhw_equipment_ref weapon;
  mhw_equipment_ref helmet;
  mhw_equipment_ref torso;
  mhw_equipment_ref arms;
  mhw_equipment_ref coil;
  mhw_equipment_ref feet;
  mhw_equipment_ref charm;
  mhw_equipment_ref tool1;
  mhw_equipment_ref tool2;
};

struct mhw_current_equipment
{
  u32 weapon;
  u32 helmet;
  u32 torso;
  u32 arms;
  u32 coil;
  u32 feet;
  u32 charm;
  u32 tool1;
  u32 tool2;
  u32 kinsect;
};

struct mhw_arena_record
{
  u32 unknown0;
  str32 partner_name;
  u64 partner_steamid;
  u64 partner_created;
  u64 date;
};

struct mhw_arena_stats
{
  u16 unknown0;
  mhw_arena_record records[5];
};

struct mhw_guild_card
{
  u64 steam_id;
  u64 created; // Timestamp
  u8 unknown0;
  u32 hunter_rank;
  u32 master_rank;
  u64 last_update; // Timestamp
  u32 unknown1;

  str64 name;
  str54 primary_group;
  u8 unknown2[16];

  mhw_character_appearance appearance;
  mhw_palico_appearance palico_appearance;
  mhw_hunter_equipment hunter_equipment;
  u8 unknown3a[12];
  mhw_equipment_ref layered_helmet;
  mhw_equipment_ref layered_torso;
  mhw_equipment_ref layered_arms;
  mhw_equipment_ref layered_coil;
  mhw_equipment_ref layered_feet;
  u8 unknown3b[8];
  mhw_color layered_color_helmet;
  mhw_color layered_color_torso;
  mhw_color layered_color_arms;
  mhw_color layered_color_coil;
  mhw_color layered_color_feet;
  u8 unknown3_[16];

  mhw_palico palico;
  u32 unity;
  u8 unknown4[16];
  u16 quests_lr;
  u16 quests_hr;
  u16 investigations;
  u16 quests_arena;
  u16 quests_mr;
  u16 quests_guiding_lands;
  u8 unknown5[12];

  u32 guiding_lands_levels[6];
  u8 unknown6[76];
  mhw_weapon_usage16 low_rank_usage;
  mhw_weapon_usage16 high_rank_usage;
  mhw_weapon_usage16 investigation_usage;
  mhw_weapon_usage16 master_rank_usage;
  mhw_weapon_usage16 guiding_lands_usage;
  u8 pose_id;
  u8 expression_id;
  u8 background_id;
  u8 sticker_id;

  str256 greeting;
  str256 title;

  u16 title_first;
  u16 title_mid;
  u16 title_last;

  mhw_pos camera_pos;
  f32 zoom;

  mhw_arena_stats arena_stats[18];
  monsters96_16 monster_captured;
  monsters96_16 monster_slayed;
  monsters96_16 monster_largest;
  monsters96_16 monster_smallest;
  monsters96_8 monster_research_level;
};

struct mhw_item_slot
{
  u32 id;
  u32 amount;
};

struct mhw_item_pouch
{
  mhw_item_slot items[24];
  mhw_item_slot ammo[16];
  u8 unknown1[296];
};

struct mhw_storage
{
  mhw_item_slot items[200];
  mhw_item_slot ammo[200];
  mhw_item_slot materials[1250];
  mhw_item_slot decorations[500];
};

struct mhw_items_discovered
{
  u8 items[400];
};

struct mhw_investigation
{
  u32 filled; // 30 75 00 00
  u8 selected;
  u32 attempts;
  u32 seen; // 3 = true, 0 = false
  u8 locale;
  u8 rank;
  mhw_monster_index mon[3];
  mhw_bool tempered[3];
  u8 hp;
  u8 attack;
  u8 defense;
  u8 size_modifier;
  u8 unknown0;
  u8 flourish_index;
  u8 goal_index;
  u8 unknown1;
  u8 faint_index;
  u8 player_count_index;
  u8 bonus_rewards;
  u8 zenny_multiplyer;
};

struct mhw_radial_item
{
  u32 category_id;
  u32 entry_id;
  u32 unknown0;
};

struct mhw_radial
{
  str32 name;
  mhw_radial_item items[8];
};

struct mhw_item_loadout
{
  str32 name;
  mhw_item_slot items[24];
  mhw_item_slot ammo[16];
  u32 unknown0[320 / 4];
  mhw_radial radial[4];
};

struct mhw_item_loadouts
{
  mhw_item_loadout loadout[120];
  u8 order[120];
  // bitmask of which loadouts have data saved.
  u8 registered[16];
};

struct mhw_pigments
{
  u32 bitmask_custom_color; // 000htacf
  u32 bitmask_rainbow; // 000htacf
  mhw_color head;
  mhw_color torso;
  mhw_color arms;
  mhw_color coil;
  mhw_color feet;
  mhw_color whole;
};

struct mhw_layered_equipment
{
  i32 head;
  i32 torso;
  i32 arms;
  i32 coil;
  i32 feet;
  i32 unused;
  mhw_pigments pigments;
};

struct mhw_equipment_loadout
{
  u32 slot_id;
  str256 name;
  u32 weapon_index;
  u32 helmet_index;
  u32 torso_index;
  u32 arms_index;
  u32 coil_index;
  u32 feet_index;
  u32 charm_index;
  u32 tool1_index;
  u32 tool2_index;
  u32 weapon_decos[3];
  u32 helmet_decos[3];
  u32 torso_decos[3];
  u32 arms_decos[3];
  u32 coil_decos[3];
  u32 feet_decos[3];
  u32 charm_decos[3];
  u32 tool1_decos[3];
  u32 tool2_decos[3];
  u32 unknown0[45];
  mhw_pigments armor;
  mhw_layered_equipment layered;
  u32 unknown2;
};

struct mhw_layered_loadout
{
  u32 slot_id;
  str256 name;
  mhw_layered_equipment layered;
};

struct mhw_equipment
{
  i32 sort_index;
  i32 serial_item_category;
  i32 type;
  u32 id;
  u32 level;
  u32 points;
  i32 decos[3];
  i32 bowgun_mods[5];
  u32 augments[3];
  u32 unknown0[2];
  i32 pendant;
  u8 extra_slots;
  u8 attack_increase;
  u8 affinity_increase;
  u8 defense_increase;
  u8 slot_upgrade;
  u8 health_regen;
  u8 element_status_effect_up;
  u8 unknown1[11];
  u8 custom_upgrades[12]; // u8 so it doesn't print funny.
  i16 base;
  i16 parts;
  u16 awakens[5];
  u16 awakened_checksum;
};

struct mhw_shoutout
{
  u32 length;
  str128 shoutout; //  40 usable, init with nonsense data pattern
};

struct mhw_shoutout_settings
{
  mhw_shoutout shoutout_manual[32]; // 30 usable
  mhw_shoutout shoutout_custom[32]; // 24 usable
  mhw_shoutout shoutout_auto[32];   // 18 usable
  u32 mask_auto_enabled;            // auto shoutouts
  u32 mask_auto_translation;        // auto shoutouts
};

struct mhw_botanical_fertilizer
{
  u32 effect;
  u32 duration;
};

struct mhw_botanical_research
{
  mhw_item_slot cultivating[4];
  mhw_botanical_fertilizer fertilizer[5];
  mhw_item_slot harvest[50];
};

struct mhw_save_quests
{
  u32 investigations;
  u32 arena_quests;
  u32 unknown0[3];
  u32 high_rank;
  u32 low_rank;
  u32 unknown1;
  u32 master_rank;
  u32 lr_hr_sos;
};

struct mhw_safari_member
{
  u64 steam_id;
  u32 unknown0[9];
  str64 palico;
  str64 character;
  u32 unknown1[29];
};

struct mhw_safari
{
  u8 unknown0;
  u32 unknown1[24 / 4];
  mhw_safari_member members[3];
};

struct mhw_lynian_observatory
{
  u32 unknown0;
  u8 lynian_research_reward_flags_a[8];
  u8 lynian_research_reward_flags_b[8];
  u8 lynian_research_reward_flags_c[8];
  u32 unknown1;
  u8 lynian_research_unseen_flags[8];
  u8 unknown_lynian_research_flags[8];
  u8 lynian_research_unlock_flags[8];
  u32 lynian_research_level[40];
};

struct mhw_guiding_lands_analysis
{
  u32 monster;
  u32 level;
  u32 unknown0[4];
};

struct mhw_guiding_lands
{
  u32 unknown0;
  u32 region_levels[8];
  u32 level_total;
  u32 unknown1[128 / 4];
  u32 monsters[3];
  u32 regions[3];
  u32 monster_levels[3];
  u32 unknown2[3];
  u8 region_level_unlocked[8];
  mhw_guiding_lands_analysis analyses[8];
};

struct mhw_endemic_placement
{
  u32 endemic;
  u8 regular;
  u8 gold;
  u8 mini;
  u8 padding;
};

struct mhw_endemic_life
{
  u32 endemic_count[568];
  u32 endemic_large_count[568];
  u32 endemic_small_count[568];
  u16 endemic_largest[568];
  u16 endemic_smallest[568];
  mhw_endemic_placement endemic_placement[64];
};

struct mhw_slot_settings
{
  u8 minimap_rotation;
  u8 unknown0a[2];
  u8 camera_style;
  u8 unknown0b[2];
  u8 dash_settings;
  u8 target_settings;
  u8 item_control_settings;
  u8 display_head_armor;
  u8 unknown0_[2];
  mhw_bool save_manual;
  mhw_toggle vibration;
  u8 unknown1a;
  u8 camera_controls;
  u8 pad_camera_speed;
  u8 reticle_controls;
  u8 pad_reticle_speed;
  u8 reticle_direction;
  u8 target_camera_vertical_settings;
  u8 focus_camera_settings;
  u8 slinger_settings;
  u8 unknown1b;
  u8 sheathe_settings;
  u8 directional_control_type;
  u8 target_camera_controls;
  u8 unknown1c[3];
  mhw_toggle damage_indicators;
  u8 switch_l1l2_r1r2;
  u8 unknown1_[6];
  u8 quest_join_settings;
  mhw_toggle aim_assist;
  u8 radial_menu_settings;
  u8 start_menu_navigation;
  u8 hp_stamina_gauge_setting;
  u8 unknown3[7];
  u8 mouse_sensitivity;
  u8 mouse_sensitivity_vertical_bias;
  u8 mouse_sensitivity_aiming;
  u8 mouse_sensitivity_aiming_vertical_bias;
  u8 keyboard_shortcut_input;
  u8 focus_camera_for_mouse_controls;
  u8 unknown3b[4];
  u8 default_return_point;
  u8 unknown4[7];
  mhw_toggle hud_display[9];
  u8 color_blind_settings;
  u8 unknown5[3];
  u8 camera_scoutfly;
  u8 unknown6;
  u8 player_silhouette;
  u8 trajectory_reticle_controls;
  u8 hunting_horn_display;
  mhw_toggle display_character_names;
  u8 mouse_special_scope_bias;
  u8 aim_cancellation_melee;
  u8 aim_cancellation_ranged;
  u8 swap_keys_while_grappling;
  u8 obtained_item_placement;
  mhw_toggle surveyor_set_controls;
  u8 swap_keys_while_mounted;
  u8 unknown7[34];
};

struct mhw_seliana_room_deco {
  u32 id;
  u32 color_type; // 0 = color, 1 = pattern, 2 = mat
  mhw_color color;
  u32 pattern;
  u32 material;
};

struct mhw_seliana_room_shelf_item {
  u32 position;
  u32 item;
};

struct mhw_seliana_room_config {
  u8 theme;
  u8 wallpaper;
  u8 floor;
  mhw_seliana_room_deco unused0;
  mhw_seliana_room_deco basic_curtains_small;
  mhw_seliana_room_deco basic_curtains_large;
  mhw_seliana_room_deco f1_sofa;
  mhw_seliana_room_deco f1_bed_bed;
  mhw_seliana_room_deco f1_maintable_maintable;
  mhw_seliana_room_deco f1_maintable_chairs;
  mhw_seliana_room_deco f1_maintable_tabletop;
  mhw_seliana_room_deco flower_bed1;
  mhw_seliana_room_deco music_player;
  mhw_seliana_room_deco f2_long_desk_long_desk;
  mhw_seliana_room_deco basic_lights;
  mhw_seliana_room_deco f2_long_desk_desktop;
  mhw_seliana_room_deco f1_shelf;
  mhw_seliana_room_deco f1_bed_shelf;
  mhw_seliana_room_deco unused1;
  mhw_seliana_room_deco f2_deco_shelves_shelf2;
  mhw_seliana_room_deco f2_deco_shelves_shelf1;
  mhw_seliana_room_deco flower_bed2;
  mhw_seliana_room_deco f1_staircase_special_decor1;
  mhw_seliana_room_deco wall_0_large;
  mhw_seliana_room_deco wall_3_large;
  mhw_seliana_room_deco f1_staircase_special_decor2;
  mhw_seliana_room_deco f1_bed_lamp;
  mhw_seliana_room_deco wall_1_small;
  mhw_seliana_room_deco wall_2_small;
  mhw_seliana_room_deco f2_deco_shelves_wall_decor;
  mhw_seliana_room_deco f2_hanging_ornament1;
  mhw_seliana_room_deco f2_hanging_ornament2;
  mhw_seliana_room_deco f2_hanging_ornament3;
  mhw_seliana_room_deco f1_rugs;
  mhw_seliana_room_deco f2_rugs;
  mhw_seliana_room_deco unused2[8];
  mhw_seliana_room_shelf_item shelf_items[64];
};

struct mhw_seliana_room
{
  mhw_seliana_room_config room_config;
  u8 unknown0[4];
  mhw_seliana_room_config room_configs[24];

  str32s room_config_names[24];
  u8 seliana_music_player_song;
  u8 unknown1[2578];
  u8 room_status;
  u16 passcode;

  u8 unknown2[sizeof(u32) * 2];
};

struct mhw_npc_chat_entry
{
  u32 npc;
  u32 dialogue_id;
};

struct mhw_smithy
{
  // Weapons
  u8 seen_greatsword[64];
  u8 seen_sword_and_shield[64];
  u8 seen_dual_blades[64];
  u8 seen_longsword[64];
  u8 seen_hammer[64];
  u8 seen_hunting_horn[64];
  u8 seen_lance[64];
  u8 seen_gunlance[64];
  u8 seen_switchaxe[64];
  u8 seen_charge_blade[64];
  u8 seen_insect_glaive[64];
  u8 seen_light_bowgun[64];
  u8 seen_heavy_bowgun[64];
  u8 seen_bow[64];

  // Armor (includes layered)
  u8 seen_helmet[128];
  u8 seen_torso[128];
  u8 seen_arms[128];
  u8 seen_coil[128];
  u8 seen_feet[128];

  // Other
  u8 unknown0[448];
  u8 seen_palico_weapon[64];
  u8 seen_palico_hood[64];
  u8 unknown1[64];
  u8 seen_palico_coat[64];
  u8 unknown2[128];
  u8 seen_kinsects[16];
};

struct mhw_wishlist_item
{
  // 1 = Armor, layered, full armor
  // 2 = Weapon
  // 9 = Pendant
  u32 type;
  mhw_equipment_ref equipment;
  u32 pendant_id;
};

struct mhw_progress_flags
{
  u8 unknown0[14];
  u8 unknown1a : 1;
  u8 delivery_completed_setting_up_camp_ancient_forest_i : 1;
  u8 unknown1b : 1;
  u8 delivery_completed_setting_up_camp_ancient_forest_ii : 1;
  u8 unknown1c : 4;
  u8 unknown2a : 1;
  u8 delivery_completed_setting_up_camp_coral_highlands : 1;
  u8 unknown2b : 6;
  u8 unknown3[27];
  u8 unknown4a : 7;
  u8 delivery_obtained_a_great_help : 1;
  u8 delivery_completed_a_great_help : 1;
  u8 unknown5a : 7;
  u8 unknown6[58];
  u8 unknown7a : 1;
  u8 npc_chat_arena_lass_introduction : 1;
  u8 unknown7b : 6;
  u8 unknown8[25];
  u8 unknown9a : 4;
  u8 event_astera_gathering_hub_celestial_pursuit : 1;
  u8 unknown9b : 3;
  u8 unknown10[24];
  u8 unknown11a : 4;
  u8 misc_can_craft_bushi_layered : 1;
  u8 layered_bushi_kabuto_sabi : 1;
  u8 layered_bushi_muneate_sabi : 1;
  u8 layered_bushi_kote_sabi : 1;
  u8 layered_bushi_koshiate_sabi : 1;
  u8 layered_bushi_suneate_sabi : 1;
  u8 layered_bushi_kabuto_homare : 1;
  u8 layered_bushi_muneate_homare : 1;
  u8 layered_bushi_kote_homare : 1;
  u8 layered_bushi_koshiate_homare : 1;
  u8 layered_bushi_suneate_homare : 1;
  u8 layered_brigade : 1;
  u8 misc_layered_butterfly_unknown : 1;
  u8 layered_butterfly : 1;
  u8 misc_layered_death_stench_unknown : 1;
  u8 layered_death_stench : 1;
  u8 layered_shadow_shades : 1;
  u8 misc_layered_guild_cross_unknown : 1;
  u8 layered_guild_cross : 1;
  u8 misc_layered_dante_unknown : 1;
  u8 layered_dante : 1;
  u8 misc_layered_drachen_unknown : 1;
  u8 layered_drachen : 1;
  u8 misc_layered_blossom_unknown : 1;
  u8 layered_blossom : 1;
  u8 misc_layered_mosswine_mask_or_faux_felyne_unknown : 1;
  u8 layered_mosswine_mask : 1;
  u8 layered_faux_felyne : 1;
  u8 unknown12a : 1;
  u8 misc_layered_diver_or_shadow_shades_unknown : 1;
  u8 layered_diver : 1;
  u8 unknown12b : 1;
  u8 misc_layered_sakura_unknown : 1;
  u8 layered_sakura : 1;
  u8 misc_layered_sealed_eyepatch_or_wiggler_head_unknown : 1;
  u8 misc_layered_harvest_unknown : 1;
  u8 layered_harvest : 1;
  u8 layered_sealed_eyepatch : 1;
  u8 layered_wiggler_head : 1;
  u8 misc_layered_origin_unknown : 1;
  u8 layered_origin : 1;
  u8 misc_layered_orion_unknown : 1;
  u8 layered_orion : 1;
  u8 unknown13a : 1;
  u8 layered_skull_mask : 1;
  u8 misc_layered_beetle_unknown : 1;
  u8 layered_beetle : 1;
  u8 misc_layered_gala_suit_unknown : 1;
  u8 layered_gala_suit : 1;
  u8 misc_layered_ryu_unknown : 1;
  u8 layered_ryu : 1;
  u8 misc_layered_zorah_gamma_unknown : 1;
  u8 unknown14a : 3;
  u8 misc_layered_skull_mask_or_kulu_ya_ku_head : 1;
  u8 layered_kulu_ya_ku_head : 1;
  u8 misc_layered_commision_unknown : 1;
  u8 layered_commision : 1;
  u8 unknown14b : 1;
  u8 unknown15[2];
  u8 unknown16a : 2;
  u8 layered_bayek : 1;
  u8 unknown16b : 1;
  u8 misc_layered_geralt_of_rivia_or_ciri : 1;
  u8 unknown16c : 1;
  u8 layered_geralt_of_rivia : 1;
  u8 layered_ciri : 1;
  u8 unknown17[144];
  u8 unknown18a : 1;
  u8 npc_chat_lynian_researcher_started_surveyor_set_tutorial : 1;
  u8 npc_chat_lynian_researcher_completed_surveyor_set_tutorial : 1;
  u8 unknown18b : 2;
  u8 npc_chat_lynian_researcher_did_surveyor_set_tutorial : 1;
  u8 unknown18c : 2;
  u8 unknown19a : 2;
  u8 npc_chat_lynian_researcher_received_surveyor_set : 1;
  u8 unknown19b : 5;
  u8 unknown20[28];
  u8 misc_layered_a_unknown : 1;
  u8 misc_can_craft_layered_armor : 1;
  u8 misc_used_a_guiding_lands_material : 1;
  u8 unknown21a : 5;
  u8 unknown22[2];
  u8 npc_chat_housekeeper_purr_oject_stone : 1;
  u8 unknown23a : 4;
  u8 npc_chat_seliana_armory_ghillie_mantle_idea : 1;
  u8 unknown23b : 2;
  u8 npc_chat_seliana_armory_glider_mantle_idea : 1;
  u8 unknown24a : 7;
  u8 unknown25a : 7;
  u8 npc_chat_seliana_sailor_introduction : 1;
  u8 unknown26a : 2;
  u8 npc_chat_grammeowster_chef_this_here_ladle : 1;
  u8 unknown26b : 5;
  u8 unknown27[5];
  u8 unknown28a : 4;
  u8 delivery_obtained_happy_little_trees : 1;
  u8 delivery_obtained_desert_but_not_deserted : 1;
  u8 delivery_obtained_refreshing_colors : 1;
  u8 delivery_obtained_creepy_canvas : 1;
  u8 delivery_obtained_where_elders_play : 1;
  u8 delivery_obtained_snowy_spectacle : 1;
  u8 delivery_obtained_silent_hunter_swift_as_the_wind : 1;
  u8 delivery_completed_happy_little_trees : 1;
  u8 delivery_completed_desert_but_not_deserted : 1;
  u8 delivery_completed_refreshing_colors : 1;
  u8 delivery_completed_creepy_canvas : 1;
  u8 delivery_completed_where_elders_play : 1;
  u8 delivery_completed_snowy_spectacle : 1;
  u8 delivery_completed_silent_hunter_swift_as_the_wind : 1;
  u8 delivery_obtained_magnificent_magdaros : 1;
  u8 delivery_completed_magnificent_magdaros : 1;
  u8 unknown29a : 4;
  u8 unknown30[7];
  u8 unknown31a : 6;
  u8 misc_layered_b_unknown : 1;
  u8 unknown31b : 1;
  u8 unknown32[29];
  u8 unknown33a : 4;
  u8 guiding_lands_unlock_volcanic : 1;
  u8 unknown33b : 3;
  u8 unknown34[12];
  u8 guiding_lands_unlock_tundra : 1;
  u8 unknown35a : 7;
  u8 unknown36;
  u8 unknown37a : 3;
  u8 delivery_completed_the_house_of_holiday_joy : 1;
  u8 delivery_completed_lighting_up_the_place : 1;
  u8 unknown37b : 3;
  u8 unknown38[9];
  u8 unknown39a : 7;
  u8 layered_direwolf_plus : 1;
  u8 unknown40a : 1;
  u8 layered_thermae : 1;
  u8 layered_clockwork_alpha_plus : 1;
  u8 layered_dragonking_eyepatch : 1;
  u8 layered_strategist_spectacles : 1;
  u8 layered_pulverizing_feather : 1;
  u8 layered_crystal_earring : 1;
  u8 layered_leather : 1;
  u8 layered_chain : 1;
  u8 layered_hunter_alpha : 1;
  u8 layered_hunter_beta : 1;
  u8 layered_bone : 1;
  u8 layered_alloy : 1;
  u8 layered_vespoid : 1;
  u8 layered_hornetaur : 1;
  u8 layered_kestodon : 1;
  u8 layered_gajau : 1;
  u8 layered_shamos : 1;
  u8 layered_jagras : 1;
  u8 layered_kulu_ya_ku : 1;
  u8 layered_tzitzi_ya_ku : 1;
  u8 layered_great_girros : 1;
  u8 layered_pukei_pukei_alpha : 1;
  u8 layered_pukei_pukei_beta : 1;
  u8 layered_barroth : 1;
  u8 layered_anjanath_alpha : 1;
  u8 layered_anjanath_beta : 1;
  u8 layered_jyaratodus : 1;
  u8 layered_tobi_kadachi : 1;
  u8 layered_paolumu : 1;
  u8 layered_rathian_alpha : 1;
  u8 layered_rathian_beta : 1;
  u8 layered_rath_heart_alpha : 1;
  u8 layered_rath_heart_beta : 1;
  u8 layered_radobaan_alpha : 1;
  u8 layered_radobaan_beta : 1;
  u8 layered_gastodon : 1;
  u8 layered_barnos : 1;
  u8 layered_dodogama : 1;
  u8 layered_zorah_alpha : 1;
  u8 layered_zorah_beta : 1;
  u8 layered_zorah_gamma : 1;
  u8 layered_high_metal : 1;
  u8 layered_ingot : 1;
  u8 layered_lavasioth_alpha : 1;
  u8 layered_lavasioth_beta : 1;
  u8 layered_legiana_alpha : 1;
  u8 layered_legiana_beta : 1;
  u8 layered_odogaron_alpha : 1;
  u8 layered_odogaron_beta : 1;
  u8 layered_rathalos_alpha : 1;
  u8 layered_rathalos_beta : 1;
  u8 layered_rath_soul_alpha : 1;
  u8 layered_rath_soul_beta : 1;
  u8 layered_diablos_alpha : 1;
  u8 layered_diablos_beta : 1;
  u8 layered_diablos_nero_alpha : 1;
  u8 layered_diablos_nero_beta : 1;
  u8 layered_uragaan_alpha : 1;
  u8 layered_uragaan_beta : 1;
  u8 layered_bazelguese_alpha : 1;
  u8 layered_bazelguese_beta : 1;
  u8 layered_dober_alpha : 1;
  u8 layered_dober_beta : 1;
  u8 layered_damascus_alpha : 1;
  u8 layered_damascus_beta : 1;
  u8 layered_nergigante_alpha : 1;
  u8 layered_nergigante_beta : 1;
  u8 layered_nergigante_gamma : 1;
  u8 layered_teostra_alpha : 1;
  u8 layered_teostra_beta : 1;
  u8 layered_teostra_gamma : 1;
  u8 layered_kushala_alpha : 1;
  u8 layered_kushala_beta : 1;
  u8 layered_kushala_gamma : 1;
  u8 layered_vaal_hazak_alpha : 1;
  u8 layered_vaal_hazak_beta : 1;
  u8 layered_vaal_hazak_gamma : 1;
  u8 layered_kirin_alpha : 1;
  u8 layered_kirin_beta : 1;
  u8 layered_kirin_gamma : 1;
  u8 layered_xeno_alpha : 1;
  u8 layered_xeno_beta : 1;
  u8 layered_xeno_gamma : 1;
  u8 layered_deviljho_alpha : 1;
  u8 layered_deviljho_beta : 1;
  u8 layered_kulve_alpha : 1;
  u8 layered_kulve_beta : 1;
  u8 layered_kulve_gamma : 1;
  u8 layered_lunastra_alpha : 1;
  u8 layered_lunastra_beta : 1;
  u8 layered_lunastra_gamma : 1;
  u8 unknown41a : 4;
  u8 unknown42;
  u8 unknown43a : 2;
  u8 layered_rose : 1;
  u8 layered_passion : 1;
  u8 layered_demonlord : 1;
  u8 layered_oolong : 1;
  u8 layered_astral : 1;
  u8 layered_azure_starlord : 1;
  u8 layered_azure_age : 1;
  u8 unknown44a : 2;
  u8 layered_leon_plus : 1;
  u8 layered_claire_plus : 1;
  u8 layered_faux_kelbi : 1;
  u8 layered_skull_scarf : 1;
  u8 layered_sealed_dragon_cloth : 1;
  u8 layered_wyverian_ears : 1;
  u8 layered_faux_aptonoth : 1;
  u8 layered_duffel_penguin_plus : 1;
  u8 layered_hare_band : 1;
  u8 layered_downy_crake : 1;
  u8 layered_pearlspring_plus : 1;
  u8 layered_goldspring_macaque : 1;
  u8 layered_kadachi_scarf : 1;
  u8 layered_buff_body_alpha_plus : 1;
  u8 layered_velkhana_gamma_plus : 1;
  u8 layered_namielle_gamma_plus : 1;
  u8 unknown45a : 1;
  u8 layered_buff_body_gamma_plus : 1;
  u8 layered_innerwear_alpha : 1;
  u8 layered_guardian : 1;
  u8 layered_artian : 1;
  u8 unknown46a : 1;
  u8 layered_clockwork_beta_plus : 1;
  u8 layered_black_belt : 1;
  u8 layered_guild_palace_plus : 1;
  u8 layered_guildwork_plus : 1;
  u8 layered_acrobat : 1;
  u8 layered_showman : 1;
  u8 layered_innerwear_beta : 1;
  u8 layered_artemis : 1;
  u8 unknown47a : 7;
  u8 unknown48[41];
  u8 unknown49a : 7;
  u8 layered_vespoid_plus : 1;
  u8 layered_hornetaur_plus : 1;
  u8 layered_wulg_plus : 1;
  u8 layered_cortos_plus : 1;
  u8 layered_jagras_plus : 1;
  u8 layered_tzitzi_ya_ku_plus : 1;
  u8 layered_great_girros_plus : 1;
  u8 layered_dodogama_plus : 1;
  u8 layered_kulu_ya_ku_plus : 1;
  u8 layered_pukei_pukei_plus : 1;
  u8 layered_coral_pukei_plus : 1;
  u8 layered_barroth_plus : 1;
  u8 layered_jyaratodus_plus : 1;
  u8 layered_beotodus_plus : 1;
  u8 layered_tobi_kadachi_plus : 1;
  u8 layered_viper_kadachi_plus : 1;
  u8 layered_banbaro_alpha_plus : 1;
  u8 layered_banbaro_beta_plus : 1;
  u8 layered_anjanath_alpha_plus : 1;
  u8 layered_anjanath_beta_plus : 1;
  u8 layered_fulgur_anja_alpha_plus : 1;
  u8 layered_fulgur_anja_beta_plus : 1;
  u8 layered_rathian_alpha_plus : 1;
  u8 layered_rathian_beta_plus : 1;
  u8 layered_rath_heart_alpha_plus : 1;
  u8 layered_rath_heart_beta_plus : 1;
  u8 layered_paolumu_plus : 1;
  u8 layered_lumu_phantasm_plus : 1;
  u8 layered_radobaan_plus : 1;
  u8 layered_barioth_alpha_plus : 1;
  u8 layered_barioth_beta_plus : 1;
  u8 layered_rathalos_alpha_plus : 1;
  u8 layered_rathalos_beta_plus : 1;
  u8 layered_rath_soul_alpha_plus : 1;
  u8 layered_rath_soul_beta_plus : 1;
  u8 layered_diablos_alpha_plus : 1;
  u8 layered_diablos_beta_plus : 1;
  u8 layered_diablos_nero_alpha_plus : 1;
  u8 layered_diablos_nero_beta_plus : 1;
  u8 layered_legiana_alpha_plus : 1;
  u8 layered_legiana_beta_plus : 1;
  u8 layered_shrieking_legia_alpha_plus : 1;
  u8 layered_shrieking_legia_beta_plus : 1;
  u8 layered_odogaron_alpha_plus : 1;
  u8 layered_odogaron_beta_plus : 1;
  u8 layered_death_garon_alpha_plus : 1;
  u8 layered_death_garon_beta_plus : 1;
  u8 layered_lavasioth_plus : 1;
  u8 layered_uragaan_plus : 1;
  u8 layered_nargacuga_alpha_plus : 1;
  u8 layered_nargacuga_beta_plus : 1;
  u8 layered_glavenus_alpha_plus : 1;
  u8 layered_glavenus_beta_plus : 1;
  u8 layered_acidic_glavenus_alpha_plus : 1;
  u8 layered_acidic_glavenus_beta_plus : 1;
  u8 layered_brachydios_alpha_plus : 1;
  u8 layered_brachydios_beta_plus : 1;
  u8 layered_tigrex_alpha_plus : 1;
  u8 layered_tigrex_beta_plus : 1;
  u8 layered_brute_tigrex_alpha_plus : 1;
  u8 layered_brute_tigrex_beta_plus : 1;
  u8 layered_seething_bazel_alpha_plus : 1;
  u8 layered_seething_bazel_beta_plus : 1;
  u8 layered_savage_jho_alpha_plus : 1;
  u8 layered_savage_jho_beta_plus : 1;
  u8 layered_velkhana_alpha_plus : 1;
  u8 layered_velkhana_beta_plus : 1;
  u8 layered_blackveil_hazak_alpha_plus : 1;
  u8 layered_blackveil_hazak_beta_plus : 1;
  u8 layered_teostra_alpha_plus : 1;
  u8 layered_teostra_beta_plus : 1;
  u8 layered_kushala_alpha_plus : 1;
  u8 layered_kushala_beta_plus : 1;
  u8 layered_kirin_alpha_plus : 1;
  u8 layered_kirin_beta_plus : 1;
  u8 layered_namielle_alpha_plus : 1;
  u8 layered_namielle_beta_plus : 1;
  u8 layered_shara_ishvalda_alpha_plus : 1;
  u8 layered_shara_ishvalda_beta_plus : 1;
  u8 layered_yian_garuga_alpha_plus : 1;
  u8 layered_yian_garuga_beta_plus : 1;
  u8 layered_zinogre_alpha_plus : 1;
  u8 layered_zinogre_beta_plus : 1;
  u8 layered_golden_lune_alpha_plus : 1;
  u8 layered_golden_lune_beta_plus : 1;
  u8 layered_silver_sol_alpha_plus : 1;
  u8 layered_silver_sol_beta_plus : 1;
  u8 layered_lunastra_alpha_plus : 1;
  u8 layered_lunastra_beta_plus : 1;
  u8 layered_ruiner_nergi_alpha_plus : 1;
  u8 layered_ruiner_nergi_beta_plus : 1;
  u8 layered_rajang_alpha_plus : 1;
  u8 layered_rajang_beta_plus : 1;
  u8 layered_stygian_zin_alpha_plus : 1;
  u8 layered_stygian_zin_beta_plus : 1;
  u8 layered_safi_jiiva_alpha_plus : 1;
  u8 layered_safi_jiiva_beta_plus : 1;
  u8 layered_furious_rajang_alpha_plus : 1;
  u8 layered_furious_rajang_beta_plus : 1;
  u8 layered_raging_brachy_alpha_plus : 1;
  u8 layered_raging_brachy_beta_plus : 1;
  u8 layered_frostfang_barioth_alpha_plus : 1;
  u8 layered_frostfang_barioth_beta_plus : 1;
  u8 layered_alatreon_alpha_plus : 1;
  u8 layered_alatreon_beta_plus : 1;
  u8 layered_fatalis_alpha_plus : 1;
  u8 layered_fatalis_beta_plus : 1;
  u8 layered_kulve_taroth_alpha_plus : 1;
  u8 layered_kulve_taroth_beta_plus : 1;
  u8 unknown50a : 4;
  u8 event_seliana_gathering_hub_grand_appreciation : 1;
  u8 unknown51a : 7;
  u8 unknown52[11];
};

struct mhw_save_slot
{
  u32 unknown0;
  mhw_hunter hunter;
  mhw_character_appearance appearance;
  u8 unknown1[382];
  mhw_palico_appearance palico_appearance;

  mhw_guild_card guild_card;
  mhw_guild_card collected_guild_card[100];
  u16 guild_card_order[100];

  u8 unknown2[516];
  mhw_guild_card receive_guild_card[20];
  u32 unknown3;
  mhw_current_equipment current_equipment;
  u8 unknown4[sizeof(u32) * 6];
  u8 unknown_monster_a[sizeof(monsters128_u16)];
  u8 unknown_monster_b[sizeof(monsters128_u8)];
  u8 unknown_monster_flags_a[16];
  u8 unknown_monster_flags_b[16];
  u8 unknown_monster_flags_c[16];
  u8 unknown_monster_flags_d[16];
  monsters128_u32 monsters_captured;
  monsters128_u32 monsters_slain;
  u8 unknown_monster_c[sizeof(monsters128_u32)];
  u8 unknown_monster_d[sizeof(monsters128_u32)];
  u8 unknown_monster_e[sizeof(monsters128_u32)]; // MR slain?
  u8 unknown_monster_f[sizeof(monsters128_u32)];
  u8 unknown5[sizeof(u32) * 7];
  monsters128_u32 monster_largest;
  monsters128_u32 monster_smallest;
  monsters128_f32 monster_xp;
  monsters128_u32 monster_level;
  monsters128_f32 monster_xp_cap;
  
  u8 unknown6a[548];
  mhw_monster_index capture_monster_index;
  u32 capture_monster_size;
  u8 unknown6b[22];
  mhw_items_discovered discovered_items;
  mhw_endemic_life endemic_life;
  mhw_seliana_room seliana_room;

  mhw_item_loadouts item_loadouts;
  mhw_item_pouch item_pouch;
  mhw_storage storage;

  mhw_equipment equipment[2500];
  mhw_equipment unused_equipment[510];
  mhw_equipment palico_equipment[1250]; // Only 750 used
  u32 equipment_index_table[2500];
  u32 unused_equipment_index_table[500]; // 510 - 500 = 10?
  u32 palico_equipment_index_table[1250];
  u8 unknown10a_[4096];

  u32 gesture_order[512];
  u32 pose_order[256];
  u8 unknown10b[sizeof(u32) * 256];

  u32 unknown10c_a;
  mhw_wishlist_item wishlist[36];
  u8 unknown10c_[2628 - 4 - sizeof(mhw_wishlist_item) * 36];
  mhw_smithy smithy;

  u8 unknown10d[80];
  u32 layered_helmet;
  u32 layered_torso;
  u32 layered_arms;
  u32 layered_coil;
  u32 layered_feet;
  u8 unknown10e[68];
  u32 favourite_stickers[10];
  u32 sticker_count[256];
  u8 unknown10f[1064];
  u32 layered_color_helmet;
  u32 layered_color_torso;
  u32 layered_color_arms;
  u32 layered_color_coil;
  u32 layered_color_feet;
  u32 layered_color_whole;
  u8 unknown10g[20];

  mhw_radial radial_menu[8];
  u8 unknown10h[sizeof(u32) * 3280];
  mhw_npc_chat_entry npc_chat_progress[2048];
  mhw_slot_settings settings;
  mhw_progress_flags progress;
  u8 unknown10_[19];

  str64 palico_name;
  u32 palico_xp;
  u32 vigorwasp_spray;
  u32 flashfly_cage;
  u32 shieldspire;
  u32 coral_orchestra;
  u32 plunderblade;
  u32 meowlotov_cocktail;
  u8 unknown11[sizeof(u32) * 10];

  u8 unknown12a[336];
  u8 unlocked_optionals[64];
  u8 unknown12b[64];
  u8 seen_optionals[64];
  u8 unknown12c[84];
  u8 unknown12_[sizeof(u32) * 201];

  mhw_investigation investigations[400];
  u8 unknown13[2614];

  u32 tool_unlocks[4];
  mhw_equipment tools[128];
  u8 pendants_unlocked[32];
  u8 pendants_seen[32];

  u8 unknown14a[24];
  u32 registered_bounties[6];
  u8 unknown14b[1976];
  u32 steamworks_natural_fuel;
  u32 steamworks_stored_fuel;
  // [92] unlocks for hub functions?
  u8 unknown14c[96];

  mhw_equipment_loadout equipment_loadouts[224];
  mhw_layered_loadout layered_loadouts[112];
  mhw_palico_loadout palico_loadouts[24];
  mhw_botanical_research botanist;
  u8 unknown15[213];
  mhw_safari safaris[4];
  u8 unknown16[284];

  mhw_shoutout_settings shoutout_settings;

  u8 unknown17[761];
  mhw_save_quests completed;
  u8 unknown18[2048];
  mhw_weapon_usage32 high_rank_usage;
  mhw_weapon_usage32 low_rank_usage;
  mhw_weapon_usage32 investigations_usage;
  mhw_weapon_usage32 master_rank_usage;
  mhw_weapon_usage32 guiding_lands_usage;

  u8 addons_unseen[64];
  u8 addons_claimed[64];
  u16 addons[512];
  u8 gallery_unlocked[16];
  u8 gallery_unseen[16];

  u8 unknown19a[260];
  u64 daily_bonus_collect_time;
  u8 unknown19b[30000];
  u8 unknown19c[400];
  u8 unknown19d[79728];
  // Contains tutorial flags
  u8 unknown19_[79];

  str64 poogie_name;
  u8 poogie_costumes[4];
  u8 unknown20a[264];
  u32 poogie_love;
  u8 unknown20_[4];
  mhw_handler_outfit handler_outfit;
  u8 unknown21[980]; // Seen flags for appearance, maybe more

  mhw_lynian_observatory lynian_observatory;
  mhw_guiding_lands guiding_lands;

  u8 unknown22a[1708];
  mhw_toggle shoutout_manual_auto_translation;
  u8 unknown22_[762];

  u8 unknown23[sizeof(u16) * 4741]; // Zero?
  u8 hash_table[512];
};

struct mhw_keybind
{
  u8 main_key;
  u8 subkey;
};

struct mhw_control_loadout
{
  u8 saved;
  u8 index; // 1-based
  u16 unknown0;
  str64 name;
  mhw_keybind keybinds[200];
};

struct mhw_section0
{
  mhw_section_header header;
  u8 unknown0[1661];
  mhw_control_loadout main_controls[16];
  mhw_control_loadout melee_controls[16];
  mhw_control_loadout ranged_controls[16];
  u32 unknown1[256];
  u8 unknown2;
  u16 zero0[30738 / 2];
  u16 hash_table[256];
  u64 zero1[3089328 / 8];
};

struct mhw_section1
{
  mhw_section_header header;
  
  u32 unknown0;
  u32 last_active_slot;
  mhw_sound_device sound_device;
  mhw_dynamic_range dynamic_range;
  mhw_toggle audio_3d;
  u8 volume_voice;
  u8 volume_bgm;
  u8 volume_sound_effects;
  u8 unknown1[2];
  mhw_language text_language;
  mhw_language voice_language;
  mhw_toggle subtitles;
  mhw_voice_language voice_mode;
  mhw_toggle voice_chat;
  mhw_text_size text_size_subtitles;
  mhw_text_size text_size_hud;
  mhw_toggle data_collection;
  mhw_bool msi_ambient_link;
  u8 unknown2[8];
  mhw_gamepad_glyphs gamepad_glyphs;
  mhw_toggle background_audio;
  mhw_toggle camera_mouse_controls;
  mhw_confirm_button confirmation_button;
  u8 volume_voice_chat;
  u8 start_menu_keyboard_controls;
  u8 unknown3;
  f32 brightness;
  u8 unknown4[12];
  u8 character_edit_voucher;
  u8 unknown5[3];
  u16 dlc[512];
  u8 unknown6[4];
  u8 character_edit_voucher_single_voucher;
  u8 character_edit_voucher_two_voucher_pack;
  u8 character_edit_voucher_three_voucher_pack;
  u8 unknown7[51];
  u8 palico_edit_voucher_single_voucher;
  u8 palico_edit_voucher_two_voucher_pack;
  u8 palico_edit_voucher_three_voucher_pack;
  u8 unknown8[8];
  u8 character_edit_voucher_free;
  u8 character_c_palico_edit_voucher_single_voucher;
  u8 character_c_palico_edit_two_voucher_pack;
  u8 character_c_palico_edit_three_voucher_pack;
  u8 unknown9[8];
  u8 palico_edit_voucher;
  u8 character_p_palico_edit_voucher_single_voucher;
  u8 character_p_palico_edit_two_voucher_pack;
  u8 character_p_palico_edit_three_voucher_pack;

  // Working memory?
  // What's in it keeps changing, one moment it's save[0]'s
  // guiding lands levels, the next it's names.
  // From [320] to the end usually.
  // It seems to just change intermittently.
  u8 unknown10[2927];
};

struct mhw_section2
{
  mhw_section_header header;
  u8 data[56];
};

struct mhw_section3
{
  mhw_section_header header;
  mhw_save_slot saves[3];
  u64 zero[1724360 / 8]; // Unused? Seems to be all zero.
};

struct mhw_ib_save
{
  mhw_save_header header;
  mhw_section_offsets offsets;

  // Section 0: Keybinds and others
  mhw_section0 section0;
  // Section 1: Settings and things
  mhw_section1 section1;
  // Section 2: content unknown
  mhw_section2 section2;
  // Section 3: contains save slots
  mhw_section3 section3;
};

union mhw_save_raw
{
  mhw_ib_save save;
  u8 data[sizeof(mhw_ib_save)];
};
#pragma pack(pop)

static_assert(sizeof(mhw_ib_save) == MHW_IB_SAVE_SIZE, "Size of MHW:IB Save is not as expected.");
