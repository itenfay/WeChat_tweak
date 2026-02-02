//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonBoardView, NSString, UIToolbar;
@protocol EditImageEmotionToolAttrDelegate;

@interface EditImageEmotionToolAttrView
{
    _Bool _animatable;
    _Bool _isEmoticonSearchEnabled;
    EmoticonBoardView *_emoticonBoardView;
    UIToolbar *_toolBar;
    id <EditImageEmotionToolAttrDelegate> _delegate;
    unsigned long long _emoticonBoardViewStyle;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long emoticonBoardViewStyle; // @synthesize emoticonBoardViewStyle=_emoticonBoardViewStyle;
@property(nonatomic) _Bool isEmoticonSearchEnabled; // @synthesize isEmoticonSearchEnabled=_isEmoticonSearchEnabled;
@property(nonatomic) _Bool animatable; // @synthesize animatable=_animatable;
@property(nonatomic) __weak id <EditImageEmotionToolAttrDelegate> _delegate; // @synthesize _delegate;
@property(retain, nonatomic) UIToolbar *_toolBar; // @synthesize _toolBar;
@property(retain, nonatomic) EmoticonBoardView *_emoticonBoardView; // @synthesize _emoticonBoardView;
- (void)onSearchEmoticonViewControllerDidClose;
- (void)onSearchEmoticonViewControllerSendEmoticon:(id)arg1;
- (void)onSendButtonClicked;
- (void)onEmoticonSearchIconClicked;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (void)didSelectorEmoticon:(id)arg1;
- (void)_onSelectedEmoticonWithWrap:(id)arg1;
- (void)onDoneBtnClicked;
- (void)updateForEmoticonSearch:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateEmoticonView;
- (void)initEmoticonView;
- (void)initToolBar;
- (id)initWithFrame:(struct CGRect)arg1 emoticonBoardViewStyle:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

