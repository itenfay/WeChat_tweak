//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderFeedDragUpDislikeConfig, WCStateMachine;
@protocol WCFinderFeedDragUpDislikeViewModelDelegate;

@interface WCFinderFeedDragUpDislikeViewModel : NSObject
{
    id <WCFinderFeedDragUpDislikeViewModelDelegate> _delegate;
    WCFinderFeedDragUpDislikeConfig *_config;
    unsigned long long _panStartTimeInMs;
    double _panLocationYInitial;
    double _panLocationYShowingPanel;
    WCStateMachine *_stateMachine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(nonatomic) double panLocationYShowingPanel; // @synthesize panLocationYShowingPanel=_panLocationYShowingPanel;
@property(nonatomic) double panLocationYInitial; // @synthesize panLocationYInitial=_panLocationYInitial;
@property(nonatomic) unsigned long long panStartTimeInMs; // @synthesize panStartTimeInMs=_panStartTimeInMs;
@property(retain, nonatomic) WCFinderFeedDragUpDislikeConfig *config; // @synthesize config=_config;
@property(nonatomic) __weak id <WCFinderFeedDragUpDislikeViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onStateMachineDidEnterState:(id)arg1 withTransition:(id)arg2;
- (void)onShortPanelTimeMatch;
- (void)markStartPanWithY:(double)arg1;
- (void)tryTriggerEventWithName:(id)arg1;
- (void)markPanLocationYShowingPanel:(double)arg1;
- (double)panelTriggerDistance;
- (double)panelTriggerSpeedScale;
- (double)topPanelViewFoldH;
- (double)topPanelViewHScale;
- (double)topPanelNotShowTouchHeight;
- (void)setupStateMachine;
- (void)setupConfig;
- (void)setup;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

