//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveFansGroupAnchorEditFansNoticeInfo, MMFinderLiveFansGroupNoticeVisibilitySheet, MMFinderLiveTaskId, MMTextView, MMUIButton, MMUILabel, MMWebImageView, NSArray, NSString, UIImage, UIImageView, UIScrollView, UIView;
@protocol MMFinderLiveFansGroupFansNoticeModifyPanelDelegate, MMFinderLiveFansGroupOperationReportDelegate;

@interface MMFinderLiveFansGroupFansNoticeModifyPanel
{
    _Bool _isKeyBoardShow;
    id <MMFinderLiveFansGroupFansNoticeModifyPanelDelegate> _panelDelegate;
    id <MMFinderLiveFansGroupOperationReportDelegate> _reportDelegate;
    MMFinderLiveTaskId *_taskId;
    UIScrollView *_contentView;
    UIView *_visibilityContainerView;
    UIView *_visibilityUpperlineView;
    UIView *_visibilityLowerlineView;
    MMUILabel *_visibilityTipLabel;
    MMUILabel *_visibilityTitleLabel;
    UIImageView *_visibilityRightChevronView;
    MMUIButton *_imageSelectButton;
    MMUIButton *_modifyButton;
    MMFinderLiveFansGroupAnchorEditFansNoticeInfo *_editedNoticeInfo;
    MMWebImageView *_noticeImageView;
    UIView *_removeImageButtonView;
    MMUIButton *_removeImageButton;
    MMTextView *_noticeTextView;
    double _keyBoardHeight;
    UIImage *_latestNoticeImage;
    NSArray *_levelTitles;
    MMFinderLiveFansGroupNoticeVisibilitySheet *_visibilityPageSheet;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMFinderLiveFansGroupNoticeVisibilitySheet *visibilityPageSheet; // @synthesize visibilityPageSheet=_visibilityPageSheet;
@property(retain, nonatomic) NSArray *levelTitles; // @synthesize levelTitles=_levelTitles;
@property(retain, nonatomic) UIImage *latestNoticeImage; // @synthesize latestNoticeImage=_latestNoticeImage;
@property(nonatomic) double keyBoardHeight; // @synthesize keyBoardHeight=_keyBoardHeight;
@property(nonatomic) _Bool isKeyBoardShow; // @synthesize isKeyBoardShow=_isKeyBoardShow;
@property(retain, nonatomic) MMTextView *noticeTextView; // @synthesize noticeTextView=_noticeTextView;
@property(retain, nonatomic) MMUIButton *removeImageButton; // @synthesize removeImageButton=_removeImageButton;
@property(retain, nonatomic) UIView *removeImageButtonView; // @synthesize removeImageButtonView=_removeImageButtonView;
@property(retain, nonatomic) MMWebImageView *noticeImageView; // @synthesize noticeImageView=_noticeImageView;
@property(retain, nonatomic) MMFinderLiveFansGroupAnchorEditFansNoticeInfo *editedNoticeInfo; // @synthesize editedNoticeInfo=_editedNoticeInfo;
@property(retain, nonatomic) MMUIButton *modifyButton; // @synthesize modifyButton=_modifyButton;
@property(retain, nonatomic) MMUIButton *imageSelectButton; // @synthesize imageSelectButton=_imageSelectButton;
@property(retain, nonatomic) UIImageView *visibilityRightChevronView; // @synthesize visibilityRightChevronView=_visibilityRightChevronView;
@property(retain, nonatomic) MMUILabel *visibilityTitleLabel; // @synthesize visibilityTitleLabel=_visibilityTitleLabel;
@property(retain, nonatomic) MMUILabel *visibilityTipLabel; // @synthesize visibilityTipLabel=_visibilityTipLabel;
@property(retain, nonatomic) UIView *visibilityLowerlineView; // @synthesize visibilityLowerlineView=_visibilityLowerlineView;
@property(retain, nonatomic) UIView *visibilityUpperlineView; // @synthesize visibilityUpperlineView=_visibilityUpperlineView;
@property(retain, nonatomic) UIView *visibilityContainerView; // @synthesize visibilityContainerView=_visibilityContainerView;
@property(retain, nonatomic) UIScrollView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMFinderLiveFansGroupOperationReportDelegate> reportDelegate; // @synthesize reportDelegate=_reportDelegate;
@property(nonatomic) __weak id <MMFinderLiveFansGroupFansNoticeModifyPanelDelegate> panelDelegate; // @synthesize panelDelegate=_panelDelegate;
- (_Bool)superfanEnabled;
- (void)makeInputBecomeFirstResponder;
- (void)updateVisibilityTipLabel;
- (void)configWithInfo:(id)arg1;
- (void)syncCurrentNoticeInfoToServer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)openImageSelect;
- (void)updateImageSelectButtonImage;
- (_Bool)getModifyButtonEnable;
- (double)maxWidthForTextView;
- (double)expectedHeightForTextView;
- (void)resizeInputViewsIfNeeded;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)noticeVisibilitySheetDidConfirm:(id)arg1 newInfo:(id)arg2;
- (void)noticeVisibilitySheetWillDisappear:(id)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)onChangeVisibility:(id)arg1;
- (void)onRemoveImageClicked;
- (void)onSelectImageClicked:(id)arg1;
- (void)onModifyButtonClicked:(id)arg1;
- (void)onCancelButtonClicked;
- (id)navigationBackButton;
- (void)onContentSizeUpdated;
- (void)updateDetailViewFrameAnimated:(_Bool)arg1;
- (double)getMaxPanelHeight;
- (double)getPanelContentHeight;
- (double)contentHeight;
- (double)contentWidth;
- (void)updateModifyButtonStyle;
- (void)layoutNoticeInputViews;
- (void)layoutVisibilityViews;
- (void)layoutContentView;
- (void)createAllViews;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setupPageSheetConfig;
- (void)initNotifications;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

