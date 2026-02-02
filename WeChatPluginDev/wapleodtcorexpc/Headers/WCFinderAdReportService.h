//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLRUCache, NSString;

@interface WCFinderAdReportService
{
    MMLRUCache *_adReportMetaCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLRUCache *adReportMetaCache; // @synthesize adReportMetaCache=_adReportMetaCache;
- (id)_getAndCacheMetaWithTid:(id)arg1 scene:(int)arg2;
- (id)_metaKeyWithTid:(id)arg1 scene:(int)arg2;
- (void)feedbackCommentAdWithType:(int)arg1 reasonArray:(id)arg2 params:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;
- (void)reportPremovieAdWithTid:(id)arg1 scene:(int)arg2 reportDict:(id)arg3 reportBypData:(id)arg4;
- (void)reportAdCommentWithTid:(id)arg1 scene:(int)arg2 endExpose:(_Bool)arg3 reportDict:(id)arg4 reportBypData:(id)arg5;
- (void)reportADWithTid:(id)arg1 scene:(int)arg2 endExpose:(_Bool)arg3 reportDict:(id)arg4 adInfo:(id)arg5;
- (void)updateAdReportExitActionType:(unsigned long long)arg1 tid:(id)arg2 scene:(int)arg3;
- (void)updateAdReportMetaWithTid:(id)arg1 scene:(int)arg2 metaBlock:(CDUnknownBlockType)arg3;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

