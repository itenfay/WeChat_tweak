//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFInderJSAPIFeedReadRecard : NSObject
{
    NSString *_tid;
    unsigned long long _start_play_time_ms;
    unsigned long long _stay_time_ms;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long stay_time_ms; // @synthesize stay_time_ms=_stay_time_ms;
@property(nonatomic) unsigned long long start_play_time_ms; // @synthesize start_play_time_ms=_start_play_time_ms;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

