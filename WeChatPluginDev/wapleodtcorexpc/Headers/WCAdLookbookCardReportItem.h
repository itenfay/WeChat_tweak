//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCADVideoPlayInfo;

@interface WCAdLookbookCardReportItem : NSObject
{
    _Bool _isVideo;
    _Bool _playOver1sCountFlag;
    unsigned int _exposureCount;
    unsigned int _clickCount;
    unsigned int _playOver1sCount;
    unsigned int _finishPlayCount;
    unsigned long long _index;
    WCADVideoPlayInfo *_playInfoForTotalPlayTime;
    unsigned long long _maxPlayTime;
    unsigned long long _videoTotalTime;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool playOver1sCountFlag; // @synthesize playOver1sCountFlag=_playOver1sCountFlag;
@property(nonatomic) unsigned long long videoTotalTime; // @synthesize videoTotalTime=_videoTotalTime;
@property(nonatomic) unsigned long long maxPlayTime; // @synthesize maxPlayTime=_maxPlayTime;
@property(retain, nonatomic) WCADVideoPlayInfo *playInfoForTotalPlayTime; // @synthesize playInfoForTotalPlayTime=_playInfoForTotalPlayTime;
@property(nonatomic) unsigned int finishPlayCount; // @synthesize finishPlayCount=_finishPlayCount;
@property(nonatomic) unsigned int playOver1sCount; // @synthesize playOver1sCount=_playOver1sCount;
@property(nonatomic) unsigned int clickCount; // @synthesize clickCount=_clickCount;
@property(nonatomic) unsigned int exposureCount; // @synthesize exposureCount=_exposureCount;
@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;

@end

