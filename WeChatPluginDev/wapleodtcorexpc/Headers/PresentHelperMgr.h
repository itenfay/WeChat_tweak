//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSCountedSet, NSMutableArray, NSString;

@interface PresentHelperMgr
{
    NSMutableArray *_tmpCannotShowViewControllers;
    NSCountedSet *_slientlyPreparePresentStackVCSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSCountedSet *slientlyPreparePresentStackVCSet; // @synthesize slientlyPreparePresentStackVCSet=_slientlyPreparePresentStackVCSet;
@property(retain, nonatomic) NSMutableArray *tmpCannotShowViewControllers; // @synthesize tmpCannotShowViewControllers=_tmpCannotShowViewControllers;
- (_Bool)isViewControllerCanSetStatusBarStyleWhenSlientProcess:(id)arg1;
- (void)removeSnapshotViews:(id)arg1;
- (id)getSnapShotViewFor:(id)arg1;
- (id)addSnapShotOf:(id)arg1 ToViewControllerList:(id)arg2;
- (void)addViewControllersToNavigationController:(id)arg1 ViewControllers:(id)arg2;
- (id)getPresentationStack:(id)arg1 NeedNavigationStack:(_Bool)arg2;
- (void)PresentSlientlyFrom:(id)arg1 NeedPresentViewControllerList:(id)arg2 ToVCIndex:(long long)arg3 Completion:(CDUnknownBlockType)arg4;
- (void)slientlyPreparePresentStackForPresentationFor:(id)arg1 NeedSaveNavigationStackAfter:(_Bool)arg2 Completion:(CDUnknownBlockType)arg3;
- (_Bool)inSlientlyPreparePresentStack:(id)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

