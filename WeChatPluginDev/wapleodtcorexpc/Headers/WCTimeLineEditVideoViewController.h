//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderCreateCoordinator;

@interface WCTimeLineEditVideoViewController
{
    WCFinderCreateCoordinator *_createCoordinator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderCreateCoordinator *createCoordinator; // @synthesize createCoordinator=_createCoordinator;
- (void)longVideoChooseHelper:(id)arg1 postSession:(id)arg2;
- (void)triggerFinderPostActionWith:(id)arg1;
- (void)finderRealNameSuccess:(id)arg1;
- (void)finderCreateAccountSuccess:(id)arg1;
- (void)postEditMgrFailByPostSession:(id)arg1;
- (void)postEditMgrSaveDraftByPostSession:(id)arg1;
- (void)postEditMgrSucFromVC:(id)arg1 postSession:(id)arg2;
- (void)postViewControllerCancelPostWithModel:(id)arg1;
- (void)postViewControllerFromVC:(id)arg1 postSession:(id)arg2;
- (void)_prepareAVAssetFromMMAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_postVideoByFinderWithAVAsset:(id)arg1 videoPath:(id)arg2 fromEntrance:(long long)arg3;
- (void)_postVideoByFinderWithMMAsset:(id)arg1 fromEntrance:(long long)arg2;
- (void)postVideoByFinderFromEntrance:(long long)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)isExceedTimelineTimeLimit;
- (float)getOutputTime;
- (void)showEditVideoViewOn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

