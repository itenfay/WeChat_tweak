//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCPayAuthenRequestRetryInfo : NSObject
{
    long long _retry_count;
    long long _is_last_retry;
}

@property(nonatomic) long long is_last_retry; // @synthesize is_last_retry=_is_last_retry;
@property(nonatomic) long long retry_count; // @synthesize retry_count=_retry_count;

@end

