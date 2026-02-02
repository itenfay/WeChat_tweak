//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EditImageTextInputView, MMFinderLiveTextStickerItem, NSString, UIView;
@protocol MMFinderLiveStickerContentPickerDelegate;

@interface MMFinderLiveStickerStandardTextPickerViewController
{
    id <MMFinderLiveStickerContentPickerDelegate> _delegate;
    unsigned long long _overrideOrientationMask;
    MMFinderLiveTextStickerItem *_stickerItem;
    double _keyboardHeight;
    UIView *_inputContainerView;
    EditImageTextInputView *_inputView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EditImageTextInputView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) UIView *inputContainerView; // @synthesize inputContainerView=_inputContainerView;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) MMFinderLiveTextStickerItem *stickerItem; // @synthesize stickerItem=_stickerItem;
@property(nonatomic) unsigned long long overrideOrientationMask; // @synthesize overrideOrientationMask=_overrideOrientationMask;
@property(nonatomic) __weak id <MMFinderLiveStickerContentPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onKeyboardHiding:(id)arg1;
- (void)onKeyboardShowing:(id)arg1;
- (void)cancelEditText:(id)arg1;
- (void)confirmEditText:(id)arg1 withColor:(id)arg2 style:(unsigned long long)arg3 backgroundColor:(id)arg4;
- (void)viewDidLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)showWithStickerItem:(id)arg1 inViewController:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

