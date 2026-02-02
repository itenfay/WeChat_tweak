//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, UIView;
@protocol MMAssetPickerBrowserViewProtocol;

@interface MMScreenSharingAssetBrowserController
{
    NSArray *_assetInfos;
    double _contentRatioY;
    UIView<MMAssetPickerBrowserViewProtocol> *_assetView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView<MMAssetPickerBrowserViewProtocol> *assetView; // @synthesize assetView=_assetView;
@property(nonatomic) double contentRatioY; // @synthesize contentRatioY=_contentRatioY;
@property(copy, nonatomic) NSArray *assetInfos; // @synthesize assetInfos=_assetInfos;
- (void)onAssetBrowserViewPlayingStateChanged:(id)arg1 isPlaying:(_Bool)arg2;
- (void)onAssetBrowserViewSingleTap:(id)arg1;
- (void)onAssetBrowserViewLoadFinished:(id)arg1;
- (void)layoutAssetViewWithFrame:(struct CGRect)arg1;
- (id)assetViewWithFrame:(struct CGRect)arg1 assetInfo:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)init;
- (id)initWithAssetInfos:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

