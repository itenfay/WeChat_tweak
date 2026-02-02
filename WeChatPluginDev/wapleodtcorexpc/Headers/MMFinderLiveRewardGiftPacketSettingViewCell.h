//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveGiftPacketViewModel, MMUIButton, MMUILabel, MMUITextField, NSString, UIImageView;
@protocol MMFinderLiveRewardGiftPacketSettingViewCellDelegate;

@interface MMFinderLiveRewardGiftPacketSettingViewCell
{
    _Bool _bSelected;
    UIImageView *_thumbnailView;
    MMUILabel *_displayNameLabel;
    MMUILabel *_priceLabel;
    UIImageView *_coinIconView;
    UIImageView *_selectedImageView;
    MMUITextField *_countNumField;
    MMUIButton *_addButton;
    MMUIButton *_minusButton;
    MMFinderLiveGiftPacketViewModel *_viewModel;
    CDUnknownBlockType _becomeFirstResponderBlock;
    id <MMFinderLiveRewardGiftPacketSettingViewCellDelegate> _cellDelegate;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(nonatomic) __weak id <MMFinderLiveRewardGiftPacketSettingViewCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(copy, nonatomic) CDUnknownBlockType becomeFirstResponderBlock; // @synthesize becomeFirstResponderBlock=_becomeFirstResponderBlock;
@property(retain, nonatomic) MMFinderLiveGiftPacketViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) MMUIButton *minusButton; // @synthesize minusButton=_minusButton;
@property(retain, nonatomic) MMUIButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) MMUITextField *countNumField; // @synthesize countNumField=_countNumField;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(nonatomic) _Bool bSelected; // @synthesize bSelected=_bSelected;
@property(retain, nonatomic) UIImageView *coinIconView; // @synthesize coinIconView=_coinIconView;
@property(retain, nonatomic) MMUILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) MMUILabel *displayNameLabel; // @synthesize displayNameLabel=_displayNameLabel;
@property(retain, nonatomic) UIImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
- (id)getGiftDescriptionFont:(id)arg1;
- (id)getGiftDiscription:(id)arg1;
- (id)getGiftIconImage:(id)arg1;
- (id)getGiftDisplayName:(id)arg1;
- (id)getDefaultGiftThumbImage;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 retry:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 resType:(long long)arg4 productId:(id)arg5 downloadUrl:(id)arg6;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (void)onTextFieldHideKeyBoard;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)onMinusButtonClicked:(id)arg1;
- (void)onAddButtonClicked:(id)arg1;
- (void)onCountNumFieldResignFirstResponder;
- (void)onSelectedImageViewDidTaped:(id)arg1;
- (void)onBackViewDidTaped:(id)arg1;
- (id)unSelectedImageForSelectedButton;
- (id)selectedImageForSelectedButton;
- (struct CGSize)selectedButtonSize;
- (double)selectedButtonLeftMargin;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)updateMinusButtonState;
- (void)updateWithViewModel:(id)arg1;
- (void)resetState;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

