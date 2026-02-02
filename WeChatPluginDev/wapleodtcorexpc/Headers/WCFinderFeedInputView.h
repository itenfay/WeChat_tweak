//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class EmoticonBoardView, MMGrowTextView, MMHeadImageView, NSString, UIButton, UIImageView, UITapGestureRecognizer, WCFinderCommentIdentityActionSheetView, WCFinderFeedInputViewModel, WCInputController;
@protocol WCFinderFeedInputCommentPostDelegate, WCFinderFeedInputViewDelegate;

@interface WCFinderFeedInputView : UIView
{
    _Bool _hasMask;
    NSString *_nickname;
    id <WCFinderFeedInputViewDelegate> _delegate;
    id <WCFinderFeedInputCommentPostDelegate> _postDelegate;
    UIView *_inputView;
    WCInputController *_inputController;
    EmoticonBoardView *_emoticonBoardView;
    MMGrowTextView *_growTextView;
    UIButton *_expressionButton;
    UIButton *_backGroundButton;
    double _scrollViewContentOffset;
    WCFinderFeedInputViewModel *_viewModel;
    CDUnknownBlockType _dismissBlock;
    UIView *_textViewBackGroundView;
    unsigned long long _commentTextMaxLimit;
    unsigned long long _commentInputMaxLineWrap;
    UIImageView *_identitySwitchView;
    MMHeadImageView *_avatarImageView;
    UITapGestureRecognizer *_identitySwitchRecognizer;
    WCFinderCommentIdentityActionSheetView *_identityActionSheet;
}

+ (void)showForDataItemTid:(id)arg1 nonceID:(id)arg2 identitySwitchType:(unsigned long long)arg3 postCommentScene:(int)arg4 scrollView:(id)arg5 positioningView:(id)arg6;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderCommentIdentityActionSheetView *identityActionSheet; // @synthesize identityActionSheet=_identityActionSheet;
@property(retain, nonatomic) UITapGestureRecognizer *identitySwitchRecognizer; // @synthesize identitySwitchRecognizer=_identitySwitchRecognizer;
@property(retain, nonatomic) MMHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIImageView *identitySwitchView; // @synthesize identitySwitchView=_identitySwitchView;
@property(nonatomic) unsigned long long commentInputMaxLineWrap; // @synthesize commentInputMaxLineWrap=_commentInputMaxLineWrap;
@property(nonatomic) unsigned long long commentTextMaxLimit; // @synthesize commentTextMaxLimit=_commentTextMaxLimit;
@property(nonatomic) __weak UIView *textViewBackGroundView; // @synthesize textViewBackGroundView=_textViewBackGroundView;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(retain, nonatomic) WCFinderFeedInputViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) double scrollViewContentOffset; // @synthesize scrollViewContentOffset=_scrollViewContentOffset;
@property(retain, nonatomic) UIButton *backGroundButton; // @synthesize backGroundButton=_backGroundButton;
@property(retain, nonatomic) UIButton *expressionButton; // @synthesize expressionButton=_expressionButton;
@property(retain, nonatomic) MMGrowTextView *growTextView; // @synthesize growTextView=_growTextView;
@property(retain, nonatomic) EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(retain, nonatomic) WCInputController *inputController; // @synthesize inputController=_inputController;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
@property(nonatomic) _Bool hasMask; // @synthesize hasMask=_hasMask;
@property(nonatomic) __weak id <WCFinderFeedInputCommentPostDelegate> postDelegate; // @synthesize postDelegate=_postDelegate;
@property(nonatomic) __weak id <WCFinderFeedInputViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
- (void)updateGrowTextViewPlaceholder;
- (void)updateIdentityAvatar;
- (void)updateCommentIdentity;
- (void)updateCommentIdentityView;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onSwitchIdentity;
- (double)getVisibleHeight;
- (id)currentReplyComment;
- (void)clearInputContent;
- (void)exitInputWithHasComment:(_Bool)arg1;
- (void)exitInput;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)handleExcessiveWrap;
- (void)textViewTextDidChange;
- (void)keyboardDidHide;
- (void)keyboardHiding;
- (void)keyboardShowing;
- (void)didCommitText:(id)arg1;
- (unsigned long long)generateDisplayIdentifyType:(unsigned long long)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)layoutViewWithStyle;
- (id)createIndetitySwitchView;
- (void)updateSwitchIndentity;
- (void)createEmojiKeyboardView;
- (void)addGrowTextView;
- (void)initEmoticonView;
- (void)setupInputView;
- (void)setUpTextView;
- (void)showInScrollView:(id)arg1 offsetY:(double)arg2 dismissBlock:(CDUnknownBlockType)arg3;
- (void)showReplyComment:(id)arg1 inScrollView:(id)arg2 offsetY:(double)arg3 dismissBlock:(CDUnknownBlockType)arg4;
- (void)updateFeedTID:(id)arg1 nonceID:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 dataItemTid:(id)arg2 nonceID:(id)arg3 currentFinderContact:(id)arg4 identitySwitchType:(unsigned long long)arg5 postCommentScene:(int)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

