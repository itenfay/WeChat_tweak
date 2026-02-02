//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMWebImageView, NSString, UIButton, UIImage, UILabel, UITextField;

@interface ShareToGoodLookComfirmView : UIView
{
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _sendBlock;
    NSString *_title;
    NSString *_detailText;
    NSString *_editPlaceHolder;
    UIImage *_thumbImage;
    NSString *_thumbImageURL;
    UIView *_maskView;
    UILabel *_titleLabel;
    UILabel *_detailTextLabel;
    UIView *_detailBackgroundView;
    UIButton *_confirmButton;
    UIButton *_cancelButton;
    UITextField *_thoughtsTextField;
    UIView *_horizationLineView;
    UIView *_verticalLineView;
    UIView *_textFieldUnderLineView;
    UILabel *_tipsLabel;
    MMWebImageView *_thumbImageView;
    double _currentKeyboardOffset;
}

- (void).cxx_destruct;
@property(nonatomic) double currentKeyboardOffset; // @synthesize currentKeyboardOffset=_currentKeyboardOffset;
@property(retain, nonatomic) MMWebImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIView *textFieldUnderLineView; // @synthesize textFieldUnderLineView=_textFieldUnderLineView;
@property(retain, nonatomic) UIView *verticalLineView; // @synthesize verticalLineView=_verticalLineView;
@property(retain, nonatomic) UIView *horizationLineView; // @synthesize horizationLineView=_horizationLineView;
@property(retain, nonatomic) UITextField *thoughtsTextField; // @synthesize thoughtsTextField=_thoughtsTextField;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIView *detailBackgroundView; // @synthesize detailBackgroundView=_detailBackgroundView;
@property(retain, nonatomic) UILabel *detailTextLabel; // @synthesize detailTextLabel=_detailTextLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIView *maskView; // @synthesize maskView=_maskView;
@property(copy, nonatomic) NSString *thumbImageURL; // @synthesize thumbImageURL=_thumbImageURL;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(copy, nonatomic) NSString *editPlaceHolder; // @synthesize editPlaceHolder=_editPlaceHolder;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) CDUnknownBlockType sendBlock; // @synthesize sendBlock=_sendBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (double)adaptedViewWidthIn:(id)arg1;
- (_Bool)shouldShowCoverView;
- (void)onHandleCancelButtonClicked:(id)arg1;
- (void)onHandleSendButtonClicked:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)handleKeyboardWillHide:(id)arg1;
- (void)handleKeyboardWillShow:(id)arg1;
- (void)tapOutsideKeyboard;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)showInView:(id)arg1 withTips:(id)arg2;
- (void)showInView:(id)arg1;
- (void)insertTips:(id)arg1;
- (void)layoutSubviews;
- (double)viewHeight;
- (void)initSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 editPlaceHodler:(id)arg3 thumbImage:(id)arg4 thumbImageURL:(id)arg5 sendBlock:(CDUnknownBlockType)arg6 cancelBlock:(CDUnknownBlockType)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

