//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MPLandingPageCgiHandler, NSString, WCEliminatedSlotMMKV;

@interface BTVideoAutoPlayMgr
{
    MPLandingPageCgiHandler *_m_brandCgiHandler;
    WCEliminatedSlotMMKV *_videoDataSlotMMKV;
}

+ (long long)getAutoPlayerViewContentModeByVideoInfo:(unsigned int)arg1 videoHeight:(unsigned int)arg2 viewWidth:(double)arg3 viewHeight:(double)arg4;
+ (unsigned long long)calcStatusFromAction:(unsigned long long)arg1 andCurStatus:(unsigned long long)arg2;
+ (id)genVideoAutoPlayInfoWebviewExtraInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCEliminatedSlotMMKV *videoDataSlotMMKV; // @synthesize videoDataSlotMMKV=_videoDataSlotMMKV;
@property(retain, nonatomic) MPLandingPageCgiHandler *m_brandCgiHandler; // @synthesize m_brandCgiHandler=_m_brandCgiHandler;
- (void)clearAllData;
- (void)initData;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)requestBrandTLItemVideoInfo:(id)arg1 mpUrl:(id)arg2 oldVideoUrl:(id)arg3 videoExpiredTime:(unsigned long long)arg4 handler:(CDUnknownBlockType)arg5;
- (double)getVideoInitialTimeByVid:(id)arg1;
- (void)setVideoData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

