//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCPaySelectDateItemData;

@interface WCPayRealnameAuthenReq : NSObject
{
    NSString *_true_name;
    NSString *_cre_type;
    NSString *_cre_name;
    NSString *_identify_card;
    NSString *_identify_card_origin;
    NSString *_user_country;
    NSString *_user_province;
    NSString *_user_city;
    NSString *_profession_name;
    NSString *_profession_type;
    NSString *_birth_date;
    WCPaySelectDateItemData *_birth_date_origin;
    NSString *_cre_expire_date;
    WCPaySelectDateItemData *_cre_expire_date_origin;
    NSString *_creid_renewal;
    long long _creid_renewal_origin;
    NSString *_nationality;
    NSString *_countryCode;
    NSString *_session_id;
    NSString *_detail_address;
    NSString *_cre_effect_date;
    NSString *_cre_expire_date_plain;
    NSString *_sex;
    NSString *_is_close_marketing;
    NSString *_address;
    WCPaySelectDateItemData *_cre_effect_date_origin;
    NSString *_phone_no;
    NSString *_phone_no_origin;
    NSString *_encrypt_cre_effect_date;
    NSString *_cre_begin_date;
}

+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSString *cre_begin_date; // @synthesize cre_begin_date=_cre_begin_date;
@property(retain) NSString *encrypt_cre_effect_date; // @synthesize encrypt_cre_effect_date=_encrypt_cre_effect_date;
@property(retain) NSString *phone_no_origin; // @synthesize phone_no_origin=_phone_no_origin;
@property(retain) NSString *phone_no; // @synthesize phone_no=_phone_no;
@property(retain) WCPaySelectDateItemData *cre_effect_date_origin; // @synthesize cre_effect_date_origin=_cre_effect_date_origin;
@property(retain) NSString *address; // @synthesize address=_address;
@property(retain) NSString *is_close_marketing; // @synthesize is_close_marketing=_is_close_marketing;
@property(retain) NSString *sex; // @synthesize sex=_sex;
@property(retain) NSString *cre_expire_date_plain; // @synthesize cre_expire_date_plain=_cre_expire_date_plain;
@property(retain) NSString *cre_effect_date; // @synthesize cre_effect_date=_cre_effect_date;
@property(retain) NSString *detail_address; // @synthesize detail_address=_detail_address;
@property(retain) NSString *session_id; // @synthesize session_id=_session_id;
@property(retain) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain) NSString *nationality; // @synthesize nationality=_nationality;
@property long long creid_renewal_origin; // @synthesize creid_renewal_origin=_creid_renewal_origin;
@property(retain) NSString *creid_renewal; // @synthesize creid_renewal=_creid_renewal;
@property(retain) WCPaySelectDateItemData *cre_expire_date_origin; // @synthesize cre_expire_date_origin=_cre_expire_date_origin;
@property(retain) NSString *cre_expire_date; // @synthesize cre_expire_date=_cre_expire_date;
@property(retain) WCPaySelectDateItemData *birth_date_origin; // @synthesize birth_date_origin=_birth_date_origin;
@property(retain) NSString *birth_date; // @synthesize birth_date=_birth_date;
@property(retain) NSString *profession_type; // @synthesize profession_type=_profession_type;
@property(retain) NSString *profession_name; // @synthesize profession_name=_profession_name;
@property(retain) NSString *user_city; // @synthesize user_city=_user_city;
@property(retain) NSString *user_province; // @synthesize user_province=_user_province;
@property(retain) NSString *user_country; // @synthesize user_country=_user_country;
@property(retain) NSString *identify_card_origin; // @synthesize identify_card_origin=_identify_card_origin;
@property(retain) NSString *identify_card; // @synthesize identify_card=_identify_card;
@property(retain) NSString *cre_name; // @synthesize cre_name=_cre_name;
@property(retain) NSString *cre_type; // @synthesize cre_type=_cre_type;
@property(retain) NSString *true_name; // @synthesize true_name=_true_name;

@end

