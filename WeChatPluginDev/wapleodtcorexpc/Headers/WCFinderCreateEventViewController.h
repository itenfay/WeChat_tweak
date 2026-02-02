//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, MMTextView, MMUIButton, MMWebImageView, NSString, RichTextView, UIButton, UIDatePicker, UIImage, UILabel, UIScrollView, UIView, WCFinderEventModel;
@protocol WCFinderCreateEvenDelegate;

@interface WCFinderCreateEventViewController
{
    id <WCFinderCreateEvenDelegate> _delegate;
    WCFinderEventModel *_event;
    UIImage *_choosedImage;
    UIScrollView *_scrollView;
    UIButton *_confirmButton;
    MMWebImageView *_backgroundImageView;
    CAGradientLayer *_gradientLayer;
    MMTextView *_activityNameTextView;
    MMTextView *_activityDescTextView;
    UIButton *_timeButton;
    UIView *_contentView;
    UIDatePicker *_datePicker;
    UIView *_dateActionSheet;
    UIView *_transparentView;
    MMWebImageView *_headImageView;
    UILabel *_nameLabel;
    UIView *_nameBackground;
    UIView *_descBackground;
    UILabel *_nameCountLabel;
    UILabel *_descCountLabel;
    UIButton *_imageButton;
    RichTextView *_statementView;
    MMUIButton *_agreetButton;
    UIView *_agreetView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *agreetView; // @synthesize agreetView=_agreetView;
@property(retain, nonatomic) MMUIButton *agreetButton; // @synthesize agreetButton=_agreetButton;
@property(retain, nonatomic) RichTextView *statementView; // @synthesize statementView=_statementView;
@property(retain, nonatomic) UIButton *imageButton; // @synthesize imageButton=_imageButton;
@property(retain, nonatomic) UILabel *descCountLabel; // @synthesize descCountLabel=_descCountLabel;
@property(retain, nonatomic) UILabel *nameCountLabel; // @synthesize nameCountLabel=_nameCountLabel;
@property(retain, nonatomic) UIView *descBackground; // @synthesize descBackground=_descBackground;
@property(retain, nonatomic) UIView *nameBackground; // @synthesize nameBackground=_nameBackground;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMWebImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIView *transparentView; // @synthesize transparentView=_transparentView;
@property(retain, nonatomic) UIView *dateActionSheet; // @synthesize dateActionSheet=_dateActionSheet;
@property(retain, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIButton *timeButton; // @synthesize timeButton=_timeButton;
@property(retain, nonatomic) MMTextView *activityDescTextView; // @synthesize activityDescTextView=_activityDescTextView;
@property(retain, nonatomic) MMTextView *activityNameTextView; // @synthesize activityNameTextView=_activityNameTextView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) MMWebImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIImage *choosedImage; // @synthesize choosedImage=_choosedImage;
@property(retain, nonatomic) WCFinderEventModel *event; // @synthesize event=_event;
@property(nonatomic) __weak id <WCFinderCreateEvenDelegate> delegate; // @synthesize delegate=_delegate;
- (void)registerYReportSdk;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)imageCropperDidCancel:(id)arg1;
- (void)imageCropper:(id)arg1 didFinished:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (id)endDateStr;
- (_Bool)eventInfoRequired;
- (_Bool)canCreateEvent;
- (void)showError:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)keyboardWillHide:(_Bool)arg1;
- (void)keyboardWillShow:(double)arg1;
- (void)onAgreementCheckBoxClick;
- (void)onDateChanged;
- (void)onHideActionSheet;
- (void)onShowActionSheet;
- (void)onEndEditing;
- (void)onDescEdit;
- (void)onNameEdit;
- (void)onShowAlbumActionSheet;
- (void)onChooseImage;
- (void)onDelAlbum;
- (void)postEvent:(id)arg1;
- (void)OnReturn;
- (void)OnCancel;
- (void)updatePostWarning;
- (void)updateConfirmButtonStatus;
- (void)scrollToEditZone;
- (void)updateAlbum;
- (void)updateNoAlubm;
- (void)showReadOnly;
- (void)layoutComponents;
- (void)layoutViews;
- (_Bool)useTransparentNavibar;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

