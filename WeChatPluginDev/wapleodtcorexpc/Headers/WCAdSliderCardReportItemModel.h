//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCAdSliderCardReportItemModel : NSObject
{
    int _index;
    int _mediaType;
    int _hasBorder;
    unsigned int _exposureCount;
    unsigned int _autoSlideInCount;
    unsigned int _clickCount;
    unsigned int _btnClickCount;
    unsigned int _productClickCount;
    unsigned int _playCount;
    unsigned int _finishPlayCount;
    unsigned long long _playTotalTime;
    unsigned long long _maxPlayTime;
    unsigned long long _videoTotalTime;
}

@property(nonatomic) unsigned long long videoTotalTime; // @synthesize videoTotalTime=_videoTotalTime;
@property(nonatomic) unsigned long long maxPlayTime; // @synthesize maxPlayTime=_maxPlayTime;
@property(nonatomic) unsigned long long playTotalTime; // @synthesize playTotalTime=_playTotalTime;
@property(nonatomic) unsigned int finishPlayCount; // @synthesize finishPlayCount=_finishPlayCount;
@property(nonatomic) unsigned int playCount; // @synthesize playCount=_playCount;
@property(nonatomic) unsigned int productClickCount; // @synthesize productClickCount=_productClickCount;
@property(nonatomic) unsigned int btnClickCount; // @synthesize btnClickCount=_btnClickCount;
@property(nonatomic) unsigned int clickCount; // @synthesize clickCount=_clickCount;
@property(nonatomic) unsigned int autoSlideInCount; // @synthesize autoSlideInCount=_autoSlideInCount;
@property(nonatomic) unsigned int exposureCount; // @synthesize exposureCount=_exposureCount;
@property(nonatomic) int hasBorder; // @synthesize hasBorder=_hasBorder;
@property(nonatomic) int mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) int index; // @synthesize index=_index;

@end

