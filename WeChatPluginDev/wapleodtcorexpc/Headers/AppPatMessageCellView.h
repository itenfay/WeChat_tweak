//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AppPatMessageViewModel, NSArray, NSMutableDictionary, NSString, UIButton, UIView;

@interface AppPatMessageCellView
{
    UIButton *_expandButton;
    NSArray *_patBackgroundViews;
    UIView *_currentPatBackgroundView;
    NSMutableDictionary *_contentIdToBackgroundView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *contentIdToBackgroundView; // @synthesize contentIdToBackgroundView=_contentIdToBackgroundView;
@property(retain, nonatomic) UIView *currentPatBackgroundView; // @synthesize currentPatBackgroundView=_currentPatBackgroundView;
@property(retain, nonatomic) NSArray *patBackgroundViews; // @synthesize patBackgroundViews=_patBackgroundViews;
@property(retain, nonatomic) UIButton *expandButton; // @synthesize expandButton=_expandButton;
- (void)onChatBackgroundChanged:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)restoreCurrentPatBackgroundViewIfNeeded;
- (void)setView:(id)arg1 useLightStyle:(_Bool)arg2 isHighlight:(_Bool)arg3;
- (void)setView:(id)arg1 useLightStyle:(_Bool)arg2;
- (id)createExpandButtonUseLightStyle:(_Bool)arg1;
- (id)createRichTextViewUseLightStyle:(_Bool)arg1;
- (id)reusableViewWithContentId:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)reportTapExpandButton;
- (void)onTapExpandButton;
- (struct CGRect)frameForPatWithContentId:(id)arg1 emojiName:(id)arg2 range:(struct _NSRange)arg3;
- (void)playEmojiAnimationForPatWrap:(id)arg1 withTimeOffset:(double)arg2;
- (void)setSubPatMessageReadFromTop:(double)arg1 andBottom:(double)arg2;
- (void)layoutContentView;
- (void)prepareForReuse;
- (void)onTouchCancel;
- (_Bool)canCellShowOperationMenu;
- (void)onLongTouch:(struct CGPoint)arg1;
- (_Bool)isAccessibilityElement;
- (_Bool)accessibilityPerformMagicTap;
- (id)accessibilityLabel;
- (_Bool)canBeReused;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) AppPatMessageViewModel *viewModel;

@end

