//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMProgressViewEx, NSString, WCPanoramaImageView;

@interface WCAdPanoramaContainerView
{
    _Bool _showLoading;
    NSString *_imageUrl;
    WCPanoramaImageView *_panoramaImageView;
    MMProgressViewEx *_loadingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMProgressViewEx *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCPanoramaImageView *panoramaImageView; // @synthesize panoramaImageView=_panoramaImageView;
@property(nonatomic) _Bool showLoading; // @synthesize showLoading=_showLoading;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)dealloc;
- (void)stopMonitoring;
- (void)startMonitoring;
- (void)initPanoramaImageView;
- (id)initWithFrame:(struct CGRect)arg1 imageUrl:(id)arg2 showLoading:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

