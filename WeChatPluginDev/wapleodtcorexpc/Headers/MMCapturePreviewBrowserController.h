//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EditImageIntialView, EditImageLogicController, MMAsset, MMLoadingView, MultiImageScrollView, NSMutableArray, NSString, UIActivityIndicatorView, UIButton, UIImage, UILabel, UIView;
@protocol ImageBrowseDelegate;

@interface MMCapturePreviewBrowserController
{
    UIView *_bottomBar;
    UIButton *_sendButton;
    UIButton *_originImageCheck;
    UILabel *_originImageLabel;
    NSMutableArray *_imageScrollViewPool;
    long long _originImageSize;
    UIActivityIndicatorView *_originIndictorView;
    _Bool _canSendOriginalImage;
    _Bool m_hasClickSendButton;
    _Bool _isEmoticonBoardSearchEnabled;
    _Bool _loadAssetFinish;
    id <ImageBrowseDelegate> m_delegate;
    EditImageIntialView *_editImageInitialView;
    EditImageLogicController *m_editImageLogicController;
    MMLoadingView *__loadingView;
    MMAsset *_originAsset;
    UIImage *_assetImage;
    MMAsset *_m_editAsset;
    MultiImageScrollView *_pagingScrollView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MultiImageScrollView *pagingScrollView; // @synthesize pagingScrollView=_pagingScrollView;
@property(retain, nonatomic) MMAsset *m_editAsset; // @synthesize m_editAsset=_m_editAsset;
@property(nonatomic) _Bool loadAssetFinish; // @synthesize loadAssetFinish=_loadAssetFinish;
@property(retain, nonatomic) UIImage *assetImage; // @synthesize assetImage=_assetImage;
@property(retain, nonatomic) MMAsset *originAsset; // @synthesize originAsset=_originAsset;
@property(retain, nonatomic) MMLoadingView *_loadingView; // @synthesize _loadingView=__loadingView;
@property(nonatomic) _Bool isEmoticonBoardSearchEnabled; // @synthesize isEmoticonBoardSearchEnabled=_isEmoticonBoardSearchEnabled;
@property(retain, nonatomic) EditImageLogicController *m_editImageLogicController; // @synthesize m_editImageLogicController;
@property(retain, nonatomic) EditImageIntialView *_editImageInitialView; // @synthesize _editImageInitialView;
@property(nonatomic) _Bool m_hasClickSendButton; // @synthesize m_hasClickSendButton;
@property(nonatomic) _Bool canSendOriginalImage; // @synthesize canSendOriginalImage=_canSendOriginalImage;
@property(nonatomic) __weak id <ImageBrowseDelegate> m_delegate; // @synthesize m_delegate;
- (id)currentViewController;
- (void)getOriginalImage:(CDUnknownBlockType)arg1;
- (void)getDisplayImage:(CDUnknownBlockType)arg1;
- (void)finishEditImage;
- (void)OnClickEditImageDoneBarButton;
- (void)OnClickEditImageBackBarButton;
- (void)setBottomAndTopBarHiddenWithAnimation:(_Bool)arg1;
- (void)onEditImage:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (id)imageAtPage:(unsigned int)arg1;
- (id)viewAtPage:(unsigned int)arg1 frame:(struct CGRect)arg2;
- (void)onOriginImageCheck:(id)arg1;
- (void)OnOriginSizeGot:(id)arg1;
- (void)handleSend:(id)arg1;
- (void)OnSend:(id)arg1;
- (void)OnCancel:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)viewDidTransitionToNewSize;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillBeInteractivePoped;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)reloadBottomBar;
- (void)startLoadAsset;
- (void)initData;
- (_Bool)isForbidPageSheet;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 thumbImage:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

