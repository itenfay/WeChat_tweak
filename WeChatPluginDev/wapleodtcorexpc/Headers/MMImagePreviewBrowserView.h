//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ColorGradientView, MMAssetICloudLoadingView, MMAssetInfo, MMAssetPickerBrowserStateInfo, NSString, WCLivePhotoButton;
@protocol MMAssetPickerBrowserViewDelegate, MMImagePickerControlCenter;

@interface MMImagePreviewBrowserView
{
    _Bool requestUneditedAsset;
    _Bool shouldPlayWithEditAttr;
    _Bool _isLivePhotoSelected;
    int _pickerScene;
    id <MMImagePickerControlCenter> controlCenter;
    MMAssetInfo *assetInfo;
    id <MMAssetPickerBrowserViewDelegate> browserDelegate;
    MMAssetPickerBrowserStateInfo *m_stateInfo;
    ColorGradientView *_iCloudBgView;
    MMAssetICloudLoadingView *_iCloudLoadingView;
    WCLivePhotoButton *_livePhotoButton;
    struct CGPoint _livePhotoPhotoPosition;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLivePhotoSelected; // @synthesize isLivePhotoSelected=_isLivePhotoSelected;
@property(nonatomic) struct CGPoint livePhotoPhotoPosition; // @synthesize livePhotoPhotoPosition=_livePhotoPhotoPosition;
@property(retain, nonatomic) WCLivePhotoButton *livePhotoButton; // @synthesize livePhotoButton=_livePhotoButton;
@property(retain, nonatomic) MMAssetICloudLoadingView *iCloudLoadingView; // @synthesize iCloudLoadingView=_iCloudLoadingView;
@property(retain, nonatomic) ColorGradientView *iCloudBgView; // @synthesize iCloudBgView=_iCloudBgView;
@property(nonatomic) int pickerScene; // @synthesize pickerScene=_pickerScene;
@property(readonly, nonatomic) MMAssetPickerBrowserStateInfo *stateInfo; // @synthesize stateInfo=m_stateInfo;
@property(nonatomic) __weak id <MMAssetPickerBrowserViewDelegate> browserDelegate; // @synthesize browserDelegate;
@property(nonatomic) _Bool shouldPlayWithEditAttr; // @synthesize shouldPlayWithEditAttr;
@property(nonatomic) _Bool requestUneditedAsset; // @synthesize requestUneditedAsset;
@property(retain, nonatomic) MMAssetInfo *assetInfo; // @synthesize assetInfo;
@property(nonatomic) __weak id <MMImagePickerControlCenter> controlCenter; // @synthesize controlCenter;
- (id)genLivePhotoReportDict;
- (void)configLivePhotoDataReport;
- (void)updateLivePhotoViewWithAssetInfo:(id)arg1 isSelected:(_Bool)arg2;
- (void)initLivePhotoButton;
- (void)setLivePhotoButtonHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setupLivePhotoButtonStyle:(unsigned long long)arg1;
- (void)layoutLivePhotoButton;
- (void)updateLivePhotoButtonPosition:(struct CGPoint)arg1;
- (void)livePhotoButtonClicked:(id)arg1;
- (void)onAssetVideoDonwloadFailed:(id)arg1;
- (void)onAssetVideoDownloadProgress:(double)arg1 assetUrl:(id)arg2;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragBegin;
- (void)loadAsset;
- (void)initICloudLoadingView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

