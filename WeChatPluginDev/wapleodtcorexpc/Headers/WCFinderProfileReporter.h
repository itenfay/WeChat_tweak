//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, WCFinderLiveAudienceNoticeReporter, WCFinderStreamProfileViewModel;

@interface WCFinderProfileReporter : NSObject
{
    _Bool _stopReport;
    _Bool _hadReportNewLife;
    WCFinderStreamProfileViewModel *_viewModel;
    WCFinderLiveAudienceNoticeReporter *_liveReporter;
    unsigned long long _vcSessionInTimeMs;
    unsigned long long _vcSessionOutTimeMs;
    NSMutableSet *_reportedElements;
    NSMutableDictionary *_elementReportAction;
    NSMutableSet *_exposedMiniAppIds;
    NSMutableArray *_atExposeMentionNames;
    unsigned long long _exposeTimes;
    NSString *_bizInfoId;
    NSMutableSet *_exposedRecomendContacts;
    unsigned long long _vcSessionStayTimeMs;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hadReportNewLife; // @synthesize hadReportNewLife=_hadReportNewLife;
@property(nonatomic) unsigned long long vcSessionStayTimeMs; // @synthesize vcSessionStayTimeMs=_vcSessionStayTimeMs;
@property(retain, nonatomic) NSMutableSet *exposedRecomendContacts; // @synthesize exposedRecomendContacts=_exposedRecomendContacts;
@property(retain, nonatomic) NSString *bizInfoId; // @synthesize bizInfoId=_bizInfoId;
@property(nonatomic) unsigned long long exposeTimes; // @synthesize exposeTimes=_exposeTimes;
@property(retain, nonatomic) NSMutableArray *atExposeMentionNames; // @synthesize atExposeMentionNames=_atExposeMentionNames;
@property(retain, nonatomic) NSMutableSet *exposedMiniAppIds; // @synthesize exposedMiniAppIds=_exposedMiniAppIds;
@property(retain, nonatomic) NSMutableDictionary *elementReportAction; // @synthesize elementReportAction=_elementReportAction;
@property(retain, nonatomic) NSMutableSet *reportedElements; // @synthesize reportedElements=_reportedElements;
@property(nonatomic) unsigned long long vcSessionOutTimeMs; // @synthesize vcSessionOutTimeMs=_vcSessionOutTimeMs;
@property(nonatomic) unsigned long long vcSessionInTimeMs; // @synthesize vcSessionInTimeMs=_vcSessionInTimeMs;
@property(retain, nonatomic) WCFinderLiveAudienceNoticeReporter *liveReporter; // @synthesize liveReporter=_liveReporter;
@property(nonatomic) __weak WCFinderStreamProfileViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) _Bool stopReport; // @synthesize stopReport=_stopReport;
- (void)reportNewLifeProfileSessionOut;
- (void)reportNewLifeProfileSessionIn;
- (unsigned long long)getVcSessionStayTimeMs;
- (void)reportRecommendFollowItem:(id)arg1 event:(id)arg2 recommendReason:(id)arg3 idx:(long long)arg4;
- (void)reportRecommendFollowClick:(id)arg1 recommendReason:(id)arg2 idx:(long long)arg3;
- (void)reportRecommendFollowExpose:(id)arg1 recommendReason:(id)arg2 idx:(long long)arg3;
- (void)reportNickNameClick;
- (id)extBizInfoIdInLog;
- (void)reportOlympicsExpose;
- (void)reportClickSignatureExpand:(_Bool)arg1;
- (void)reportExposeSignatureExpand:(_Bool)arg1;
- (void)reportChannelProfilePOIWithEventType:(long long)arg1 poiName:(id)arg2;
- (void)reportProfileAction:(unsigned long long)arg1 extInfo:(id)arg2;
- (void)reportExposeAtEvent;
- (id)enterPageReportExtInfo:(id)arg1;
- (void)reportProfileDisappear;
- (void)reportProfileExposed;
- (void)exposeElementAgain;
- (void)cleanAll;
- (void)recordMiniAppIds:(id)arg1;
- (void)reportClickElement:(unsigned int)arg1;
- (void)bindPostView:(id)arg1 bindId:(id)arg2 viewReportPolicy:(unsigned long long)arg3 dynamicParamsBlock:(CDUnknownBlockType)arg4;
- (void)bindPostView:(id)arg1 bindId:(id)arg2;
- (void)recordElement:(unsigned int)arg1 expose:(_Bool)arg2;
- (id)init;

@end

