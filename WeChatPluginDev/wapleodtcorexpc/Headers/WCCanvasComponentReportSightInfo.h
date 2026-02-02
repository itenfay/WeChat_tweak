//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCCanvasComponentReportUrlInfo, WCCanvasComponentReportVideoFloatAreaInfo;

@interface WCCanvasComponentReportSightInfo
{
    unsigned int _sightDuration;
    unsigned int _playTimeInterval;
    unsigned int _playCount;
    unsigned int _playCompletedCount;
    unsigned int _clickVoiceControlCount;
    unsigned int _isAutoPlay;
    unsigned int _clickSightCount;
    unsigned int _streamVideoEnterCount;
    unsigned int _streamVideoPlayCount;
    unsigned int _streamVideoPlayCompleteCount;
    int _isNewUI;
    unsigned long long _streamVideoTotalPlayTimeInMs;
    WCCanvasComponentReportUrlInfo *_thumbUrlInfo;
    WCCanvasComponentReportUrlInfo *_sightUrlInfo;
    unsigned long long _clickFullscreenBtnCount;
    unsigned long long _doubleClickCount;
    unsigned long long _clickSightIconCount;
    unsigned long long _clickPlayControlCount;
    WCCanvasComponentReportVideoFloatAreaInfo *_floatAreaInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCCanvasComponentReportVideoFloatAreaInfo *floatAreaInfo; // @synthesize floatAreaInfo=_floatAreaInfo;
@property(nonatomic) int isNewUI; // @synthesize isNewUI=_isNewUI;
@property(nonatomic) unsigned long long clickPlayControlCount; // @synthesize clickPlayControlCount=_clickPlayControlCount;
@property(nonatomic) unsigned long long clickSightIconCount; // @synthesize clickSightIconCount=_clickSightIconCount;
@property(nonatomic) unsigned long long doubleClickCount; // @synthesize doubleClickCount=_doubleClickCount;
@property(nonatomic) unsigned long long clickFullscreenBtnCount; // @synthesize clickFullscreenBtnCount=_clickFullscreenBtnCount;
@property(retain, nonatomic) WCCanvasComponentReportUrlInfo *sightUrlInfo; // @synthesize sightUrlInfo=_sightUrlInfo;
@property(retain, nonatomic) WCCanvasComponentReportUrlInfo *thumbUrlInfo; // @synthesize thumbUrlInfo=_thumbUrlInfo;
@property(nonatomic) unsigned long long streamVideoTotalPlayTimeInMs; // @synthesize streamVideoTotalPlayTimeInMs=_streamVideoTotalPlayTimeInMs;
@property(nonatomic) unsigned int streamVideoPlayCompleteCount; // @synthesize streamVideoPlayCompleteCount=_streamVideoPlayCompleteCount;
@property(nonatomic) unsigned int streamVideoPlayCount; // @synthesize streamVideoPlayCount=_streamVideoPlayCount;
@property(nonatomic) unsigned int streamVideoEnterCount; // @synthesize streamVideoEnterCount=_streamVideoEnterCount;
@property(nonatomic) unsigned int clickSightCount; // @synthesize clickSightCount=_clickSightCount;
@property(nonatomic) unsigned int isAutoPlay; // @synthesize isAutoPlay=_isAutoPlay;
@property(nonatomic) unsigned int clickVoiceControlCount; // @synthesize clickVoiceControlCount=_clickVoiceControlCount;
@property(nonatomic) unsigned int playCompletedCount; // @synthesize playCompletedCount=_playCompletedCount;
@property(nonatomic) unsigned int playCount; // @synthesize playCount=_playCount;
@property(nonatomic) unsigned int playTimeInterval; // @synthesize playTimeInterval=_playTimeInterval;
@property(nonatomic) unsigned int sightDuration; // @synthesize sightDuration=_sightDuration;
- (id)dictionaryRepresentation;
- (id)initWithCid:(id)arg1;

@end

