//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCPayBindCardActivityInfo : NSObject
{
    unsigned int _send_record_id;
    unsigned int _user_record_id;
    unsigned long long _activity_id;
    unsigned long long _activity_type;
    unsigned long long _award_id;
    unsigned long long _activity_mch_id;
}

+ (id)GenFromDictionary:(id)arg1;
@property(nonatomic) unsigned long long activity_mch_id; // @synthesize activity_mch_id=_activity_mch_id;
@property(nonatomic) unsigned int user_record_id; // @synthesize user_record_id=_user_record_id;
@property(nonatomic) unsigned int send_record_id; // @synthesize send_record_id=_send_record_id;
@property(nonatomic) unsigned long long award_id; // @synthesize award_id=_award_id;
@property(nonatomic) unsigned long long activity_type; // @synthesize activity_type=_activity_type;
@property(nonatomic) unsigned long long activity_id; // @synthesize activity_id=_activity_id;
- (void)genFromDic:(id)arg1;

@end

