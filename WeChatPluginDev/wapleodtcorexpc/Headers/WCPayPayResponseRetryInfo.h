//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayPayResponseRetryInfo : NSObject
{
    long long _retry_interval;
    long long _max_retry_count;
    NSString *_retry_fail_wording;
}

+ (id)GenFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *retry_fail_wording; // @synthesize retry_fail_wording=_retry_fail_wording;
@property(nonatomic) long long max_retry_count; // @synthesize max_retry_count=_max_retry_count;
@property(nonatomic) long long retry_interval; // @synthesize retry_interval=_retry_interval;
- (void)genFromDic:(id)arg1;

@end

