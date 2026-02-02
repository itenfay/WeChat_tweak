//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class EmoticonBoardView, MMGrowTextView, MMLiveInputController, MMUILabel, NSString, UIButton, UIColor, UIFont;
@protocol MMMusicLiveInputViewDelegate;

@interface MMMusicLiveInputView : UIView
{
    _Bool _showingInputView;
    EmoticonBoardView *_emoticonBoardView;
    unsigned long long _maxInputCharsCount;
    id <MMMusicLiveInputViewDelegate> _delegate;
    MMLiveInputController *_inputController;
    UIColor *_pubbleInputBackColor;
    NSString *_plackHolderStr;
    UIFont *_textFont;
    UIButton *_sendLocationButton;
    unsigned long long _appearCountTipsCharsCount;
    long long _currentOrientation;
    NSString *_previousText;
    UIView *_pubbleInputView;
    MMGrowTextView *_growTextView;
    MMUILabel *_countTipLabel;
    UIButton *_expressionButton;
    NSString *_prePlaceHolderStr;
}

+ (double)inputToolViewInitialHeight;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *prePlaceHolderStr; // @synthesize prePlaceHolderStr=_prePlaceHolderStr;
@property(retain, nonatomic) UIButton *expressionButton; // @synthesize expressionButton=_expressionButton;
@property(retain, nonatomic) MMUILabel *countTipLabel; // @synthesize countTipLabel=_countTipLabel;
@property(retain, nonatomic) MMGrowTextView *growTextView; // @synthesize growTextView=_growTextView;
@property(retain, nonatomic) UIView *pubbleInputView; // @synthesize pubbleInputView=_pubbleInputView;
@property(copy, nonatomic) NSString *previousText; // @synthesize previousText=_previousText;
@property(nonatomic) long long currentOrientation; // @synthesize currentOrientation=_currentOrientation;
@property(nonatomic) unsigned long long appearCountTipsCharsCount; // @synthesize appearCountTipsCharsCount=_appearCountTipsCharsCount;
@property(retain, nonatomic) UIButton *sendLocationButton; // @synthesize sendLocationButton=_sendLocationButton;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(copy, nonatomic) NSString *plackHolderStr; // @synthesize plackHolderStr=_plackHolderStr;
@property(retain, nonatomic) UIColor *pubbleInputBackColor; // @synthesize pubbleInputBackColor=_pubbleInputBackColor;
@property(retain, nonatomic) MMLiveInputController *inputController; // @synthesize inputController=_inputController;
@property(nonatomic) __weak id <MMMusicLiveInputViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long maxInputCharsCount; // @synthesize maxInputCharsCount=_maxInputCharsCount;
@property(retain, nonatomic) EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(nonatomic) _Bool showingInputView; // @synthesize showingInputView=_showingInputView;
- (void)onSendLocationButtonClicked:(id)arg1;
- (void)layoutSendLocationButton;
- (_Bool)checkNetWorkUnReachable;
- (void)textViewTextDidChange;
- (void)didCommitText:(id)arg1;
- (void)onInputModeChangeTo:(long long)arg1 Animated:(_Bool)arg2;
- (void)keyboardDidHide;
- (void)keyboardWillShow;
- (void)InputViewFrameDidChange:(id)arg1;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (double)getVisibleHeight;
- (void)setPlaceHolderStrOnce:(id)arg1;
- (void)setText:(id)arg1;
- (void)close;
- (void)show;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)updateExpressionButtonFrame;
- (void)layoutExpressionButton;
- (void)updateCharsCountTipLabel;
- (void)updateCountTipLabelFrame;
- (void)layoutCountTipLabel;
- (void)updateGrowTextViewFrame;
- (void)layoutGrowTextView;
- (void)updatePubbleInputViewFrame;
- (double)getPubbleViewHeight;
- (void)layoutPubbleInputView;
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

