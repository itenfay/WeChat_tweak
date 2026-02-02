//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderSearchStatFeedReadInfo : NSObject
{
    NSString *_feed_id;
    unsigned long long _stay_time_ms;
    unsigned long long _start_play_time_ms;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long start_play_time_ms; // @synthesize start_play_time_ms=_start_play_time_ms;
@property(nonatomic) unsigned long long stay_time_ms; // @synthesize stay_time_ms=_stay_time_ms;
@property(retain, nonatomic) NSString *feed_id; // @synthesize feed_id=_feed_id;
- (void)mergeData:(id)arg1;

@end

