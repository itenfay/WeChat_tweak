//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MinimizeTaskData, MinimizeTaskOpenContext, NSString, UIImageView, WAAppTansitionController, WAUINavigationController;

@interface WAMiniTaskLoadingViewController
{
    WAAppTansitionController *m_transitionController;
    WAUINavigationController *_weappNav;
    UIImageView *_snapShotView;
    MinimizeTaskData *_taskData;
    MinimizeTaskOpenContext *_openContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MinimizeTaskOpenContext *openContext; // @synthesize openContext=_openContext;
@property(retain, nonatomic) MinimizeTaskData *taskData; // @synthesize taskData=_taskData;
@property(retain, nonatomic) UIImageView *snapShotView; // @synthesize snapShotView=_snapShotView;
@property(retain, nonatomic) WAUINavigationController *weappNav; // @synthesize weappNav=_weappNav;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)viewDidBePresented:(_Bool)arg1;
- (void)setUpSnapShotView;
- (void)viewDidLoad;
- (id)initWithMinimizeTaskKey:(id)arg1 openContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

