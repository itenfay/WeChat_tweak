//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class Channel, EmoticonBoardView, GCInputChannelTipView, GCInputToolBaseViewConfig, GameChatInputController, MMGrowTextView, MMQuickSendEmoticonView, MMUILabel, NSMutableArray, NSString, UIButton, UIColor, UIFont;
@protocol GameChatInputToolViewDelegate;

@interface GameChatInputToolBaseView : UIView
{
    _Bool _showingInputView;
    EmoticonBoardView *_emoticonBoardView;
    unsigned long long _maxInputCharsCount;
    id <GameChatInputToolViewDelegate> _delegate;
    GameChatInputController *_inputController;
    UIColor *_pubbleInputBackColor;
    NSString *_plackHolderStr;
    UIFont *_textFont;
    Channel *_currentChannel;
    GCInputToolBaseViewConfig *_baseViewConfig;
    MMGrowTextView *_growTextView;
    unsigned long long _appearCountTipsCharsCount;
    long long _currentOrientation;
    NSMutableArray *_scrollViewArr;
    NSString *_prePlaceHolderStr;
    MMQuickSendEmoticonView *_quickSendEmoticonView;
    NSString *_lastRequestEmoticonDesc;
    UIView *_pubbleInputView;
    UIView *_backGroundView;
    MMUILabel *_countTipLabel;
    UIButton *_expressionButton;
    GCInputChannelTipView *_channelTipVIew;
}

+ (double)inputToolViewInitialHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) GCInputChannelTipView *channelTipVIew; // @synthesize channelTipVIew=_channelTipVIew;
@property(retain, nonatomic) UIButton *expressionButton; // @synthesize expressionButton=_expressionButton;
@property(retain, nonatomic) MMUILabel *countTipLabel; // @synthesize countTipLabel=_countTipLabel;
@property(retain, nonatomic) UIView *backGroundView; // @synthesize backGroundView=_backGroundView;
@property(retain, nonatomic) UIView *pubbleInputView; // @synthesize pubbleInputView=_pubbleInputView;
@property(retain, nonatomic) NSString *lastRequestEmoticonDesc; // @synthesize lastRequestEmoticonDesc=_lastRequestEmoticonDesc;
@property(retain, nonatomic) MMQuickSendEmoticonView *quickSendEmoticonView; // @synthesize quickSendEmoticonView=_quickSendEmoticonView;
@property(copy, nonatomic) NSString *prePlaceHolderStr; // @synthesize prePlaceHolderStr=_prePlaceHolderStr;
@property(retain, nonatomic) NSMutableArray *scrollViewArr; // @synthesize scrollViewArr=_scrollViewArr;
@property(nonatomic) long long currentOrientation; // @synthesize currentOrientation=_currentOrientation;
@property(nonatomic) unsigned long long appearCountTipsCharsCount; // @synthesize appearCountTipsCharsCount=_appearCountTipsCharsCount;
@property(retain, nonatomic) MMGrowTextView *growTextView; // @synthesize growTextView=_growTextView;
@property(retain, nonatomic) GCInputToolBaseViewConfig *baseViewConfig; // @synthesize baseViewConfig=_baseViewConfig;
@property(retain, nonatomic) Channel *currentChannel; // @synthesize currentChannel=_currentChannel;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(copy, nonatomic) NSString *plackHolderStr; // @synthesize plackHolderStr=_plackHolderStr;
@property(retain, nonatomic) UIColor *pubbleInputBackColor; // @synthesize pubbleInputBackColor=_pubbleInputBackColor;
@property(retain, nonatomic) GameChatInputController *inputController; // @synthesize inputController=_inputController;
@property(nonatomic) __weak id <GameChatInputToolViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long maxInputCharsCount; // @synthesize maxInputCharsCount=_maxInputCharsCount;
@property(retain, nonatomic) EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(nonatomic) _Bool showingInputView; // @synthesize showingInputView=_showingInputView;
- (void)forceClearInputContent;
- (_Bool)checkNetWorkUnReachable;
- (_Bool)customeHandleEmoticonSelect:(id)arg1;
- (void)onSelectorSelfDefinedEmotcion:(id)arg1;
- (void)requestEmoticonWrapByDesc:(id)arg1;
- (void)onTextChange:(id)arg1;
- (void)textDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)onDidCommitEnd;
- (_Bool)handleDidCommit;
- (void)didCommitText:(id)arg1;
- (void)growTextViewDidClickSendWithText:(id)arg1;
- (void)refreshEmoticonView;
- (void)onInputModeChangeTo:(long long)arg1 Animated:(_Bool)arg2;
- (void)keyboardDidHide;
- (void)keyboardWillShow;
- (void)InputViewFrameDidChange:(id)arg1;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (double)getVisibleHeight;
- (void)onSelectEmoticonSearchItem;
- (void)addScrollView:(id)arg1 withMarginBottomInputView:(double)arg2 adjustCallBack:(CDUnknownBlockType)arg3 getCurrentBottomCallBack:(CDUnknownBlockType)arg4;
- (void)setPlaceHolderStrOnce:(id)arg1;
- (void)setText:(id)arg1;
- (void)updateScrollViewFrameWhenShowInputView;
- (void)closeInputView;
- (void)showInputViewAtScrollViewY:(double)arg1;
- (void)subclassOnShowInputView;
- (_Bool)needStickBtm;
- (void)updateInputViewY;
- (void)updateTableViewFrameWithInputViewTop:(double)arg1;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (void)showEmoticonView;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)updateCharsCountTipLabel;
- (void)onMMQuickSendEmoticonViewClickEmoticonWrap:(id)arg1 index:(unsigned long long)arg2;
- (void)onMergeRecommendEmoticon:(id)arg1 emoticonWrapList:(id)arg2 sessionId:(id)arg3 recSessionId:(id)arg4 remoteWordListMeta:(id)arg5;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (double)subClsAditionPubbleViewHeight;
- (double)getPubbleViewHeight;
- (void)updateHeightAndNotifyChange;
- (void)updateSelfHeightAndLayoutSubvews;
- (void)updateSelfHeight;
- (void)initQuickSendEmoticonView;
- (void)layoutUI;
- (void)initInputController;
- (void)layoutSubviews;
- (void)didRotate:(id)arg1;
- (void)dealloc;
- (void)initSubViews;
- (void)initBgView;
- (id)btnWithImgNamed:(id)arg1 selector:(SEL)arg2 accessibilityLabel:(id)arg3;
- (id)leftBtmBtnColor;
- (void)initExpressBtn;
- (void)initCountTipLabel;
- (void)initGrowTextView;
- (void)initPubbleView;
- (id)initWithBaseViewConfig:(id)arg1;
- (void)handleDeSelect;
- (void)initChannelTipViewIfNeed;
- (void)configureCurrentChannel:(id)arg1 canDeselect:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

