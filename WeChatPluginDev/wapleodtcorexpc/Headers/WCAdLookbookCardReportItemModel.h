//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCAdLookbookCardReportItemModel : NSObject
{
    int _mediaType;
    unsigned int _exposureCount;
    unsigned int _clickCount;
    unsigned int _playCount;
    unsigned int _finishPlayCount;
    unsigned long long _index;
    unsigned long long _playTotalTime;
    unsigned long long _maxPlayTime;
    unsigned long long _videoTotalTime;
}

@property(nonatomic) unsigned long long videoTotalTime; // @synthesize videoTotalTime=_videoTotalTime;
@property(nonatomic) unsigned long long maxPlayTime; // @synthesize maxPlayTime=_maxPlayTime;
@property(nonatomic) unsigned long long playTotalTime; // @synthesize playTotalTime=_playTotalTime;
@property(nonatomic) unsigned int finishPlayCount; // @synthesize finishPlayCount=_finishPlayCount;
@property(nonatomic) unsigned int playCount; // @synthesize playCount=_playCount;
@property(nonatomic) unsigned int clickCount; // @synthesize clickCount=_clickCount;
@property(nonatomic) unsigned int exposureCount; // @synthesize exposureCount=_exposureCount;
@property(nonatomic) int mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (id)initWithReportItem:(id)arg1;

@end

