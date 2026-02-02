//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMUITextField, NSString, UIColor, UIImageView, UISwitch, UIView;
@protocol WCFinderLiveStartLotteryItemViewDelegate;

@interface WCFinderLiveStartLotteryItemView
{
    _Bool _hasRectCorner;
    _Bool _isShowSepelateLine;
    _Bool _needFilterWhiteSpace;
    _Bool _limitView;
    _Bool _unableSelection;
    _Bool _unableTextField;
    unsigned int _maxInputWordCount;
    id <WCFinderLiveStartLotteryItemViewDelegate> _delegate;
    unsigned long long _rectCorner;
    UIView *_containerView;
    MMUILabel *_itemTextLabel;
    MMUILabel *_itemSuffixLabel;
    MMUITextField *_textField;
    MMUILabel *_wordsCountTipsLabel;
    UIImageView *_arrowImgView;
    UISwitch *_uiSwitch;
    UIView *_customView;
    UIView *_itemTextSuffixView;
    long long _itemType;
    unsigned long long _maxInputNumber;
    CDUnknownBlockType _inputNumberDidChanged;
    UIView *_sepelateLine;
    UIColor *_switchOnColor;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool unableTextField; // @synthesize unableTextField=_unableTextField;
@property(nonatomic) _Bool unableSelection; // @synthesize unableSelection=_unableSelection;
@property(retain, nonatomic) UIColor *switchOnColor; // @synthesize switchOnColor=_switchOnColor;
@property(nonatomic) _Bool limitView; // @synthesize limitView=_limitView;
@property(nonatomic) _Bool needFilterWhiteSpace; // @synthesize needFilterWhiteSpace=_needFilterWhiteSpace;
@property(retain, nonatomic) UIView *sepelateLine; // @synthesize sepelateLine=_sepelateLine;
@property(nonatomic) _Bool isShowSepelateLine; // @synthesize isShowSepelateLine=_isShowSepelateLine;
@property(copy, nonatomic) CDUnknownBlockType inputNumberDidChanged; // @synthesize inputNumberDidChanged=_inputNumberDidChanged;
@property(nonatomic) unsigned int maxInputWordCount; // @synthesize maxInputWordCount=_maxInputWordCount;
@property(nonatomic) unsigned long long maxInputNumber; // @synthesize maxInputNumber=_maxInputNumber;
@property(nonatomic) long long itemType; // @synthesize itemType=_itemType;
@property(retain, nonatomic) UIView *itemTextSuffixView; // @synthesize itemTextSuffixView=_itemTextSuffixView;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(retain, nonatomic) UISwitch *uiSwitch; // @synthesize uiSwitch=_uiSwitch;
@property(retain, nonatomic) UIImageView *arrowImgView; // @synthesize arrowImgView=_arrowImgView;
@property(retain, nonatomic) MMUILabel *wordsCountTipsLabel; // @synthesize wordsCountTipsLabel=_wordsCountTipsLabel;
@property(retain, nonatomic) MMUITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) MMUILabel *itemSuffixLabel; // @synthesize itemSuffixLabel=_itemSuffixLabel;
@property(retain, nonatomic) MMUILabel *itemTextLabel; // @synthesize itemTextLabel=_itemTextLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) unsigned long long rectCorner; // @synthesize rectCorner=_rectCorner;
@property(nonatomic) _Bool hasRectCorner; // @synthesize hasRectCorner=_hasRectCorner;
@property(nonatomic) __weak id <WCFinderLiveStartLotteryItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)switchDidChanged:(id)arg1;
- (void)handleSelfViewTapGesture:(id)arg1;
- (void)onTextFieldShowKeyBoard;
- (void)onTextFieldHideKeyBoard;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)updateItemText:(id)arg1 suffixText:(id)arg2 placeHolder:(id)arg3 switchOn:(_Bool)arg4 itemTextSuffixView:(id)arg5;
- (void)updateItemText:(id)arg1 suffixText:(id)arg2 placeHolder:(id)arg3;
- (void)updateItemText:(id)arg1 itemTextSuffixView:(id)arg2 customView:(id)arg3;
- (void)updateItemText:(id)arg1 customView:(id)arg2;
- (void)layoutWordsCountTipsLabel;
- (void)layoutUI;
- (void)setupUI;
- (void)updateLiveStartLotteryItemViewRectCorner:(unsigned long long)arg1;
- (id)accessibilityLabel;
- (void)updateTextFieldEnable:(_Bool)arg1 text:(id)arg2 placeHolder:(id)arg3;
- (id)initWithItemType:(long long)arg1 rectCorner:(unsigned long long)arg2;
- (void)layoutSubviews;
- (id)initWithItemType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

