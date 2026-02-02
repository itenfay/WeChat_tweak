//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMTimer, MMUIButton, NSString, TextInputTranslatingMgr, TranslateLanguageSelectView, UIImageView, UILabel;
@protocol TranslateToolViewDelegate;

@interface TranslateToolView : UIView
{
    _Bool _bShowing;
    int _state;
    unsigned int _translatingWordingIndex;
    id <TranslateToolViewDelegate> _delegate;
    NSString *_chatName;
    double _transStateWidth;
    unsigned long long _currentInputID;
    UILabel *_resultLabel;
    UIView *_resultCropView;
    MMUIButton *_transIconBtn;
    UIImageView *_arrowImageView;
    MMUIButton *_useResultButton;
    MMUIButton *_languageSelectButton;
    TranslateLanguageSelectView *_selectedLanguageView;
    NSString *_language;
    NSString *_nsTranslatedText;
    NSString *_translatingWording;
    NSString *_nsTranslatedTextToDispaly;
    NSString *_nsTranslatedTextWithNoLineBreak;
    MMTimer *_timer;
    TextInputTranslatingMgr *_translatingMgr;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bShowing; // @synthesize bShowing=_bShowing;
@property(retain, nonatomic) TextInputTranslatingMgr *translatingMgr; // @synthesize translatingMgr=_translatingMgr;
@property(nonatomic) unsigned int translatingWordingIndex; // @synthesize translatingWordingIndex=_translatingWordingIndex;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSString *nsTranslatedTextWithNoLineBreak; // @synthesize nsTranslatedTextWithNoLineBreak=_nsTranslatedTextWithNoLineBreak;
@property(retain, nonatomic) NSString *nsTranslatedTextToDispaly; // @synthesize nsTranslatedTextToDispaly=_nsTranslatedTextToDispaly;
@property(retain, nonatomic) NSString *translatingWording; // @synthesize translatingWording=_translatingWording;
@property(retain, nonatomic) NSString *nsTranslatedText; // @synthesize nsTranslatedText=_nsTranslatedText;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) TranslateLanguageSelectView *selectedLanguageView; // @synthesize selectedLanguageView=_selectedLanguageView;
@property(retain, nonatomic) MMUIButton *languageSelectButton; // @synthesize languageSelectButton=_languageSelectButton;
@property(retain, nonatomic) MMUIButton *useResultButton; // @synthesize useResultButton=_useResultButton;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMUIButton *transIconBtn; // @synthesize transIconBtn=_transIconBtn;
@property(retain, nonatomic) UIView *resultCropView; // @synthesize resultCropView=_resultCropView;
@property(retain, nonatomic) UILabel *resultLabel; // @synthesize resultLabel=_resultLabel;
@property(nonatomic) unsigned long long currentInputID; // @synthesize currentInputID=_currentInputID;
@property(nonatomic) double transStateWidth; // @synthesize transStateWidth=_transStateWidth;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(nonatomic) __weak id <TranslateToolViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTranslateFinishWithText:(id)arg1 translateText:(id)arg2 inputID:(unsigned long long)arg3;
- (id)getChatName;
- (id)getViewController;
- (void)onWindowHide;
- (void)onLanguageSelectViewWillClose;
- (void)onConfirmedWithLanguageType:(id)arg1;
- (void)onClickSelectLanguage;
- (void)onClickLanguageSelectBtn;
- (void)onSendText:(id)arg1;
- (void)onClickUseTransResultContent;
- (void)onClickResultLabel;
- (void)reportShowTranslate;
- (void)onViewDisappear;
- (void)setHidden:(_Bool)arg1;
- (unsigned long long)getInputID;
- (void)updateTransWidth:(double)arg1;
- (void)hiddenLanguageSelectView;
- (void)onInputContentChangeWithText:(id)arg1;
- (void)changeTranslatingWording;
- (void)displayResultText;
- (void)setResultLabelText:(id)arg1;
- (void)stopTimer;
- (void)startTimer;
- (void)showUseResultBtn;
- (void)changeToTranslatingState;
- (void)changeToTranslatedState;
- (void)changeToReadyState;
- (void)changeToTransState:(int)arg1;
- (void)resizeLanguageSelectButton;
- (void)initView;
- (id)initWithTransStateWidth:(double)arg1 chatName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

