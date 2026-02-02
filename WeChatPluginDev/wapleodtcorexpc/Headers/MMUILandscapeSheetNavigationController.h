//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer;

@interface MMUILandscapeSheetNavigationController
{
    _Bool _wasPortrait;
    CAShapeLayer *_maskLayer;
}

+ (double)navBarBottomtInLandscape;
- (void).cxx_destruct;
@property(nonatomic) _Bool wasPortrait; // @synthesize wasPortrait=_wasPortrait;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)PushViewController:(id)arg1 animated:(_Bool)arg2 isForceFullScreen:(_Bool)arg3 isAutoRotatePortrait:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)updateSupportedOrientationMaskInNavStack:(unsigned long long)arg1;
- (void)setupMaskLayerIfNeeded;
- (_Bool)isPortrait;
- (void)toggleNavExtraSpaceHidden:(_Bool)arg1;
- (void)doReload;
- (void)reloadIfNeeded;
- (void)viewDidLayoutSubviews;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithRootViewController:(id)arg1;
- (id)init;

@end

