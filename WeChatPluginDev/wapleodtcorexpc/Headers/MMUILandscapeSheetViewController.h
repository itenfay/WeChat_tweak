//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMUILandscapeSheetViewController
{
    CDUnknownBlockType _onRequirePortrait;
    unsigned long long _overrideOrientationMask;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long overrideOrientationMask; // @synthesize overrideOrientationMask=_overrideOrientationMask;
@property(copy, nonatomic) CDUnknownBlockType onRequirePortrait; // @synthesize onRequirePortrait=_onRequirePortrait;
- (void)didAppearFromSearchController;
- (void)didAskSearchControllerShouldBeginWithResult:(_Bool)arg1;
- (unsigned long long)providedInterfaceOrientationMaskInIphone;
- (unsigned long long)supportedInterfaceOrientations;
- (double)getNavigationBarHeight;
- (double)getContentViewY;
- (_Bool)shouldOverrideMethods;
- (_Bool)isPortrait;
- (void)adjustTableViewInset:(id)arg1;
- (_Bool)isFullPageViewOverLiveRoom;
- (void)commonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

