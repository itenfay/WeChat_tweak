//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMProgressViewEx, NSString, WCPanoramaImageView;

@interface WCCanvasPanoramaImageComponent
{
    WCPanoramaImageView *_panoramaImageView;
    MMProgressViewEx *_loadingView;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) MMProgressViewEx *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCPanoramaImageView *panoramaImageView; // @synthesize panoramaImageView=_panoramaImageView;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)tryStopMonitoring;
- (void)tryStartMonitoring;
- (_Bool)shouldForbidDelegateShowArrowDown;
- (void)componentWillDisappearInMainScreen:(_Bool)arg1;
- (void)componentAppearFactorChagneInMainScreen;
- (void)componentDidFullyAppearInMainScreen:(_Bool)arg1;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)dealloc;
- (void)initViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

