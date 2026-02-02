//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCADVideoPlayInfo;

@interface WCAdSliderCardReportItem : NSObject
{
    _Bool _isVideo;
    _Bool _hasBorder;
    _Bool _playOver1sCountFlag;
    int _index;
    unsigned int _exposureCount;
    unsigned int _autoSlideInCount;
    unsigned int _clickCount;
    unsigned int _btnClickCount;
    unsigned int _productClickCount;
    unsigned int _playOver1sCount;
    unsigned int _finishPlayCount;
    WCADVideoPlayInfo *_playInfoForTotalPlayTime;
    unsigned long long _maxPlayTime;
    unsigned long long _videoTotalTime;
    NSString *_extra;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool playOver1sCountFlag; // @synthesize playOver1sCountFlag=_playOver1sCountFlag;
@property(retain, nonatomic) NSString *extra; // @synthesize extra=_extra;
@property(nonatomic) unsigned long long videoTotalTime; // @synthesize videoTotalTime=_videoTotalTime;
@property(nonatomic) unsigned long long maxPlayTime; // @synthesize maxPlayTime=_maxPlayTime;
@property(retain, nonatomic) WCADVideoPlayInfo *playInfoForTotalPlayTime; // @synthesize playInfoForTotalPlayTime=_playInfoForTotalPlayTime;
@property(nonatomic) unsigned int finishPlayCount; // @synthesize finishPlayCount=_finishPlayCount;
@property(nonatomic) unsigned int playOver1sCount; // @synthesize playOver1sCount=_playOver1sCount;
@property(nonatomic) unsigned int productClickCount; // @synthesize productClickCount=_productClickCount;
@property(nonatomic) unsigned int btnClickCount; // @synthesize btnClickCount=_btnClickCount;
@property(nonatomic) unsigned int clickCount; // @synthesize clickCount=_clickCount;
@property(nonatomic) unsigned int autoSlideInCount; // @synthesize autoSlideInCount=_autoSlideInCount;
@property(nonatomic) unsigned int exposureCount; // @synthesize exposureCount=_exposureCount;
@property(nonatomic) _Bool hasBorder; // @synthesize hasBorder=_hasBorder;
@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(nonatomic) int index; // @synthesize index=_index;

@end

