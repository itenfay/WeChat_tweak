//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCAdConventionalHalfScreenReportVideoInfo : NSObject
{
    unsigned long long _videoDuration;
    unsigned long long _playTimeInterval;
    unsigned long long _playCount;
    unsigned long long _playCompletedCount;
}

@property(nonatomic) unsigned long long playCompletedCount; // @synthesize playCompletedCount=_playCompletedCount;
@property(nonatomic) unsigned long long playCount; // @synthesize playCount=_playCount;
@property(nonatomic) unsigned long long playTimeInterval; // @synthesize playTimeInterval=_playTimeInterval;
@property(nonatomic) unsigned long long videoDuration; // @synthesize videoDuration=_videoDuration;

@end

