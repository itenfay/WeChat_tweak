//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableArray, NSMutableAttributedString, NSRegularExpression, NSString, UIColor, WCFinderHighlightedInfoModel;
@protocol WCFinderFilterTextViewDelegate;

@interface WCFinderFilterTextView
{
    _Bool _forbidWXEmoji;
    _Bool _forbidEmoji;
    _Bool _shouldHelpMovingCursor;
    _Bool _disableMentionConatct;
    _Bool _shouldMoveCursor;
    NSArray *_topicRangeArray;
    NSArray *_mentionRangeArray;
    unsigned long long _topicTextLength;
    unsigned long long _tagNumber;
    unsigned long long _mentionUserLimitNumber;
    NSMutableArray *_validCharacterArray;
    id <WCFinderFilterTextViewDelegate> _textViewDelegate;
    double _cursorPosition;
    NSArray *_invalidCharacterArray;
    NSMutableAttributedString *_attributeStr;
    NSMutableArray *_mentionContactArray;
    UIColor *_attributeTextColor;
    UIColor *_attributeBgColor;
    NSString *_lastText;
    NSRegularExpression *_mailMatcher;
    WCFinderHighlightedInfoModel *_lastHighlightedModel;
}

+ (id)getMentionedNicknameArrayWithText:(id)arg1;
+ (_Bool)isCharacters:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderHighlightedInfoModel *lastHighlightedModel; // @synthesize lastHighlightedModel=_lastHighlightedModel;
@property(retain, nonatomic) NSRegularExpression *mailMatcher; // @synthesize mailMatcher=_mailMatcher;
@property(retain, nonatomic) NSString *lastText; // @synthesize lastText=_lastText;
@property(retain, nonatomic) UIColor *attributeBgColor; // @synthesize attributeBgColor=_attributeBgColor;
@property(retain, nonatomic) UIColor *attributeTextColor; // @synthesize attributeTextColor=_attributeTextColor;
@property(retain, nonatomic) NSMutableArray *mentionContactArray; // @synthesize mentionContactArray=_mentionContactArray;
@property(retain, nonatomic) NSMutableAttributedString *attributeStr; // @synthesize attributeStr=_attributeStr;
@property(retain, nonatomic) NSArray *invalidCharacterArray; // @synthesize invalidCharacterArray=_invalidCharacterArray;
@property(nonatomic) _Bool shouldMoveCursor; // @synthesize shouldMoveCursor=_shouldMoveCursor;
@property(nonatomic) double cursorPosition; // @synthesize cursorPosition=_cursorPosition;
@property(nonatomic) __weak id <WCFinderFilterTextViewDelegate> textViewDelegate; // @synthesize textViewDelegate=_textViewDelegate;
@property(nonatomic) _Bool disableMentionConatct; // @synthesize disableMentionConatct=_disableMentionConatct;
@property(nonatomic) _Bool shouldHelpMovingCursor; // @synthesize shouldHelpMovingCursor=_shouldHelpMovingCursor;
@property(retain, nonatomic) NSMutableArray *validCharacterArray; // @synthesize validCharacterArray=_validCharacterArray;
@property(nonatomic) _Bool forbidEmoji; // @synthesize forbidEmoji=_forbidEmoji;
@property(nonatomic) _Bool forbidWXEmoji; // @synthesize forbidWXEmoji=_forbidWXEmoji;
@property(nonatomic) unsigned long long mentionUserLimitNumber; // @synthesize mentionUserLimitNumber=_mentionUserLimitNumber;
@property(nonatomic) unsigned long long tagNumber; // @synthesize tagNumber=_tagNumber;
@property(nonatomic) unsigned long long topicTextLength; // @synthesize topicTextLength=_topicTextLength;
@property(retain, nonatomic) NSArray *mentionRangeArray; // @synthesize mentionRangeArray=_mentionRangeArray;
@property(retain, nonatomic) NSArray *topicRangeArray; // @synthesize topicRangeArray=_topicRangeArray;
- (struct _NSRange)getTopicRangeWhereCursorIn;
- (id)reloadMentionContactArray;
- (void)updateMentionContactArray:(id)arg1;
- (id)contactAttrAtTextView:(id)arg1 atIndex:(long long)arg2 effectiveRange:(struct _NSRange *)arg3;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (id)getTopicArray;
- (id)getMentionedNicknameArray;
- (id)genTextToXML;
- (_Bool)textHadEnoughMentionUser;
- (_Bool)textHasEnoughTagRange;
- (void)addWellSymbolToTextView;
- (void)replaceRange:(struct _NSRange)arg1 text:(id)arg2;
- (_Bool)becomeFirstResponder;
- (struct CGPoint)getCurrentCursorPoint;
- (double)getCurrentCursorPointX;
- (double)getCursorRelativePosition;
- (id)getTopicQueryString;
- (_Bool)containInWhiteBlack:(id)arg1;
- (struct _NSRange)firstEmojiRange:(id)arg1;
- (id)attriStrUseTagModelWithStr:(id)arg1;
- (void)updateAttributeBkColor:(id)arg1;
- (void)setAttributeHighlightTextColor:(id)arg1;
- (float)unicodeLengthOfString:(id)arg1;
- (void)updateCursorPosition;
- (void)updateAttitudeContent;
- (id)_getUpdateTopicModel;
- (_Bool)isvalidMentionContactName:(id)arg1;
- (id)getInvalidStringContent;
- (void)triggerUpdateTopicModel;
- (_Bool)isLastCharacterAlphaNumeric:(id)arg1;
- (void)_onTextChange:(id)arg1;
- (void)UITextViewTextDidChangeNotification:(id)arg1;
- (id)initWithOriginHeight:(double)arg1;

@end

