//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMStatusBarCustomInfo, NSMutableArray, NSMutableDictionary, NSString;

@interface MMStatusBarManager
{
    _Bool _isRunningStatusBarAction;
    MMStatusBarCustomInfo *_globalOverrideInfo;
    NSMutableDictionary *_customStatusTable;
    NSMutableArray *_statusBarActions;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isRunningStatusBarAction; // @synthesize isRunningStatusBarAction=_isRunningStatusBarAction;
@property(retain, nonatomic) NSMutableArray *statusBarActions; // @synthesize statusBarActions=_statusBarActions;
@property(retain, nonatomic) NSMutableDictionary *customStatusTable; // @synthesize customStatusTable=_customStatusTable;
@property(retain, nonatomic) MMStatusBarCustomInfo *globalOverrideInfo; // @synthesize globalOverrideInfo=_globalOverrideInfo;
- (id)getCustomInfoFor:(id)arg1;
- (id)createCustomInfoFor:(id)arg1;
- (void)removeAllViewControllerConfigs;
- (void)removeViewControllerConfig:(id)arg1;
- (void)onViewControllerChange;
- (long long)statusBarAnimationForViewController:(id)arg1;
- (long long)statusBarStyleForViewController:(id)arg1;
- (_Bool)statusBarHiddenForViewController:(id)arg1;
- (_Bool)shouldOverrideStatusBarAnimation:(id)arg1;
- (_Bool)shouldOverrideStatusBarStyleFor:(id)arg1;
- (_Bool)shouldOverrideStatusBarHiddenFor:(id)arg1;
- (void)setStatusBarAnimation:(long long)arg1 forViewController:(id)arg2;
- (void)setStatusBarStyle:(long long)arg1 forViewController:(id)arg2;
- (void)setStatusBarHidden:(_Bool)arg1 forViewController:(id)arg2;
- (void)performQueuingAction;
- (void)addStatusBarAction:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

