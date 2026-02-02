//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayBindCardYHTInfo : NSObject
{
    int _yht_user_state;
    int _yht_system_state;
    NSString *_yht_related_bank;
    unsigned long long _yht_avail_balance;
    NSString *_yht_ext_msg;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *yht_ext_msg; // @synthesize yht_ext_msg=_yht_ext_msg;
@property(nonatomic) int yht_system_state; // @synthesize yht_system_state=_yht_system_state;
@property(nonatomic) int yht_user_state; // @synthesize yht_user_state=_yht_user_state;
@property(nonatomic) unsigned long long yht_avail_balance; // @synthesize yht_avail_balance=_yht_avail_balance;
@property(retain, nonatomic) NSString *yht_related_bank; // @synthesize yht_related_bank=_yht_related_bank;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

