//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface GCReportBaseVc
{
    _Bool _gcReportIsVisible;
    _Bool _gcReportIsViewDidAppear;
    unsigned long long _sceneId;
    unsigned long long _uiareaIdForStayDuration;
    double _durationInterval;
    double _lastVisibleTime;
}

@property(nonatomic) _Bool gcReportIsViewDidAppear; // @synthesize gcReportIsViewDidAppear=_gcReportIsViewDidAppear;
@property(nonatomic) _Bool gcReportIsVisible; // @synthesize gcReportIsVisible=_gcReportIsVisible;
@property(nonatomic) double lastVisibleTime; // @synthesize lastVisibleTime=_lastVisibleTime;
@property(nonatomic) double durationInterval; // @synthesize durationInterval=_durationInterval;
@property(nonatomic) unsigned long long uiareaIdForStayDuration; // @synthesize uiareaIdForStayDuration=_uiareaIdForStayDuration;
@property(nonatomic) unsigned long long sceneId; // @synthesize sceneId=_sceneId;
- (void)dealloc;
- (void)reportWithUiArea:(unsigned long long)arg1 positionId:(unsigned long long)arg2 op:(unsigned long long)arg3;
- (void)reportStayDuration;
- (void)commonConfigData:(id)arg1 uiArea:(unsigned long long)arg2 positionId:(unsigned long long)arg3 op:(unsigned long long)arg4;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)reportOnVisibleChange:(_Bool)arg1;
- (void)markVisibleEnd;
- (void)markVisibleBegin;
- (void)reportApplicationDidEnterBackground;
- (void)reportApplicationWillEnterForeground;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)init;

@end

