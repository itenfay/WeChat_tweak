//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayQueryBindCardAwardCgiRequest : NSObject
{
    unsigned int _send_record_id;
    unsigned int _user_record_id;
    unsigned int _bindbankscene;
    unsigned int _realname_scene;
    unsigned long long _activity_id;
    unsigned long long _activity_type;
    unsigned long long _award_id;
    unsigned long long _activity_mch_id;
    NSString *_bank_type;
    NSString *_bank_serial;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int realname_scene; // @synthesize realname_scene=_realname_scene;
@property(nonatomic) unsigned int bindbankscene; // @synthesize bindbankscene=_bindbankscene;
@property(retain, nonatomic) NSString *bank_serial; // @synthesize bank_serial=_bank_serial;
@property(retain, nonatomic) NSString *bank_type; // @synthesize bank_type=_bank_type;
@property(nonatomic) unsigned long long activity_mch_id; // @synthesize activity_mch_id=_activity_mch_id;
@property(nonatomic) unsigned int user_record_id; // @synthesize user_record_id=_user_record_id;
@property(nonatomic) unsigned int send_record_id; // @synthesize send_record_id=_send_record_id;
@property(nonatomic) unsigned long long award_id; // @synthesize award_id=_award_id;
@property(nonatomic) unsigned long long activity_type; // @synthesize activity_type=_activity_type;
@property(nonatomic) unsigned long long activity_id; // @synthesize activity_id=_activity_id;
- (id)queryDictionary;

@end

