//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCAdDynamicCanvasDSLData, WCAdDynamicCanvasServerData, WCAdvertiseInfo;

@interface WCAdDynamicCanvasPageInfo : NSObject
{
    _Bool _openAudio;
    _Bool _halfScreenForbidPanUp;
    _Bool _forbidBackToBizApp;
    NSString *_canvasKey;
    NSString *_canvasId;
    NSString *_uxInfo;
    NSString *_canvasDynamicInfo;
    unsigned long long _startTime;
    NSString *_snsId;
    NSString *_aid;
    NSString *_traceId;
    NSString *_viewId;
    NSString *_pid;
    NSString *_rewardCommInfo;
    NSString *_rewardParams;
    long long _adType;
    long long _outIndex;
    long long _source;
    long long _originSource;
    long long _outPlaybackTime;
    double _screenWidth;
    double _screenHeight;
    WCAdDynamicCanvasServerData *_canvasServerData;
    WCAdvertiseInfo *_adInfo;
    NSString *_bizAppId;
    NSObject *_extraData;
    NSString *_updatedUxInfo;
    NSString *_commonDeviceInfo;
    NSString *_frontPageStateInfo;
    unsigned long long _canvasPresentationStyle;
    double _halfScreenPageHeight;
    WCAdDynamicCanvasDSLData *_parsedCanvasDSLData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdDynamicCanvasDSLData *parsedCanvasDSLData; // @synthesize parsedCanvasDSLData=_parsedCanvasDSLData;
@property(nonatomic) _Bool forbidBackToBizApp; // @synthesize forbidBackToBizApp=_forbidBackToBizApp;
@property(nonatomic) double halfScreenPageHeight; // @synthesize halfScreenPageHeight=_halfScreenPageHeight;
@property(nonatomic) _Bool halfScreenForbidPanUp; // @synthesize halfScreenForbidPanUp=_halfScreenForbidPanUp;
@property(nonatomic) unsigned long long canvasPresentationStyle; // @synthesize canvasPresentationStyle=_canvasPresentationStyle;
@property(retain, nonatomic) NSString *frontPageStateInfo; // @synthesize frontPageStateInfo=_frontPageStateInfo;
@property(retain, nonatomic) NSString *commonDeviceInfo; // @synthesize commonDeviceInfo=_commonDeviceInfo;
@property(retain, nonatomic) NSString *updatedUxInfo; // @synthesize updatedUxInfo=_updatedUxInfo;
@property(retain, nonatomic) NSObject *extraData; // @synthesize extraData=_extraData;
@property(retain, nonatomic) NSString *bizAppId; // @synthesize bizAppId=_bizAppId;
@property(retain, nonatomic) WCAdvertiseInfo *adInfo; // @synthesize adInfo=_adInfo;
@property(retain, nonatomic) WCAdDynamicCanvasServerData *canvasServerData; // @synthesize canvasServerData=_canvasServerData;
@property(readonly, nonatomic) double screenHeight; // @synthesize screenHeight=_screenHeight;
@property(readonly, nonatomic) double screenWidth; // @synthesize screenWidth=_screenWidth;
@property(nonatomic) long long outPlaybackTime; // @synthesize outPlaybackTime=_outPlaybackTime;
@property(nonatomic) long long originSource; // @synthesize originSource=_originSource;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) _Bool openAudio; // @synthesize openAudio=_openAudio;
@property(nonatomic) long long outIndex; // @synthesize outIndex=_outIndex;
@property(nonatomic) long long adType; // @synthesize adType=_adType;
@property(retain, nonatomic) NSString *rewardParams; // @synthesize rewardParams=_rewardParams;
@property(retain, nonatomic) NSString *rewardCommInfo; // @synthesize rewardCommInfo=_rewardCommInfo;
@property(retain, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSString *viewId; // @synthesize viewId=_viewId;
@property(retain, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(retain, nonatomic) NSString *aid; // @synthesize aid=_aid;
@property(retain, nonatomic) NSString *snsId; // @synthesize snsId=_snsId;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *canvasDynamicInfo; // @synthesize canvasDynamicInfo=_canvasDynamicInfo;
@property(retain, nonatomic) NSString *uxInfo; // @synthesize uxInfo=_uxInfo;
@property(retain, nonatomic) NSString *canvasId; // @synthesize canvasId=_canvasId;
@property(readonly, nonatomic) NSString *canvasKey; // @synthesize canvasKey=_canvasKey;
- (id)fetchParsedCanvasDSLData;
- (id)fetchRealUxInfo;
- (id)fetchPageInfoExtraDic;
- (id)fetchPageInfoDic;
- (id)fetchLaunchString;
- (id)init;

@end

