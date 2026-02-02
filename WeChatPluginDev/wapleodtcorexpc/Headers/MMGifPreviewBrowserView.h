//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMAssetInfo, MMAssetPickerBrowserStateInfo, MMImageScrollViewHelper, MMWebImageView, NSArray, NSData, NSString, UIImageView, UILabel, UIView;
@protocol MMAssetPickerBrowserViewDelegate, MMImagePickerControlCenter;

@interface MMGifPreviewBrowserView
{
    MMWebImageView *m_gifView;
    UIView *m_gifViewBk;
    UIImageView *m_icloudImageIcon;
    UILabel *m_icloudLabel;
    struct CGSize m_originImageSize;
    MMImageScrollViewHelper *m_scrollViewHelper;
    _Bool requestUneditedAsset;
    _Bool shouldPlayWithEditAttr;
    NSData *m_originData;
    id <MMImagePickerControlCenter> controlCenter;
    MMAssetInfo *assetInfo;
    id <MMAssetPickerBrowserViewDelegate> browserDelegate;
    MMAssetPickerBrowserStateInfo *m_stateInfo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MMAssetPickerBrowserStateInfo *stateInfo; // @synthesize stateInfo=m_stateInfo;
@property(nonatomic) __weak id <MMAssetPickerBrowserViewDelegate> browserDelegate; // @synthesize browserDelegate;
@property(nonatomic) _Bool shouldPlayWithEditAttr; // @synthesize shouldPlayWithEditAttr;
@property(nonatomic) _Bool requestUneditedAsset; // @synthesize requestUneditedAsset;
@property(retain, nonatomic) MMAssetInfo *assetInfo; // @synthesize assetInfo;
@property(nonatomic) __weak id <MMImagePickerControlCenter> controlCenter; // @synthesize controlCenter;
@property(readonly, nonatomic) NSData *originData; // @synthesize originData=m_originData;
- (void)onAssetImageDonwloadFail:(id)arg1;
- (void)onAssetImageDonwloadProgress:(double)arg1 assetUrl:(id)arg2;
- (void)onSingleTap:(id)arg1;
- (id)getScrollView;
- (id)viewForZooming;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)updateGifViewFrameWithOriginSize:(struct CGSize)arg1;
- (_Bool)updateGifViewWithData:(id)arg1 originSize:(struct CGSize)arg2;
- (void)loadThumbImage:(id)arg1;
- (void)onFinishLoadImage:(id)arg1 imageData:(id)arg2;
- (void)loadAsset;
- (void)showIcloudViewWithText:(id)arg1 isLoading:(_Bool)arg2;
- (void)initGifView;
@property(nonatomic) struct CGRect frame;
// Preceding property had unknown attributes: ?
// Original attribute string: T{CGRect={CGPoint=dd}{CGSize=dd}},?,N

- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSArray *gestureRecognizers;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,C,N

@property(readonly) unsigned long long hash;
@property(nonatomic) double maximumZoomScale;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,N

@property(nonatomic) double minimumZoomScale;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,N

@property(readonly) Class superclass;
@property(nonatomic) double zoomScale;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,N


@end

