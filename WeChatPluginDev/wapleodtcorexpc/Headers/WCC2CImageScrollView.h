//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CMessageWrap, ImageBrowseButton, ImageScrollView, NSData, UIImage, WCC2CShadowLabel;
@protocol WCC2CImageScrollViewDelegate;

@interface WCC2CImageScrollView : UIView
{
    _Bool _didClickSaveButton;
    id <WCC2CImageScrollViewDelegate> _delegate;
    double _buttonLeftPadding;
    double _buttonRightPadding;
    ImageScrollView *_imageScrollView;
    ImageBrowseButton *_hdImgBtn;
    ImageBrowseButton *_hdImgStatusButton;
    WCC2CShadowLabel *_hdImgExpireLabel;
    ImageBrowseButton *_saveBtn;
    ImageBrowseButton *_previewHDImgBtn;
    ImageBrowseButton *_sessionResourceBtn;
    CMessageWrap *_msgWrap;
    UIImage *_originImageFromPhotos;
    NSData *_originImageDataFromPhotos;
    CDUnknownBlockType _customBottomLeftAction;
    CDUnknownBlockType _customBottomLeftString;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType customBottomLeftString; // @synthesize customBottomLeftString=_customBottomLeftString;
@property(copy, nonatomic) CDUnknownBlockType customBottomLeftAction; // @synthesize customBottomLeftAction=_customBottomLeftAction;
@property(retain, nonatomic) NSData *originImageDataFromPhotos; // @synthesize originImageDataFromPhotos=_originImageDataFromPhotos;
@property(retain, nonatomic) UIImage *originImageFromPhotos; // @synthesize originImageFromPhotos=_originImageFromPhotos;
@property(nonatomic) _Bool didClickSaveButton; // @synthesize didClickSaveButton=_didClickSaveButton;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
@property(retain, nonatomic) ImageBrowseButton *sessionResourceBtn; // @synthesize sessionResourceBtn=_sessionResourceBtn;
@property(retain, nonatomic) ImageBrowseButton *previewHDImgBtn; // @synthesize previewHDImgBtn=_previewHDImgBtn;
@property(retain, nonatomic) ImageBrowseButton *saveBtn; // @synthesize saveBtn=_saveBtn;
@property(retain, nonatomic) WCC2CShadowLabel *hdImgExpireLabel; // @synthesize hdImgExpireLabel=_hdImgExpireLabel;
@property(retain, nonatomic) ImageBrowseButton *hdImgStatusButton; // @synthesize hdImgStatusButton=_hdImgStatusButton;
@property(retain, nonatomic) ImageBrowseButton *hdImgBtn; // @synthesize hdImgBtn=_hdImgBtn;
@property(retain, nonatomic) ImageScrollView *imageScrollView; // @synthesize imageScrollView=_imageScrollView;
@property(nonatomic) double buttonRightPadding; // @synthesize buttonRightPadding=_buttonRightPadding;
@property(nonatomic) double buttonLeftPadding; // @synthesize buttonLeftPadding=_buttonLeftPadding;
@property(nonatomic) __weak id <WCC2CImageScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setToolViewsHidden:(_Bool)arg1;
- (void)hideToolView;
- (void)showToolView;
- (_Bool)canShowSessionResourceBtn;
- (_Bool)canShowPreviewHDImgButton;
- (_Bool)canShowSaveButton;
- (_Bool)canShowHDImgStatusButton;
- (_Bool)canShowHDImgButton;
- (_Bool)canShowExpireLabel;
- (_Bool)canShowLeftButton;
- (void)showImageControllerWithImage:(id)arg1 Data:(id)arg2;
- (void)onClickPreviewHDImgButton;
- (void)onClickSaveHDImageAlbumButton;
- (void)onCancelCurrentDownload;
- (void)_onViewHDImage:(id)arg1;
- (_Bool)showExpireSheetView;
- (void)onViewHDImage:(id)arg1;
- (void)onShowSessionResource;
- (void)setViewsAlpha:(double)arg1;
- (void)setViewsHiddenOnScroll:(_Bool)arg1;
- (void)OnDownloadForSaveAlbumFail:(id)arg1;
- (void)hideDownloadStatusButton;
- (void)updateHDDownloadingStatus:(float)arg1;
- (void)animateHideHDDownloadStatusOnComplete:(float)arg1;
- (void)animateHideHDDownloadStatus;
- (void)updateToolbar;
- (void)updateButtonLeftPadding:(double)arg1 buttonRightPadding:(double)arg2;
- (double)getLeftButtonWidth;
- (void)setM_delegate:(id)arg1;
- (void)setEnableDragToClose:(_Bool)arg1;
- (id)getImageScrollView;
- (void)layoutSubviews;
- (void)dealloc;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1 msgWrap:(id)arg2 customBottomLeftAction:(CDUnknownBlockType)arg3 customBottomLeftString:(CDUnknownBlockType)arg4;
- (id)initWithFrame:(struct CGRect)arg1 msgWrap:(id)arg2;

@end

