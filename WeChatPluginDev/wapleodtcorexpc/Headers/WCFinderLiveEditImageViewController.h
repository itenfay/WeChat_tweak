//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveEditImagePreviewPageSheet, MMUIButton, NSString, UIView;

@interface WCFinderLiveEditImageViewController
{
    _Bool _showPreviewButton;
    _Bool _currentNavBarHidden;
    CDUnknownBlockType _editImageBackCompletion;
    NSString *_previewBulletinTitle;
    UIView *_topBlurView;
    MMFinderLiveEditImagePreviewPageSheet *_previewPageSheet;
    MMUIButton *_backButton;
    MMUIButton *_previewButton;
    struct CGSize _cropImageRatio;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *previewButton; // @synthesize previewButton=_previewButton;
@property(retain, nonatomic) MMUIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) MMFinderLiveEditImagePreviewPageSheet *previewPageSheet; // @synthesize previewPageSheet=_previewPageSheet;
@property(retain, nonatomic) UIView *topBlurView; // @synthesize topBlurView=_topBlurView;
@property(nonatomic) _Bool currentNavBarHidden; // @synthesize currentNavBarHidden=_currentNavBarHidden;
@property(retain, nonatomic) NSString *previewBulletinTitle; // @synthesize previewBulletinTitle=_previewBulletinTitle;
@property(nonatomic) _Bool showPreviewButton; // @synthesize showPreviewButton=_showPreviewButton;
@property(nonatomic) struct CGSize cropImageRatio; // @synthesize cropImageRatio=_cropImageRatio;
@property(copy, nonatomic) CDUnknownBlockType editImageBackCompletion; // @synthesize editImageBackCompletion=_editImageBackCompletion;
- (void)onExitEditImageProcess;
- (void)onEnterEditImageProcess;
- (_Bool)shouldSaveUnCropImages;
- (void)onEditImageLayoutViewChangeAssetSuc;
- (void)onClickItemFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)showEditImageViewOn;
- (double)getEditAreaTopMargin;
- (void)onClickEditImagePreview;
- (_Bool)useTransparentNavibar;
- (void)initPreviewPageSheet;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end

