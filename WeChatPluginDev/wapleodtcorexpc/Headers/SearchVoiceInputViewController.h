//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMGrowTextView, MMTipsViewController, MMUILabel, NSMutableArray, NSMutableDictionary, NSString, StreamVoiceInputControlView, StreamVoiceInputLogic, StreamVoiceInputPrepareView, UIButton, UIImageView, UILabel, UIView;
@protocol SearchVoiceInputViewControllerDelegate;

@interface SearchVoiceInputViewController
{
    NSMutableArray *_displayDataArray;
    unsigned long long _longClickTime;
    int _textChangeCount;
    UIView *_recordLeftView;
    UIImageView *_recordWarningView;
    MMUILabel *_tooShortLabel;
    UIImageView *_inputToolView;
    long long _recordingWordingIndex;
    NSString *_recordingWording;
    double _currentHalfViewHeight;
    long long _hasSetCursorPos;
    UIView *_coverView;
    _Bool _willHide;
    _Bool _bAlwayShowMaskView;
    _Bool _isNavVoice;
    unsigned int _scene;
    id <SearchVoiceInputViewControllerDelegate> _delegate;
    unsigned long long _inputStatus;
    NSString *_sessionId;
    NSString *_subSessionId;
    UIView *_containerView;
    MMGrowTextView *_inputResultView;
    UILabel *_inputIntroLabel;
    StreamVoiceInputControlView *_controlView;
    StreamVoiceInputPrepareView *_prepareView;
    MMTipsViewController *_tipsView;
    UIButton *_cancelButton;
    NSMutableDictionary *_inputLogicDic;
    StreamVoiceInputLogic *_curInputLogic;
    NSMutableArray *_voiceIdArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *voiceIdArray; // @synthesize voiceIdArray=_voiceIdArray;
@property(retain, nonatomic) StreamVoiceInputLogic *curInputLogic; // @synthesize curInputLogic=_curInputLogic;
@property(retain, nonatomic) NSMutableDictionary *inputLogicDic; // @synthesize inputLogicDic=_inputLogicDic;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) MMTipsViewController *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) StreamVoiceInputPrepareView *prepareView; // @synthesize prepareView=_prepareView;
@property(retain, nonatomic) StreamVoiceInputControlView *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) UILabel *inputIntroLabel; // @synthesize inputIntroLabel=_inputIntroLabel;
@property(retain, nonatomic) MMGrowTextView *inputResultView; // @synthesize inputResultView=_inputResultView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSString *subSessionId; // @synthesize subSessionId=_subSessionId;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) _Bool isNavVoice; // @synthesize isNavVoice=_isNavVoice;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool bAlwayShowMaskView; // @synthesize bAlwayShowMaskView=_bAlwayShowMaskView;
@property(nonatomic) unsigned long long inputStatus; // @synthesize inputStatus=_inputStatus;
@property(nonatomic) __weak id <SearchVoiceInputViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (double)getVisibleHeight;
- (void)textViewTextDidChange;
- (void)onCoverViewSwipeFrom:(id)arg1;
- (void)onTapCoverView;
- (void)userDidCancel;
- (void)delaySetStartStatus;
- (void)userTryToEndRecord:(_Bool)arg1;
- (void)userTryToRecord:(_Bool)arg1;
- (void)userDidHoldEnd:(_Bool)arg1;
- (void)userDidHoldBegin;
- (void)OnVoiceTransEnd:(unsigned int)arg1;
- (void)OnError:(int)arg1 andInputId:(unsigned int)arg2;
- (void)onGetResultText:(id)arg1 andInputId:(unsigned int)arg2;
- (void)OnLevelMeter:(unsigned long long)arg1 Peak:(float)arg2;
- (void)OnEndRecord;
- (void)OnStartRecord;
- (double)getContainerViewY;
- (void)hideStreamVoiceInputView;
- (void)showStreamVoiceInputView;
- (void)setTextViewSelectionRange:(struct _NSRange)arg1;
- (_Bool)resizeContainerViewHeight;
- (_Bool)checkCanDoFurtherAction;
- (id)getRecordingWording;
- (void)changeRecordingWording:(id)arg1;
- (void)stopRecord;
- (unsigned long long)startRecord;
- (id)generateAttrTextFrom:(id)arg1 withUncertainLength:(int)arg2 withLastLargeFontLength:(int)arg3 withLastSavedTextCount:(int)arg4;
- (void)displayInitingWording;
- (_Bool)hasVoiceInputResult;
- (void)resetResultTextView;
- (void)displayResultText;
- (int)getUncertainLength;
- (void)forceSetAllInputEnd;
- (void)setAllEnd;
- (_Bool)ifGetResultAllEnd;
- (void)showCancelOrClearButton:(_Bool)arg1;
- (void)hideTooShortTips;
- (void)hideRecordingMaskView;
- (void)showRecordingMaskView;
- (void)showTooShortTips;
- (void)showInputEnd;
- (void)showRecordEndView;
- (void)showRecordEndWaitingView;
- (void)showRecordingViewForHold;
- (void)showRecorderInitHoldView;
- (void)showPrepareView;
- (void)handleSwipeFrom:(id)arg1;
- (void)initTooShortTipView;
- (void)initView;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

