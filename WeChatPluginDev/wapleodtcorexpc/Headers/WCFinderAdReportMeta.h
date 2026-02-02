//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface WCFinderAdReportMeta : NSObject
{
    _Bool _hasEndExpose;
    unsigned long long _playCount;
    unsigned long long _outerDuration;
    unsigned long long _outerShowTimeStamp;
    unsigned long long _commentAdOuterShowTimestamp;
    unsigned long long _playTotalTime;
    unsigned long long _videoTotalTime;
    NSMutableSet *_playSequenceSet;
    unsigned long long _actionType;
    long long _needReportCount;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasEndExpose; // @synthesize hasEndExpose=_hasEndExpose;
@property(nonatomic) long long needReportCount; // @synthesize needReportCount=_needReportCount;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSMutableSet *playSequenceSet; // @synthesize playSequenceSet=_playSequenceSet;
@property(nonatomic) unsigned long long videoTotalTime; // @synthesize videoTotalTime=_videoTotalTime;
@property(nonatomic) unsigned long long playTotalTime; // @synthesize playTotalTime=_playTotalTime;
@property(nonatomic) unsigned long long commentAdOuterShowTimestamp; // @synthesize commentAdOuterShowTimestamp=_commentAdOuterShowTimestamp;
@property(nonatomic) unsigned long long outerShowTimeStamp; // @synthesize outerShowTimeStamp=_outerShowTimeStamp;
@property(nonatomic) unsigned long long outerDuration; // @synthesize outerDuration=_outerDuration;
@property(nonatomic) unsigned long long playCount; // @synthesize playCount=_playCount;

@end

