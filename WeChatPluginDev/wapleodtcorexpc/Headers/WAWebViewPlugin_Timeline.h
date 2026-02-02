//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol IWATimelineService, IWAWebViewPluginDelegate;

@interface WAWebViewPlugin_Timeline
{
    _Bool _shouldShowShareTimelineMenu;
    id <IWAWebViewPluginDelegate> _resultDelegate;
    id <IWATimelineService> _timelineService;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IWATimelineService> timelineService; // @synthesize timelineService=_timelineService;
@property(nonatomic) __weak id <IWAWebViewPluginDelegate> resultDelegate; // @synthesize resultDelegate=_resultDelegate;
@property(nonatomic) _Bool shouldShowShareTimelineMenu; // @synthesize shouldShowShareTimelineMenu=_shouldShowShareTimelineMenu;
- (void)onCancelForwardForForwardView:(id)arg1 timelineData:(id)arg2;
- (void)onDoneForwardForForwardView:(id)arg1 timelineData:(id)arg2;
- (void)cleanWhenShareEnd;
- (unsigned int)getAppType;
- (void)reportShareTimeline:(id)arg1;
- (id)pluginReportPageEvent;
- (void)shareToTimeline:(id)arg1;
- (void)notifyToShareTimeline;
- (_Bool)isSharing;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

