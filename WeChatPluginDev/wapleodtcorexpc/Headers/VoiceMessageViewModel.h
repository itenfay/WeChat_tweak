//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CTRichTextView, NSMutableArray, NSString, VoiceTransInfo;

@interface VoiceMessageViewModel
{
    _Bool _isPlaying;
    _Bool _inMultiSelectStatus;
    _Bool _bShowingQuickTranTips;
    _Bool _bDelayRetryPlay;
    double _voiceNodeWidth;
    double _voiceNodeHeight;
    VoiceTransInfo *_voiceTranslateInfo;
    NSMutableArray *_textTranslateTextStyles;
    CTRichTextView *_richTextViewForCalcu;
    struct CGSize _textTranslateTextSize;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) CTRichTextView *richTextViewForCalcu; // @synthesize richTextViewForCalcu=_richTextViewForCalcu;
@property(retain, nonatomic) NSMutableArray *textTranslateTextStyles; // @synthesize textTranslateTextStyles=_textTranslateTextStyles;
@property(nonatomic) struct CGSize textTranslateTextSize; // @synthesize textTranslateTextSize=_textTranslateTextSize;
@property(nonatomic) _Bool bDelayRetryPlay; // @synthesize bDelayRetryPlay=_bDelayRetryPlay;
@property(nonatomic) _Bool bShowingQuickTranTips; // @synthesize bShowingQuickTranTips=_bShowingQuickTranTips;
@property(nonatomic) _Bool inMultiSelectStatus; // @synthesize inMultiSelectStatus=_inMultiSelectStatus;
@property(retain, nonatomic) VoiceTransInfo *voiceTranslateInfo; // @synthesize voiceTranslateInfo=_voiceTranslateInfo;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) double voiceNodeHeight; // @synthesize voiceNodeHeight=_voiceNodeHeight;
@property(nonatomic) double voiceNodeWidth; // @synthesize voiceNodeWidth=_voiceNodeWidth;
- (void)onTranslateMessageChanged:(id)arg1;
- (void)onTranslateMessageFailed:(id)arg1 errTip:(id)arg2;
- (_Bool)useEnhanceColor;
- (_Bool)canShowResumeButton;
- (id)accessibilityMessageType;
- (id)additionalAccessibilityDescription;
- (void)onMessageStopPlaying;
- (void)onMessageStartPlaying;
- (void)animateHiddenQuickTransTips;
- (void)animateShowQuickTransTips;
- (void)foldTranslateResult;
- (void)removeTranslateVoiceInfo;
- (void)stopTranslateVoice;
- (void)translateVoice;
- (struct CGSize)calculateTextTranslatedTextSize;
- (id)textTranslateInfo;
- (_Bool)canShowTextTranslateText;
- (_Bool)canShowTextTranslateView;
- (_Bool)canShowTextTranslateEntry;
- (void)reportKV;
- (void)adjustTableOffsetByPop:(double)arg1;
- (void)adjustTableOffset;
- (double)tableOffsetToScroll;
- (_Bool)canShowTranslateLoadingView;
- (_Bool)canShowTranslateText;
- (_Bool)isTranslateEnd;
- (_Bool)hasLocalTranslateResult;
- (id)pathOfTranslateResult;
@property(readonly, nonatomic) struct CGSize displayTextSize;
@property(readonly, nonatomic) struct CGSize translatedTextSize;
- (struct CGRect)getCellFrame;
@property(readonly, nonatomic) NSString *voiceTimeStirng;
@property(readonly, nonatomic) double voiceTimeLength;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;
- (void)dealloc;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

