//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AnimateEmojiNode, MessageInterceptReporter, NSArray, NSMutableArray, NSString, UIColor, UIFont;

@interface TextMessageViewModel
{
    NSMutableArray *m_subViewModels;
    NSString *m_contentText;
    struct CGSize m_contentTextSize;
    NSMutableArray *m_contentTextStyles;
    long long m_parserType;
    double m_labelWidth;
    NSString *m_contentPatternText;
    double m_contentTextFontLineHeight;
    struct CGSize m_replyTextSize;
    struct CGSize m_translatedTextSize;
    NSMutableArray *m_translateTextStyles;
    NSMutableArray *m_replyTextStyles;
    _Bool m_isSolitaire;
    _Bool m_isShouldLayout;
    UIColor *m_richTextBgColor;
    _Bool m_isLongSplitMsg;
    _Bool m_didCallIsLongSplitMessage;
    _Bool _foldText;
    _Bool _animateEmojiHasBeenPlayed;
    _Bool _didManuallyTranslateMsg;
    _Bool _isFirstAccess;
    int _customRotorElementIndex;
    NSMutableArray *_translateTextStyles;
    double _translatedLineY;
    double _contentMidY;
    NSMutableArray *_originContentTextStyles;
    double _contentHeight;
    long long _replyParseType;
    MessageInterceptReporter *_interceptReporter;
    double _animateEmojiTimeOffset;
    double _extraWidth;
    long long _foldMaxLineNumber;
    double _foldLastLineWidth;
    NSString *_foldContentText;
    NSArray *_customRotorElements;
    NSArray *_originArrStyles;
    struct CGSize _originalContentSize;
    struct UIEdgeInsets _replyTextInset;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *originArrStyles; // @synthesize originArrStyles=_originArrStyles;
@property(retain, nonatomic) NSArray *customRotorElements; // @synthesize customRotorElements=_customRotorElements;
@property(nonatomic) int customRotorElementIndex; // @synthesize customRotorElementIndex=_customRotorElementIndex;
@property(nonatomic) _Bool isFirstAccess; // @synthesize isFirstAccess=_isFirstAccess;
@property(retain, nonatomic) NSString *foldContentText; // @synthesize foldContentText=_foldContentText;
@property(nonatomic) double foldLastLineWidth; // @synthesize foldLastLineWidth=_foldLastLineWidth;
@property(nonatomic) long long foldMaxLineNumber; // @synthesize foldMaxLineNumber=_foldMaxLineNumber;
@property(nonatomic) double extraWidth; // @synthesize extraWidth=_extraWidth;
@property(nonatomic) _Bool didManuallyTranslateMsg; // @synthesize didManuallyTranslateMsg=_didManuallyTranslateMsg;
@property(nonatomic) _Bool animateEmojiHasBeenPlayed; // @synthesize animateEmojiHasBeenPlayed=_animateEmojiHasBeenPlayed;
@property(nonatomic) double animateEmojiTimeOffset; // @synthesize animateEmojiTimeOffset=_animateEmojiTimeOffset;
@property(retain, nonatomic) MessageInterceptReporter *interceptReporter; // @synthesize interceptReporter=_interceptReporter;
@property(nonatomic) struct UIEdgeInsets replyTextInset; // @synthesize replyTextInset=_replyTextInset;
@property(nonatomic) long long replyParseType; // @synthesize replyParseType=_replyParseType;
@property(nonatomic) _Bool foldText; // @synthesize foldText=_foldText;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(retain, nonatomic) NSMutableArray *originContentTextStyles; // @synthesize originContentTextStyles=_originContentTextStyles;
@property(nonatomic) double contentMidY; // @synthesize contentMidY=_contentMidY;
@property(nonatomic) double translatedLineY; // @synthesize translatedLineY=_translatedLineY;
@property(retain, nonatomic) NSMutableArray *translateTextStyles; // @synthesize translateTextStyles=_translateTextStyles;
@property(nonatomic) struct CGSize originalContentSize; // @synthesize originalContentSize=_originalContentSize;
@property(nonatomic) _Bool bSolitaire; // @synthesize bSolitaire=m_isSolitaire;
@property(retain, nonatomic) NSMutableArray *contentTextStyles; // @synthesize contentTextStyles=m_contentTextStyles;
@property(nonatomic) struct CGSize translatedTextSize; // @synthesize translatedTextSize=m_translatedTextSize;
@property(retain, nonatomic) NSArray *replyTextStyles; // @synthesize replyTextStyles=m_replyTextStyles;
@property(nonatomic) struct CGSize replyTextSize; // @synthesize replyTextSize=m_replyTextSize;
@property(nonatomic) struct CGSize contentTextSize; // @synthesize contentTextSize=m_contentTextSize;
- (void)triggerMagicEmojiAnimation:(id)arg1;
- (_Bool)playAnimatedEmojiWithTextView:(id)arg1 andAnimateEmojiBgView:(id)arg2;
@property(readonly, nonatomic) AnimateEmojiNode *animateEmoji;
- (void)onTranslateMessageChanged:(id)arg1;
- (void)onTranslateMessageFailed:(id)arg1 errTip:(id)arg2;
- (id)getRichTextViewConfig;
- (struct CGSize)sizeForContent:(id)arg1 layoutDelegate:(id)arg2 autoLineSpacing:(_Bool)arg3 outArrStyles:(id *)arg4;
- (struct CGSize)sizeForContent:(id)arg1 layoutDelegate:(id)arg2 outArrStyles:(id *)arg3;
- (void)onSolitaireFoldInfoChange:(id)arg1;
- (void)onSolitaireDeactiveWithChatName:(id)arg1 LocalIds:(id)arg2;
- (void)onSolitaireActiveWithChatName:(id)arg1 LocalIds:(id)arg2;
- (id)getReplyMsgContent;
- (id)getReplyString;
- (_Bool)canReplyMessageJump;
- (_Bool)isShowingRevokedReplyMessage;
- (_Bool)canShowReplyMessage;
- (double)lineWidthAtY:(double)arg1 lineIndex:(long long)arg2 richTextView:(id)arg3;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
@property(readonly, nonatomic) double autoTransHeight;
- (void)setAutoTransEnable:(_Bool)arg1;
- (_Bool)isAutoTransEnable;
- (_Bool)canShowAutoTransButton;
- (void)notifyAutoTransButtonExpose;
- (struct _NSRange)selectRangeForFoldText;
- (struct CGRect)moreButtonFrameForFoldText;
- (id)linkTextColor;
- (id)contentTextColor;
- (void)adjustTableOffset:(struct CGRect)arg1 delayForReloadTable:(_Bool)arg2;
- (struct CGRect)getInputToolViewFrame;
- (void)setSelectContentType:(int)arg1;
- (id)getMsgTableView;
- (struct CGRect)realFrameByCurFrame:(struct CGRect)arg1;
- (void)setLinkHighlighted:(_Bool)arg1 url:(id)arg2 frame:(struct CGRect)arg3;
- (struct _NSRange)getLinkRangeWithTargetLinkStyle:(id)arg1;
- (id)translateInfo;
- (_Bool)canShowTranslateView;
- (_Bool)canShowTranslatedText;
- (_Bool)canShowRevokeMsgMenuItem;
@property(readonly, nonatomic) double labelWidth;
- (void)expandSolitaire;
- (id)getFoldContentText;
- (_Bool)shouldFoldText;
@property(readonly, nonatomic) long long parserType;
- (id)contentPatternText;
@property(readonly, nonatomic) UIFont *contentTextFont;
@property(readonly, nonatomic) double contentTextFontLineHeight; // @synthesize contentTextFontLineHeight=m_contentTextFontLineHeight;
- (id)originContentText;
@property(readonly, nonatomic) NSString *contentText;
- (_Bool)shouldShowRoomTodoView;
- (_Bool)shouldLayoutIfNeeded;
- (void)setHighlighted:(_Bool)arg1;
- (id)additionalAccessibilityDescription;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (struct CGSize)calculateTranslatedTextSize;
- (void)compactBubbleTextSize;
- (struct CGSize)calculateReplyTextSize;
- (struct CGSize)calculateContentTextSize;
- (_Bool)shouldShowWeAppEntranceTail;
- (id)sourceTitle;
- (_Bool)isSupportSourceViewBottomClick;
- (_Bool)isShowSourceView;
- (_Bool)shouldShowSourceViewInContent;
- (void)resetLayoutCache;
@property(retain, nonatomic) UIColor *richTextBgColor; // @synthesize richTextBgColor=m_richTextBgColor;
- (void)updateChatContact:(id)arg1;
- (id)getTextMessageCellView;
- (id)cellDataForRow:(unsigned long long)arg1;
- (long long)numberOfRowsInSection;
- (id)cellViewClassName;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (id)getCustomRotorItemResultWithPredicate:(id)arg1;
- (void)setUpCustomRotorElementWithLinks:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)subViewModels;
- (_Bool)mm_isLongSplitMessage;
- (_Bool)isLongSplitMessage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

