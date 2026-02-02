//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayBindCardYHTInfoMinimchInfo : NSObject
{
    unsigned int _minimch_user_state;
    unsigned int _minimch_system_state;
    NSString *_minimch_key;
    unsigned long long _minimch_avail_balance;
    NSString *_minimch_ext_msg;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *minimch_ext_msg; // @synthesize minimch_ext_msg=_minimch_ext_msg;
@property(nonatomic) unsigned int minimch_system_state; // @synthesize minimch_system_state=_minimch_system_state;
@property(nonatomic) unsigned int minimch_user_state; // @synthesize minimch_user_state=_minimch_user_state;
@property(nonatomic) unsigned long long minimch_avail_balance; // @synthesize minimch_avail_balance=_minimch_avail_balance;
@property(retain, nonatomic) NSString *minimch_key; // @synthesize minimch_key=_minimch_key;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

