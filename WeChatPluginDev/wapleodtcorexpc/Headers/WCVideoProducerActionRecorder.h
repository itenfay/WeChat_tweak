//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJAnalyticsMovieSession, MJVideoTemplate, NSMutableDictionary, NSString, OMJMusicInfo, SightDraftItem, WCMomentsPickerActionRecorder;

@interface WCVideoProducerActionRecorder : NSObject
{
    _Bool _isMJAppInstalled;
    unsigned int _activityEventType;
    long long _scene;
    long long _state;
    NSString *_boundSessionId;
    WCMomentsPickerActionRecorder *_pickerActionRecorder;
    NSString *_videoProducerId;
    MJAnalyticsMovieSession *_recommendationAnalytics;
    NSString *_extInfoJson;
    SightDraftItem *_sightDraftItem;
    MJVideoTemplate *_exportedTemplate;
    OMJMusicInfo *_exportedMusic;
    double _videoProducerStartTime;
    double _videoProducerEndTime;
    NSMutableDictionary *_operationContextMap;
}

+ (id)_safeStringWithString:(id)arg1;
+ (id)_safeJSONStringWithObject:(id)arg1;
+ (long long)_validTimeMSFromTimeInterval:(double)arg1;
+ (long long)_timeMSFromCMTime:(CDStruct_1b6d18a9)arg1;
+ (long long)_timeMSFromStart:(double)arg1 toEnd:(double)arg2;
+ (long long)_convertMusicSourceFromSourceType:(int)arg1;
+ (long long)_convertTemplateSourceFromSourceType:(int)arg1;
+ (long long)_convertTemplateSourceFromMJVideotemplateSource:(long long)arg1;
+ (void)reportRecommendationWithRecorder:(id)arg1;
+ (id)_generateEditDetailStrFromRecorderList:(id)arg1;
+ (id)_generateMediaDetailStrFromRecorderList:(id)arg1;
+ (void)reportUserOperationWithSessionId:(id)arg1 recorderList:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *operationContextMap; // @synthesize operationContextMap=_operationContextMap;
@property(readonly, nonatomic) unsigned int activityEventType; // @synthesize activityEventType=_activityEventType;
@property(nonatomic) double videoProducerEndTime; // @synthesize videoProducerEndTime=_videoProducerEndTime;
@property(nonatomic) double videoProducerStartTime; // @synthesize videoProducerStartTime=_videoProducerStartTime;
@property(retain, nonatomic) OMJMusicInfo *exportedMusic; // @synthesize exportedMusic=_exportedMusic;
@property(retain, nonatomic) MJVideoTemplate *exportedTemplate; // @synthesize exportedTemplate=_exportedTemplate;
@property(retain, nonatomic) SightDraftItem *sightDraftItem; // @synthesize sightDraftItem=_sightDraftItem;
@property(nonatomic) _Bool isMJAppInstalled; // @synthesize isMJAppInstalled=_isMJAppInstalled;
@property(retain, nonatomic) NSString *extInfoJson; // @synthesize extInfoJson=_extInfoJson;
@property(retain, nonatomic) MJAnalyticsMovieSession *recommendationAnalytics; // @synthesize recommendationAnalytics=_recommendationAnalytics;
@property(retain, nonatomic) NSString *videoProducerId; // @synthesize videoProducerId=_videoProducerId;
@property(retain, nonatomic) WCMomentsPickerActionRecorder *pickerActionRecorder; // @synthesize pickerActionRecorder=_pickerActionRecorder;
@property(retain, nonatomic) NSString *boundSessionId; // @synthesize boundSessionId=_boundSessionId;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
- (id)getAllTemplateOperationList;
- (id)getAllShowedTemplateList;
- (id)getAllProvidedTemplateList;
- (id)operationCtxFromBelonger:(long long)arg1;
- (void)videoProducerDidPassExtInfoJson:(id)arg1;
- (void)videoProducerDidExport:(id)arg1 byTemplate:(id)arg2 music:(id)arg3;
- (void)videoProducerDidAnalysisRecommendation:(id)arg1;
- (void)videoProducerDidCheckMJAppInstallation:(_Bool)arg1;
- (void)videoProducerDidTerminate;
- (void)videoProducerDidStopWithResult:(_Bool)arg1;
- (void)videoProducerDidStartWithId:(id)arg1 forScene:(long long)arg2 bindSessionId:(id)arg3;
- (void)videoProducerDidInit:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPickerActionRecorder:(id)arg1;
- (id)_genReportStrForPreviewTemplateSeqFromBelonger:(long long)arg1;
- (id)_genReportStrForAllPreviewTemplateSeq;
- (id)_genReportStrForExposeTemplateIdListFromBelonger:(long long)arg1;
- (id)_genReportStrForReceivedTemplateIdList;
- (id)_genReportStrForTemplateEditDetail;
- (id)_genReportStrForRecommendMediaDetail;
- (id)_genReportStrForFinishAction;
- (id)_genReportStrForEGDetailFromBelonger:(long long)arg1;
- (id)_genReportStrForExtInfo;
- (id)_getTemplateEditDetailFromEditSegmentOperation:(id)arg1;
- (id)_getTemplateEditDetailListFromTemplateOperation:(id)arg1;
- (unsigned long long)_getExtRecommendRequestIDForTemplateId:(id)arg1;
- (id)_getMusicSearchActsForTemplateId:(id)arg1;
- (id)_getMusicSeqFromPreviewMusicAnalyticsList:(id)arg1;
- (id)_getTemplateSeqFromPreviewTemplateAnalytics:(id)arg1;
- (id)_getTemplateAnalyticsById:(id)arg1;
- (id)_getExposeMusicIdListForTemplateId:(id)arg1;
- (long long)_getExportMusicSource;
- (long long)_getExportTemplateSource;
- (long long)_getLaunchMJAppResult;
- (long long)_getCreationScene;
- (_Bool)_hasClickedLaunchMJApp;
- (long long)_getLastLaunchMJRegularChoice;
- (_Bool)_hasLaunchMJAppShowed;
- (long long)_getMusicPlayCount;
- (long long)_getTemplatePlayCount;

@end

