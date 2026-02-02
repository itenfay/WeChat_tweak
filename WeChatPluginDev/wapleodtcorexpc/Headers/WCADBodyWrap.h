//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AdExposureTimerHelper, NSString, WCADSphereReportInfo, WCADVideoPlayInfo, WCAdBreakFrameReportInfo, WCAdCommonInteractionReportInfo, WCAdContinuousLikeReportInfo, WCAdExpParamsReportInfo, WCAdFinderLiveStreamReportInfo, WCAdFinderTopicReportInfo, WCAdFireworkCheerReportInfo, WCAdFullCardDragImageReportInfo, WCAdFullCardLongPressReportInfo, WCAdLookbookCardReportInfo, WCAdSliderCardReportInfo;

@interface WCADBodyWrap : NSObject
{
    _Bool _isFulllyAppearing;
    unsigned int _startPositionType;
    unsigned int _endPositionType;
    unsigned int _source;
    NSString *_adID;
    NSString *_publishID;
    NSString *_uxInfo;
    unsigned long long _startTime;
    unsigned long long _endTime;
    unsigned long long _halfStartTime;
    unsigned long long _halfEndTime;
    unsigned long long _allStartTime;
    unsigned long long _allEndTime;
    double _readHeight;
    double _unReadTopHeight;
    double _unReadBottomHeight;
    double _tableContentY;
    WCADVideoPlayInfo *_playInfo;
    NSString *_snsStatExt;
    unsigned long long _adDisappearTime;
    unsigned long long _adDisappearDuration;
    unsigned long long _adFullExposeDisappearTime;
    unsigned long long _adFullExposeDisappearDuration;
    WCADSphereReportInfo *_sphereInfo;
    WCAdFullCardLongPressReportInfo *_longPressReportInfo;
    WCAdFullCardDragImageReportInfo *_dragImageReportInfo;
    WCAdFinderTopicReportInfo *_finderTopicReportInfo;
    WCAdSliderCardReportInfo *_sliderCardReportInfo;
    WCAdBreakFrameReportInfo *_breakFrameReportInfo;
    WCAdFinderLiveStreamReportInfo *_finderLiveStreamReportInfo;
    WCAdLookbookCardReportInfo *_lookbookCardReportInfo;
    WCAdCommonInteractionReportInfo *_commonInteractionReportInfo;
    double _adContentHight;
    WCAdContinuousLikeReportInfo *_continuousLikeReportInfo;
    WCAdFireworkCheerReportInfo *_fireworkCheerReportInfo;
    WCAdExpParamsReportInfo *_expParamsInfo;
    NSString *_adInfoAddress;
    NSString *_cacheKey;
    AdExposureTimerHelper *_adHalfExposureTimer;
    AdExposureTimerHelper *_adFullExposureTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AdExposureTimerHelper *adFullExposureTimer; // @synthesize adFullExposureTimer=_adFullExposureTimer;
@property(retain, nonatomic) AdExposureTimerHelper *adHalfExposureTimer; // @synthesize adHalfExposureTimer=_adHalfExposureTimer;
@property(retain, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(retain, nonatomic) NSString *adInfoAddress; // @synthesize adInfoAddress=_adInfoAddress;
@property(retain, nonatomic) WCAdExpParamsReportInfo *expParamsInfo; // @synthesize expParamsInfo=_expParamsInfo;
@property(retain, nonatomic) WCAdFireworkCheerReportInfo *fireworkCheerReportInfo; // @synthesize fireworkCheerReportInfo=_fireworkCheerReportInfo;
@property(retain, nonatomic) WCAdContinuousLikeReportInfo *continuousLikeReportInfo; // @synthesize continuousLikeReportInfo=_continuousLikeReportInfo;
@property(nonatomic) double adContentHight; // @synthesize adContentHight=_adContentHight;
@property(retain, nonatomic) WCAdCommonInteractionReportInfo *commonInteractionReportInfo; // @synthesize commonInteractionReportInfo=_commonInteractionReportInfo;
@property(retain, nonatomic) WCAdLookbookCardReportInfo *lookbookCardReportInfo; // @synthesize lookbookCardReportInfo=_lookbookCardReportInfo;
@property(retain, nonatomic) WCAdFinderLiveStreamReportInfo *finderLiveStreamReportInfo; // @synthesize finderLiveStreamReportInfo=_finderLiveStreamReportInfo;
@property(retain, nonatomic) WCAdBreakFrameReportInfo *breakFrameReportInfo; // @synthesize breakFrameReportInfo=_breakFrameReportInfo;
@property(retain, nonatomic) WCAdSliderCardReportInfo *sliderCardReportInfo; // @synthesize sliderCardReportInfo=_sliderCardReportInfo;
@property(retain, nonatomic) WCAdFinderTopicReportInfo *finderTopicReportInfo; // @synthesize finderTopicReportInfo=_finderTopicReportInfo;
@property(retain, nonatomic) WCAdFullCardDragImageReportInfo *dragImageReportInfo; // @synthesize dragImageReportInfo=_dragImageReportInfo;
@property(retain, nonatomic) WCAdFullCardLongPressReportInfo *longPressReportInfo; // @synthesize longPressReportInfo=_longPressReportInfo;
@property(retain, nonatomic) WCADSphereReportInfo *sphereInfo; // @synthesize sphereInfo=_sphereInfo;
@property(nonatomic) unsigned long long adFullExposeDisappearDuration; // @synthesize adFullExposeDisappearDuration=_adFullExposeDisappearDuration;
@property(nonatomic) unsigned long long adFullExposeDisappearTime; // @synthesize adFullExposeDisappearTime=_adFullExposeDisappearTime;
@property(nonatomic) _Bool isFulllyAppearing; // @synthesize isFulllyAppearing=_isFulllyAppearing;
@property(nonatomic) unsigned long long adDisappearDuration; // @synthesize adDisappearDuration=_adDisappearDuration;
@property(nonatomic) unsigned long long adDisappearTime; // @synthesize adDisappearTime=_adDisappearTime;
@property(retain, nonatomic) NSString *snsStatExt; // @synthesize snsStatExt=_snsStatExt;
@property(nonatomic) unsigned int source; // @synthesize source=_source;
@property(retain, nonatomic) WCADVideoPlayInfo *playInfo; // @synthesize playInfo=_playInfo;
@property(nonatomic) double tableContentY; // @synthesize tableContentY=_tableContentY;
@property(nonatomic) double unReadBottomHeight; // @synthesize unReadBottomHeight=_unReadBottomHeight;
@property(nonatomic) double unReadTopHeight; // @synthesize unReadTopHeight=_unReadTopHeight;
@property(nonatomic) double readHeight; // @synthesize readHeight=_readHeight;
@property(nonatomic) unsigned long long allEndTime; // @synthesize allEndTime=_allEndTime;
@property(nonatomic) unsigned long long allStartTime; // @synthesize allStartTime=_allStartTime;
@property(nonatomic) unsigned long long halfEndTime; // @synthesize halfEndTime=_halfEndTime;
@property(nonatomic) unsigned long long halfStartTime; // @synthesize halfStartTime=_halfStartTime;
@property(nonatomic) unsigned long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned int endPositionType; // @synthesize endPositionType=_endPositionType;
@property(nonatomic) unsigned int startPositionType; // @synthesize startPositionType=_startPositionType;
@property(retain, nonatomic) NSString *uxInfo; // @synthesize uxInfo=_uxInfo;
@property(retain, nonatomic) NSString *publishID; // @synthesize publishID=_publishID;
@property(retain, nonatomic) NSString *adID; // @synthesize adID=_adID;
- (void)resetExposureTimer;
- (unsigned long long)fetchExposureTime:(_Bool)arg1;
- (void)endAdFeedDisappear:(_Bool)arg1;
- (void)beginAdFeedDisappear:(_Bool)arg1;
- (void)stopExposureTimeRecord:(_Bool)arg1;
- (void)startExposureTimeRecord:(_Bool)arg1;
- (id)fetchTimerHelper:(_Bool)arg1;
- (id)init;

@end

