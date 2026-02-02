//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTemplatedTextStickerImageProvider, MMFinderLiveTextStickerItem, MMUITextField, NSString, UIButton, UIImageView, UIView;
@protocol MMFinderLiveStickerContentPickerDelegate;

@interface MMFinderLiveStickerTemplatedTextPickerViewController
{
    id <MMFinderLiveStickerContentPickerDelegate> _delegate;
    unsigned long long _overrideOrientationMask;
    MMFinderLiveTemplatedTextStickerImageProvider *_imageProvider;
    MMFinderLiveTextStickerItem *_stickerItem;
    double _keyboardHeight;
    UIImageView *_previewImageView;
    UIView *_bottomBarContainerView;
    MMUITextField *_textField;
    UIButton *_confirmButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) MMUITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UIView *bottomBarContainerView; // @synthesize bottomBarContainerView=_bottomBarContainerView;
@property(retain, nonatomic) UIImageView *previewImageView; // @synthesize previewImageView=_previewImageView;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) MMFinderLiveTextStickerItem *stickerItem; // @synthesize stickerItem=_stickerItem;
@property(retain, nonatomic) MMFinderLiveTemplatedTextStickerImageProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
@property(nonatomic) unsigned long long overrideOrientationMask; // @synthesize overrideOrientationMask=_overrideOrientationMask;
@property(nonatomic) __weak id <MMFinderLiveStickerContentPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onConfirmed;
- (void)onTextFieldChanged;
- (void)onKeyboardHiding:(id)arg1;
- (void)onKeyboardShowing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)showWithStickerItem:(id)arg1 inViewController:(id)arg2;
- (void)dealloc;
- (id)initWithLowerThirdImageGenerator:(id)arg1 resources:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

