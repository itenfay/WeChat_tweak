//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WalletLockInfo : NSObject
{
    _Bool _is_open_touch_pay;
    NSString *_wallet_lock_title;
    NSString *_wallet_lock_desc;
    NSString *_wallet_lock_logo_url;
    long long _wallet_lock_status;
    NSString *_wallet_lock_status_name;
    NSString *_fingerdata;
}

+ (id)GenFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *fingerdata; // @synthesize fingerdata=_fingerdata;
@property(nonatomic) _Bool is_open_touch_pay; // @synthesize is_open_touch_pay=_is_open_touch_pay;
@property(copy, nonatomic) NSString *wallet_lock_status_name; // @synthesize wallet_lock_status_name=_wallet_lock_status_name;
@property(nonatomic) long long wallet_lock_status; // @synthesize wallet_lock_status=_wallet_lock_status;
@property(copy, nonatomic) NSString *wallet_lock_logo_url; // @synthesize wallet_lock_logo_url=_wallet_lock_logo_url;
@property(copy, nonatomic) NSString *wallet_lock_desc; // @synthesize wallet_lock_desc=_wallet_lock_desc;
@property(copy, nonatomic) NSString *wallet_lock_title; // @synthesize wallet_lock_title=_wallet_lock_title;
- (void)genFromDic:(id)arg1;

@end

