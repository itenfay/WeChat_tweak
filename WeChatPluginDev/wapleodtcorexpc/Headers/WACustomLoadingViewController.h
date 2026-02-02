//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WAPackageConfig;
@protocol WACustomLoadingViewControllerDelegate;

@interface WACustomLoadingViewController
{
    _Bool _isFullScreen;
    id <WACustomLoadingViewControllerDelegate> _customLoadingDelegate;
    NSString *_nsExtraData;
    WAPackageConfig *_pkgConfig;
    NSString *_orientation;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(copy, nonatomic) NSString *orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) WAPackageConfig *pkgConfig; // @synthesize pkgConfig=_pkgConfig;
@property(retain, nonatomic) NSString *nsExtraData; // @synthesize nsExtraData=_nsExtraData;
@property(nonatomic) __weak id <WACustomLoadingViewControllerDelegate> customLoadingDelegate; // @synthesize customLoadingDelegate=_customLoadingDelegate;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (unsigned long long)capsuleMenuType;
- (long long)capsuleMenuStyleMode;
- (struct CGRect)capsuleMenuFrame;
- (struct CGRect)capsuleMenuOriginalFrame;
- (_Bool)capsuleMenuHidden;
- (_Bool)systemCoverViewHidden;
- (_Bool)isInDarkMode;
- (_Bool)isSheetModeExpandedToStatusBarTop;
- (_Bool)isEmbedModeExpandedToFullScreen;
- (_Bool)isRunningInSheetMode;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)tryForceRotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)onRotationStart;
- (void)onRotationDone;
- (void)onHalfScreenStart;
- (void)onHalfScreenDone;
- (void)onFullScreenStart;
- (void)onFullScreenDone;
- (void)onAppPrepared;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithContact:(id)arg1 pkgConfig:(id)arg2 extraData:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

