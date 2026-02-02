//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMapTable, NSMutableArray, NSString, UIViewController;

@interface MMAppSceneMgr
{
    _Bool _isMovingToSubScene;
    _Bool _closeSubSceneWhenDismissToRoot;
    NSMapTable *_scenes;
    NSMutableArray *_unscenedMainWindows;
    UIViewController *_subSceneViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *subSceneViewController; // @synthesize subSceneViewController=_subSceneViewController;
@property(nonatomic) _Bool closeSubSceneWhenDismissToRoot; // @synthesize closeSubSceneWhenDismissToRoot=_closeSubSceneWhenDismissToRoot;
@property(retain, nonatomic) NSMutableArray *unscenedMainWindows; // @synthesize unscenedMainWindows=_unscenedMainWindows;
@property(retain, nonatomic) NSMapTable *scenes; // @synthesize scenes=_scenes;
@property(nonatomic) _Bool isMovingToSubScene; // @synthesize isMovingToSubScene=_isMovingToSubScene;
- (void)screenModeDidChange:(id)arg1;
- (void)screenDidDisconnect:(id)arg1;
- (void)screenDidConnect:(id)arg1;
- (void)requestSceneDestructionWithSession:(id)arg1;
- (void)requestSceneWithSession:(id)arg1 onFail:(CDUnknownBlockType)arg2;
- (void)requestSceneWithSession:(id)arg1;
- (_Bool)isRootBizViewControllerInSubScene:(id)arg1;
- (void)showViewController:(id)arg1 from:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)moveViewControllerToMainScene:(id)arg1;
- (void)moveViewControllerToSubScene:(id)arg1;
- (void)addSceneDelegate:(id)arg1 name:(id)arg2;
- (id)sceneDelegateForName:(id)arg1;
- (void)removeSceneDelegateForName:(id)arg1;
- (void)closeSubScene;
- (_Bool)shouldCloseSubSceneAtDismiss;
- (_Bool)isViewControllerMovingToOtherScene:(id)arg1;
- (id)getSubSceneBizViewController;
- (_Bool)canCreateSubScene;
- (_Bool)isCarPlaySceneCreated;
- (_Bool)isSubSceneCreated;
- (_Bool)isMainSceneCreated;
- (void)addUnscenedMainWindow:(id)arg1;
- (void)onServiceTerminate;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

