//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, EmoticonBoardView, MMGrowTextView, MMLiveInputController, MMUILabel, NSMutableArray, NSString, UIButton, UIColor, UIFont;
@protocol WCFinderBulletInputToolbarViewDelegate;

@interface WCFinderBulletInputToolbarView : UIView
{
    _Bool _showingInputView;
    _Bool _isForceCloseContactSelectView;
    EmoticonBoardView *_emoticonBoardView;
    unsigned long long _maxInputCharsCount;
    id <WCFinderBulletInputToolbarViewDelegate> _delegate;
    MMLiveInputController *_inputController;
    UIColor *_inputBackColor;
    NSString *_placeHolderStr;
    UIFont *_textFont;
    CDUnknownBlockType _showCustomToastCallback;
    unsigned long long _appearCountTipsCharsCount;
    long long _currentOrientation;
    NSString *_previousText;
    UIView *_bulletInputView;
    MMGrowTextView *_growTextView;
    UIButton *_switchButton;
    MMUILabel *_countTipLabel;
    UIButton *_expressionButton;
    NSMutableArray *_scrollViewArr;
    NSString *_prePlaceHolderStr;
    NSString *_lastTextViewText;
    MMUILabel *_disableTipLabel;
    CAGradientLayer *_gradientLayer;
    UIView *_limitView;
}

+ (double)inputToolViewInitialHeight;
- (void).cxx_destruct;
@property(nonatomic) __weak UIView *limitView; // @synthesize limitView=_limitView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) MMUILabel *disableTipLabel; // @synthesize disableTipLabel=_disableTipLabel;
@property(nonatomic) _Bool isForceCloseContactSelectView; // @synthesize isForceCloseContactSelectView=_isForceCloseContactSelectView;
@property(copy, nonatomic) NSString *lastTextViewText; // @synthesize lastTextViewText=_lastTextViewText;
@property(copy, nonatomic) NSString *prePlaceHolderStr; // @synthesize prePlaceHolderStr=_prePlaceHolderStr;
@property(retain, nonatomic) NSMutableArray *scrollViewArr; // @synthesize scrollViewArr=_scrollViewArr;
@property(retain, nonatomic) UIButton *expressionButton; // @synthesize expressionButton=_expressionButton;
@property(retain, nonatomic) MMUILabel *countTipLabel; // @synthesize countTipLabel=_countTipLabel;
@property(retain, nonatomic) UIButton *switchButton; // @synthesize switchButton=_switchButton;
@property(retain, nonatomic) MMGrowTextView *growTextView; // @synthesize growTextView=_growTextView;
@property(retain, nonatomic) UIView *bulletInputView; // @synthesize bulletInputView=_bulletInputView;
@property(copy, nonatomic) NSString *previousText; // @synthesize previousText=_previousText;
@property(nonatomic) long long currentOrientation; // @synthesize currentOrientation=_currentOrientation;
@property(nonatomic) unsigned long long appearCountTipsCharsCount; // @synthesize appearCountTipsCharsCount=_appearCountTipsCharsCount;
@property(copy, nonatomic) CDUnknownBlockType showCustomToastCallback; // @synthesize showCustomToastCallback=_showCustomToastCallback;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(copy, nonatomic) NSString *placeHolderStr; // @synthesize placeHolderStr=_placeHolderStr;
@property(retain, nonatomic) UIColor *inputBackColor; // @synthesize inputBackColor=_inputBackColor;
@property(retain, nonatomic) MMLiveInputController *inputController; // @synthesize inputController=_inputController;
@property(nonatomic) __weak id <WCFinderBulletInputToolbarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long maxInputCharsCount; // @synthesize maxInputCharsCount=_maxInputCharsCount;
@property(retain, nonatomic) EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(nonatomic) _Bool showingInputView; // @synthesize showingInputView=_showingInputView;
- (void)textDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)textViewTextDidChange;
- (void)didCommitText:(id)arg1;
- (_Bool)shouldAutoClose;
- (void)refreshEmoticonView;
- (void)onInputModeChangeTo:(long long)arg1 Animated:(_Bool)arg2;
- (void)keyboardDidHide;
- (void)keyboardWillShow;
- (void)InputViewFrameDidChange:(id)arg1;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (double)getVisibleHeight;
- (void)addScrollView:(id)arg1 withMarginBottomInputView:(double)arg2 adjustCallBack:(CDUnknownBlockType)arg3 getCurrentBottomCallBack:(CDUnknownBlockType)arg4;
- (void)setPlaceHolderStrOnce:(id)arg1;
- (void)setInteractionLimit:(_Bool)arg1;
- (void)setGrowTextViewHidden:(_Bool)arg1;
- (void)setDisableTipLabelHidden:(_Bool)arg1;
- (void)setSwitchButtonHidden:(_Bool)arg1;
- (void)setExpressionButtonEnable:(_Bool)arg1;
- (void)clearInputText;
- (void)setText:(id)arg1;
- (void)updateScrollViewFrameWhenShowInputView;
- (void)closeInputView;
- (void)showInputViewAtScrollViewY:(double)arg1;
- (void)becomeTextView;
- (_Bool)isLastCharacterAlphaNumeric:(id)arg1;
- (void)updateTableViewFrameWithInputViewTop:(double)arg1;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (void)onSwitchButtonClicked:(id)arg1;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)updateExpressionButtonFrame;
- (void)layoutExpressionButton;
- (void)updateCharsCountTipLabel;
- (void)updateCountTipLabelFrame;
- (void)layoutCountTipLabel;
- (void)updateDisableTipLabelFrame;
- (void)layoutDisableTipLabel;
- (void)updateGrowTextViewFrame;
- (void)updateSwitchButtonFrame;
- (void)layoutSwitchButton;
- (void)layoutGrowTextView;
- (void)updateBulletInputViewFrame;
- (void)updateGradientLayerFrame;
- (double)getBulletViewHeight;
- (void)layoutBulletInputView;
- (void)layoutGradientLayer;
- (void)updateSelfHeight;
- (void)layoutUI;
- (void)initInputController;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

