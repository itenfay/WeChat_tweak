//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCADShareInfo, WCADSphereReportInfo, WCADVideoPlayInfo, WCAdBreakFrameReportInfo, WCAdCommonInteractionReportInfo, WCAdContinuousLikeReportInfo, WCAdExpParamsReportInfo, WCAdFinderLiveStreamReportInfo, WCAdFinderTopicReportInfo, WCAdFireworkCheerReportInfo, WCAdFullCardDragImageReportInfo, WCAdFullCardLongPressReportInfo, WCAdLookbookCardReportInfo, WCAdSliderCardReportInfo, WCStatTimerHelper;

@interface WCADPageWrap : NSObject
{
    WCADShareInfo *shareInfo;
    unsigned int clickActionType;
    unsigned int _logType;
    unsigned int _eventType;
    int _subClickPos;
    unsigned int _scene;
    unsigned int _adType;
    unsigned int _source;
    int _canvasPageScene;
    unsigned int _flipStatus;
    NSString *_adID;
    NSString *_publishID;
    NSString *_uxInfo;
    NSString *_commonUxInfo;
    unsigned long long _startTime;
    unsigned long long _endTime;
    unsigned long long _clickTime;
    NSString *_snsStatExt;
    WCStatTimerHelper *_timer;
    unsigned long long _exposureStartTime;
    WCADSphereReportInfo *_sphereInfo;
    WCADVideoPlayInfo *_playInfo;
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
    unsigned long long _videoPlayBackTime;
    NSString *_miniShopRequestId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *miniShopRequestId; // @synthesize miniShopRequestId=_miniShopRequestId;
@property(nonatomic) unsigned long long videoPlayBackTime; // @synthesize videoPlayBackTime=_videoPlayBackTime;
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
@property(retain, nonatomic) WCADVideoPlayInfo *playInfo; // @synthesize playInfo=_playInfo;
@property(retain, nonatomic) WCADSphereReportInfo *sphereInfo; // @synthesize sphereInfo=_sphereInfo;
@property(nonatomic) unsigned long long exposureStartTime; // @synthesize exposureStartTime=_exposureStartTime;
@property(nonatomic) unsigned int flipStatus; // @synthesize flipStatus=_flipStatus;
@property(retain, nonatomic) WCStatTimerHelper *timer; // @synthesize timer=_timer;
@property(nonatomic) int canvasPageScene; // @synthesize canvasPageScene=_canvasPageScene;
@property(retain, nonatomic) NSString *snsStatExt; // @synthesize snsStatExt=_snsStatExt;
@property(nonatomic) unsigned int source; // @synthesize source=_source;
@property(nonatomic) unsigned int adType; // @synthesize adType=_adType;
@property(nonatomic) unsigned long long clickTime; // @synthesize clickTime=_clickTime;
@property(nonatomic) unsigned long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) int subClickPos; // @synthesize subClickPos=_subClickPos;
@property(nonatomic) unsigned int eventType; // @synthesize eventType=_eventType;
@property(nonatomic) unsigned int logType; // @synthesize logType=_logType;
@property(retain, nonatomic) NSString *commonUxInfo; // @synthesize commonUxInfo=_commonUxInfo;
@property(retain, nonatomic) NSString *uxInfo; // @synthesize uxInfo=_uxInfo;
@property(retain, nonatomic) NSString *publishID; // @synthesize publishID=_publishID;
@property(retain, nonatomic) NSString *adID; // @synthesize adID=_adID;
@property(nonatomic) unsigned int clickActionType; // @synthesize clickActionType;
@property(retain, nonatomic) WCADShareInfo *shareInfo; // @synthesize shareInfo;
- (id)description;
- (id)init;

@end

