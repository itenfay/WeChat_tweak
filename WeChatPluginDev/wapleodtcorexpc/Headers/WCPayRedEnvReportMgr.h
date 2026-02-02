//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSMutableSet, NSString;

@interface WCPayRedEnvReportMgr
{
    unsigned int _previewStartTime;
    unsigned int _redEnvStoryStartTime;
    unsigned int _redEnvStoryEnterType;
    unsigned int _redEnvStoryExitType;
    unsigned int _redEnvStoryScrollCount;
    unsigned int _redEnvStoryImageScrollCount;
    unsigned int _redEnvStoryVideoPlayTotalCount;
    unsigned int _redEnvStoryMPBtnClickCount;
    unsigned int _redEnvelopesClickReportSourceWay;
    unsigned int _redEnvelopesClickReportTargetType;
    unsigned int _redEnvelopesClickReportHbMode;
    NSString *_previewSessionId;
    NSString *_redSkinEntrySessionId;
    NSMutableSet *_redSkinReportOnceOnlyKeySet;
    NSMutableDictionary *_redEnvBubbleSessionKeyDict;
    NSMutableSet *_redEnvBubbleReportOnceOnlyKeySet;
    NSString *_redEnvStorySessionId;
    NSString *_redEnvelopesClickReportSessionId;
    double _autoCarouselStartTimestamp;
}

- (void).cxx_destruct;
@property(nonatomic) double autoCarouselStartTimestamp; // @synthesize autoCarouselStartTimestamp=_autoCarouselStartTimestamp;
@property(nonatomic) unsigned int redEnvelopesClickReportHbMode; // @synthesize redEnvelopesClickReportHbMode=_redEnvelopesClickReportHbMode;
@property(nonatomic) unsigned int redEnvelopesClickReportTargetType; // @synthesize redEnvelopesClickReportTargetType=_redEnvelopesClickReportTargetType;
@property(nonatomic) unsigned int redEnvelopesClickReportSourceWay; // @synthesize redEnvelopesClickReportSourceWay=_redEnvelopesClickReportSourceWay;
@property(retain, nonatomic) NSString *redEnvelopesClickReportSessionId; // @synthesize redEnvelopesClickReportSessionId=_redEnvelopesClickReportSessionId;
@property(nonatomic) unsigned int redEnvStoryMPBtnClickCount; // @synthesize redEnvStoryMPBtnClickCount=_redEnvStoryMPBtnClickCount;
@property(nonatomic) unsigned int redEnvStoryVideoPlayTotalCount; // @synthesize redEnvStoryVideoPlayTotalCount=_redEnvStoryVideoPlayTotalCount;
@property(nonatomic) unsigned int redEnvStoryImageScrollCount; // @synthesize redEnvStoryImageScrollCount=_redEnvStoryImageScrollCount;
@property(nonatomic) unsigned int redEnvStoryScrollCount; // @synthesize redEnvStoryScrollCount=_redEnvStoryScrollCount;
@property(nonatomic) unsigned int redEnvStoryExitType; // @synthesize redEnvStoryExitType=_redEnvStoryExitType;
@property(nonatomic) unsigned int redEnvStoryEnterType; // @synthesize redEnvStoryEnterType=_redEnvStoryEnterType;
@property(nonatomic) unsigned int redEnvStoryStartTime; // @synthesize redEnvStoryStartTime=_redEnvStoryStartTime;
@property(retain, nonatomic) NSString *redEnvStorySessionId; // @synthesize redEnvStorySessionId=_redEnvStorySessionId;
@property(retain, nonatomic) NSMutableSet *redEnvBubbleReportOnceOnlyKeySet; // @synthesize redEnvBubbleReportOnceOnlyKeySet=_redEnvBubbleReportOnceOnlyKeySet;
@property(retain, nonatomic) NSMutableDictionary *redEnvBubbleSessionKeyDict; // @synthesize redEnvBubbleSessionKeyDict=_redEnvBubbleSessionKeyDict;
@property(retain, nonatomic) NSMutableSet *redSkinReportOnceOnlyKeySet; // @synthesize redSkinReportOnceOnlyKeySet=_redSkinReportOnceOnlyKeySet;
@property(retain, nonatomic) NSString *redSkinEntrySessionId; // @synthesize redSkinEntrySessionId=_redSkinEntrySessionId;
@property(nonatomic) unsigned int previewStartTime; // @synthesize previewStartTime=_previewStartTime;
@property(retain, nonatomic) NSString *previewSessionId; // @synthesize previewSessionId=_previewSessionId;
- (void)reportRedEnvStoryMakeSameCover:(id)arg1 actionType:(unsigned int)arg2 coverPath:(id)arg3;
- (void)reportRedEnvStoryAutoCarouselStaytime:(id)arg1;
- (void)genRedEnvStoryAutoCarouselStartTime;
- (void)genRedEnvSelectRedSkinDidCancel:(id)arg1 afterId:(id)arg2;
- (void)genRedEnvSelectRedSkinDidConfirm:(id)arg1 afterId:(id)arg2;
- (void)genRedEnvSelectRedSkinDidScroll;
- (void)genRedEnvStoryViewVideo:(id)arg1 videoUrl:(id)arg2 replayCount:(unsigned int)arg3 playTime:(unsigned int)arg4 sessionId:(id)arg5 autoPlayFlag:(unsigned int)arg6 c2cOpenID:(id)arg7;
- (void)genRedEnvStoryViewPic:(id)arg1 picUrl:(id)arg2 sessionId:(id)arg3 c2cOpenID:(id)arg4;
- (void)reportRedEnvStoryExitWithControlData:(id)arg1;
- (void)addRedEnvStoryMPBtnClickCount;
- (void)addRedEnvStoryViewVideoTotalCount;
- (void)addRedEnvStoryScrollImageCount;
- (void)addRedEnvStoryScrollCount;
- (unsigned int)getRedEnvStoryExitType;
- (void)genRedEnvStorySessionIdAndStartTime;
- (void)reportRedEnvExposeSeriesWithControlData:(id)arg1 exposeType:(unsigned int)arg2 hasLogo:(unsigned int)arg3 reportOnce:(_Bool)arg4 jumpLink:(id)arg5;
- (void)reportRedEnvExposeSeriesWithControlData:(id)arg1 exposeType:(unsigned int)arg2 hasLogo:(unsigned int)arg3 reportOnce:(_Bool)arg4;
- (void)addRedEnvBubbleExposeKeyHasReport:(unsigned int)arg1 c2cUrl:(id)arg2;
- (_Bool)isRedEnvBubbleExposeKeyhadReport:(unsigned int)arg1 c2cUrl:(id)arg2;
- (void)clearRedEnvBubbleReportOnceOnlyKeySet;
- (id)getRedEnvBubbleExposeSessionIdWithC2CUrl:(id)arg1;
- (id)genRedEnvBubbleExposeSessionIdWithC2CUrl:(id)arg1;
- (void)reportRedSkinEntryWithActionType:(unsigned int)arg1 hasRedDot:(unsigned int)arg2 reportOnce:(_Bool)arg3;
- (void)reportRedSkinEntryWithActionType:(unsigned int)arg1 hasRedDot:(unsigned int)arg2 skinId:(id)arg3 redDotText:(id)arg4 redDotVersion:(id)arg5 reportOnce:(_Bool)arg6;
- (id)getRedSkinEntrySessinoId;
- (void)genRedSkinEntrySessionId;
- (void)reportRedEnvPreViewWithActionType:(unsigned int)arg1 authorID:(id)arg2;
- (void)genPreViewSessionIdAndStartTime;
- (id)genReportSessionIdWithPreFixString:(id)arg1;
- (id)init;
- (void)clearRedEnvelopesClickReportSessionId;
- (void)redEnvelopesMessageReport:(id)arg1 isSender:(_Bool)arg2 userName:(id)arg3 coverId:(id)arg4 isOpen:(_Bool)arg5 isValid:(_Bool)arg6 action:(unsigned int)arg7;
- (void)reportRedEnvelopesMessageReport:(id)arg1 action:(unsigned int)arg2;
- (void)redEnvelopesDetailPageReport:(unsigned int)arg1 targetType:(unsigned int)arg2 hbMode:(unsigned int)arg3;
- (void)redEnvelopesGroupHBModeReport:(unsigned int)arg1 targetType:(unsigned int)arg2 hbMode:(unsigned int)arg3;
- (void)redEnvelopesMakeRedEnvPageReport:(unsigned int)arg1 targetType:(unsigned int)arg2 hbMode:(unsigned int)arg3;
- (void)redEnvelopesEntryClickReport:(unsigned int)arg1 sourceWay:(unsigned int)arg2;
- (void)genRedEnvEntrySessionId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

