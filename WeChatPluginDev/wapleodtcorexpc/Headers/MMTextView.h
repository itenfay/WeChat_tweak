//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMInputAccessoryView, MMTextPlaceholderView, NSArray, NSAttributedString, NSMutableSet, NSString, UIColor, UIFont, UIImage, UIResponder;
@protocol textViewDelegate;

@interface MMTextView
{
    NSString *placeholder;
    _Bool _shouldDrawPlaceholder;
    id <textViewDelegate> m_delegate;
    double _fForceY;
    UIResponder *_overrideNextResponder;
    _Bool _externalKeyboardAttatched;
    MMInputAccessoryView *_accessoryView;
    _Bool _hasShowMenu;
    _Bool _firstBecomeResponder;
    long long _emojiSeq;
    UIColor *m_textColor;
    _Bool m_insertNumberLastTime;
    _Bool _placeholderPinText;
    _Bool _placeholderMultiLine;
    _Bool _hideCursor;
    _Bool _bShowChangeLineMenu;
    _Bool _enableSetContentOffsetOnlyByMyself;
    _Bool _bCenterAndAutoHidePlaceHolder;
    _Bool _bShowEmoticon;
    _Bool _usesRedesignLineSpacing;
    _Bool _bDisabledChangeHeightWhenTextChange;
    _Bool _enableListNumberCheck;
    _Bool _forbidMenuItemShow;
    _Bool _needHidePlaceHolder;
    _Bool _dictationProtecting;
    _Bool _fixAccessibilitySelectedRangeFlag;
    int _inputScene;
    int _chatScene;
    unsigned int _menuType;
    UIColor *_placeHolderColor;
    UIImage *_placeholderImage;
    NSAttributedString *_attributedPlaceholder;
    double _textViewOriginHeight;
    NSString *_chatUserName;
    NSMutableSet *_allMenuTypes;
    NSArray *_arrExtMenuItem;
    unsigned long long _textMenuReportType;
    UIFont *_placeholderFont;
    double _placeHolderHeight;
    MMTextPlaceholderView *_placeholderTransitionFromView;
    MMTextPlaceholderView *_placeholderTransitionToView;
    struct UIEdgeInsets _touchInsets;
    struct UIEdgeInsets _fixedContentInset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTextPlaceholderView *placeholderTransitionToView; // @synthesize placeholderTransitionToView=_placeholderTransitionToView;
@property(retain, nonatomic) MMTextPlaceholderView *placeholderTransitionFromView; // @synthesize placeholderTransitionFromView=_placeholderTransitionFromView;
@property(nonatomic) _Bool fixAccessibilitySelectedRangeFlag; // @synthesize fixAccessibilitySelectedRangeFlag=_fixAccessibilitySelectedRangeFlag;
@property(nonatomic) _Bool dictationProtecting; // @synthesize dictationProtecting=_dictationProtecting;
@property(nonatomic) _Bool needHidePlaceHolder; // @synthesize needHidePlaceHolder=_needHidePlaceHolder;
@property(nonatomic) double placeHolderHeight; // @synthesize placeHolderHeight=_placeHolderHeight;
@property(nonatomic) _Bool forbidMenuItemShow; // @synthesize forbidMenuItemShow=_forbidMenuItemShow;
@property(nonatomic) struct UIEdgeInsets fixedContentInset; // @synthesize fixedContentInset=_fixedContentInset;
@property(retain, nonatomic) UIFont *placeholderFont; // @synthesize placeholderFont=_placeholderFont;
@property(nonatomic) _Bool enableListNumberCheck; // @synthesize enableListNumberCheck=_enableListNumberCheck;
@property(nonatomic) _Bool bDisabledChangeHeightWhenTextChange; // @synthesize bDisabledChangeHeightWhenTextChange=_bDisabledChangeHeightWhenTextChange;
@property(nonatomic) unsigned long long textMenuReportType; // @synthesize textMenuReportType=_textMenuReportType;
@property(nonatomic) _Bool usesRedesignLineSpacing; // @synthesize usesRedesignLineSpacing=_usesRedesignLineSpacing;
@property(nonatomic) struct UIEdgeInsets touchInsets; // @synthesize touchInsets=_touchInsets;
@property(nonatomic) _Bool bShowEmoticon; // @synthesize bShowEmoticon=_bShowEmoticon;
@property(nonatomic) _Bool bCenterAndAutoHidePlaceHolder; // @synthesize bCenterAndAutoHidePlaceHolder=_bCenterAndAutoHidePlaceHolder;
@property(retain, nonatomic) NSArray *arrExtMenuItem; // @synthesize arrExtMenuItem=_arrExtMenuItem;
@property(retain, nonatomic) NSMutableSet *allMenuTypes; // @synthesize allMenuTypes=_allMenuTypes;
@property(nonatomic) _Bool enableSetContentOffsetOnlyByMyself; // @synthesize enableSetContentOffsetOnlyByMyself=_enableSetContentOffsetOnlyByMyself;
@property(nonatomic) unsigned int menuType; // @synthesize menuType=_menuType;
@property(nonatomic) _Bool bShowChangeLineMenu; // @synthesize bShowChangeLineMenu=_bShowChangeLineMenu;
@property(retain, nonatomic) NSString *chatUserName; // @synthesize chatUserName=_chatUserName;
@property(nonatomic) int chatScene; // @synthesize chatScene=_chatScene;
@property(nonatomic) int inputScene; // @synthesize inputScene=_inputScene;
@property(nonatomic) _Bool hideCursor; // @synthesize hideCursor=_hideCursor;
@property(nonatomic) double textViewOriginHeight; // @synthesize textViewOriginHeight=_textViewOriginHeight;
@property(retain, nonatomic) NSAttributedString *attributedPlaceholder; // @synthesize attributedPlaceholder=_attributedPlaceholder;
@property(nonatomic) _Bool placeholderMultiLine; // @synthesize placeholderMultiLine=_placeholderMultiLine;
@property(nonatomic) _Bool placeholderPinText; // @synthesize placeholderPinText=_placeholderPinText;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) UIColor *placeHolderColor; // @synthesize placeHolderColor=_placeHolderColor;
@property(nonatomic) __weak UIResponder *overrideNextResponder; // @synthesize overrideNextResponder=_overrideNextResponder;
@property(nonatomic) double fForceY; // @synthesize fForceY=_fForceY;
@property(nonatomic) __weak id <textViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder;
- (void)fixAccessibilitySelectedRange;
- (void)tryFixAccessibilitySelectedRange;
- (_Bool)accessibilityActivate;
- (void)_setPlaceholder:(id)arg1 attributedPlaceholder:(id)arg2;
- (void)_drawPlaceholder:(id)arg1 attributedPlaceholder:(id)arg2;
- (id)_createdPlaceholderTransitionView;
- (void)_animatePlaceholder:(id)arg1 attributedPlaceholder:(id)arg2;
- (void)_placeholderDidSet:(id)arg1 attributedPlaceholder:(id)arg2 animated:(_Bool)arg3;
- (void)setAttributedPlaceholder:(id)arg1 animated:(_Bool)arg2;
- (void)setPlaceholder:(id)arg1 animated:(_Bool)arg2;
- (_Bool)isLine:(id)arg1 onlyContainListNumber:(id)arg2;
- (id)getInsertTextWithListNumberCheck:(id)arg1;
- (void)insertText:(id)arg1;
- (void)setSelectedRange:(struct _NSRange)arg1;
- (void)tryAppend:(id)arg1 targetMenuType:(unsigned long long)arg2 targetString:(id)arg3;
- (void)reportMenuAppear;
- (void)reportMenuClick;
- (id)keyCommands;
- (void)onSend:(id)arg1;
- (void)onWrap;
- (void)onAccessoryViewFrameChanged:(struct CGRect)arg1;
- (id)textPasteConfigurationSupporting:(id)arg1 performPasteOfAttributedString:(id)arg2 toRange:(id)arg3;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onWillPastedText:(id)arg1;
- (void)fixNotifyKeyboard;
- (void)changeLine;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (void)captureTextFromCamera:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)select:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)paste:(id)arg1;
- (id)defaultTextAttributes;
- (void)setTextColor:(id)arg1;
- (id)generateWXEmojitionEncodeStringWithTag:(id)arg1 image:(id)arg2;
- (void)encodeEmojitionWithAttributeString:(id)arg1;
- (id)generateEncodeEmojitionStringWithContent:(id)arg1;
- (id)getPlainTextWithRange:(struct _NSRange)arg1;
- (struct _NSRange)getPlainTextSelectRange;
- (void)cutAttributeTextWithLimitLength:(unsigned int)arg1;
- (void)cutTextWithLimitLength:(unsigned int)arg1;
- (id)accessibilityValue;
- (id)text;
- (void)postTextChangeNotification;
- (void)onMenuDidShow:(id)arg1;
- (void)onMenuWillHide:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (unsigned long long)getMenuTypeWithAction:(SEL)arg1;
- (id)nextResponder;
- (_Bool)isExtenalKeyboardAttatched;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)updateMenuTypes:(SEL)arg1;
- (void)updateCurrentMenuTypes;
- (void)updateCurrentMenuItems;
- (void)setReturnKeyType:(long long)arg1;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (void)dictationRecordingDidEnd;
- (void)_textChanged:(id)arg1;
- (_Bool)shouldShowPlaceholder;
- (void)_updateShouldDrawPlaceholder;
- (void)_drawAttributePlaceholder:(id)arg1;
- (void)_drawPlaceholder:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFont:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)onTap:(id)arg1;
- (void)fixTextViewGestureRecognizer;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)fallbackToTextKit1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setSize:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setContentSize:(struct CGSize)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

