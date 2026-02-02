//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMEmoticonView, MMUIButton, NSString, RichTextView, TextStateCardReporter, TextStateFavoriteButton, TextStateFeverTapGestureRecognizer, TextStateModel, TextStatePublishIconButton, TextStatePublishSourceView;
@protocol TextStateBaseCardContentViewDelegate, TextStateCardContentViewFocusDelegate;

@interface TextStateBaseCardContentView : UIView
{
    _Bool _isSelf;
    _Bool _enableFriendSquareRedDot;
    _Bool _disableIconButton;
    _Bool _showGeneralIconButton;
    _Bool _shouldHandleTap;
    _Bool _enableDoubleTapFavorite;
    _Bool _enableFavoriteEffect;
    _Bool _showResendWhenPublishFailed;
    unsigned int _interactionCount;
    unsigned int _notifyCount;
    unsigned int _likeSource;
    id <TextStateBaseCardContentViewDelegate> _delegate;
    id <TextStateCardContentViewFocusDelegate> _focusDelegate;
    TextStateModel *_textState;
    id _userInfo;
    TextStateCardReporter *_reporter;
    RichTextView *_descriptionTextView;
    RichTextView *_mediaDescriptionTextView;
    MMEmoticonView *_emoticonView;
    MMUIButton *_positionButton;
    TextStatePublishIconButton *_iconButton;
    TextStatePublishSourceView *_defaultSourceView;
    TextStatePublishSourceView *_headImageSourceView;
    TextStateFavoriteButton *_favoriteButton;
    TextStateFavoriteButton *_commentButton;
    MMUIButton *_resendButton;
    MMUIButton *_redEnvelopeButton;
    MMUIButton *_moreButton;
    TextStateFeverTapGestureRecognizer *_feverTapGesture;
    struct CGSize _redEnvelopeButtonTargetSize;
}

+ (id)textView;
+ (id)verticalSeparator;
+ (id)imageButtonForSVGImageName:(id)arg1;
+ (double)getRedEnvelopeButtonIconSize;
+ (struct UIEdgeInsets)getRedEnvelopeButtonEdgeInsets;
- (void).cxx_destruct;
@property(nonatomic) struct CGSize redEnvelopeButtonTargetSize; // @synthesize redEnvelopeButtonTargetSize=_redEnvelopeButtonTargetSize;
@property(retain, nonatomic) TextStateFeverTapGestureRecognizer *feverTapGesture; // @synthesize feverTapGesture=_feverTapGesture;
@property(retain, nonatomic) MMUIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) MMUIButton *redEnvelopeButton; // @synthesize redEnvelopeButton=_redEnvelopeButton;
@property(retain, nonatomic) MMUIButton *resendButton; // @synthesize resendButton=_resendButton;
@property(retain, nonatomic) TextStateFavoriteButton *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) TextStateFavoriteButton *favoriteButton; // @synthesize favoriteButton=_favoriteButton;
@property(retain, nonatomic) TextStatePublishSourceView *headImageSourceView; // @synthesize headImageSourceView=_headImageSourceView;
@property(retain, nonatomic) TextStatePublishSourceView *defaultSourceView; // @synthesize defaultSourceView=_defaultSourceView;
@property(retain, nonatomic) TextStatePublishIconButton *iconButton; // @synthesize iconButton=_iconButton;
@property(retain, nonatomic) MMUIButton *positionButton; // @synthesize positionButton=_positionButton;
@property(retain, nonatomic) MMEmoticonView *emoticonView; // @synthesize emoticonView=_emoticonView;
@property(retain, nonatomic) RichTextView *mediaDescriptionTextView; // @synthesize mediaDescriptionTextView=_mediaDescriptionTextView;
@property(retain, nonatomic) RichTextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(nonatomic) _Bool showResendWhenPublishFailed; // @synthesize showResendWhenPublishFailed=_showResendWhenPublishFailed;
@property(nonatomic) _Bool enableFavoriteEffect; // @synthesize enableFavoriteEffect=_enableFavoriteEffect;
@property(nonatomic) _Bool enableDoubleTapFavorite; // @synthesize enableDoubleTapFavorite=_enableDoubleTapFavorite;
@property(nonatomic) _Bool shouldHandleTap; // @synthesize shouldHandleTap=_shouldHandleTap;
@property(retain, nonatomic) TextStateCardReporter *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) unsigned int likeSource; // @synthesize likeSource=_likeSource;
@property(nonatomic) _Bool showGeneralIconButton; // @synthesize showGeneralIconButton=_showGeneralIconButton;
@property(nonatomic) _Bool disableIconButton; // @synthesize disableIconButton=_disableIconButton;
@property(nonatomic) _Bool enableFriendSquareRedDot; // @synthesize enableFriendSquareRedDot=_enableFriendSquareRedDot;
@property(nonatomic) unsigned int notifyCount; // @synthesize notifyCount=_notifyCount;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) TextStateModel *textState; // @synthesize textState=_textState;
@property(nonatomic) __weak id <TextStateCardContentViewFocusDelegate> focusDelegate; // @synthesize focusDelegate=_focusDelegate;
@property(nonatomic) __weak id <TextStateBaseCardContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isSelf; // @synthesize isSelf=_isSelf;
- (void)onReceiveInteractionCount:(unsigned int)arg1 withTextStateId:(id)arg2;
- (void)onTextStateFriendTopicConstruct;
- (void)onTextStateRedDotDisposed:(unsigned int)arg1;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onAnimationEnd:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)onTapResendButton;
- (void)onTapMoreButton;
- (void)onTapBackground;
- (void)onTapIconButton;
- (void)onTapHeadImageSourceView;
- (void)onTapDefaultSourceView;
- (void)onTapCommentButton;
- (void)onTapFavoriteButton;
- (void)onTriggerFeverTap;
- (void)showFavoriteEffectAtPoint:(struct CGPoint)arg1 randomRotate:(_Bool)arg2;
- (double)emoticonSideLength;
- (void)shouldUpdateLayout;
- (void)onContentUpdate;
- (void)initSubviews;
- (void)updateIconButton;
- (void)updateFavoriteState;
- (void)updateHeadImageSourceView;
- (void)updateDefaultSourceView;
- (_Bool)shouldHideDefaultSourceView;
- (void)updateEmoticonView;
- (void)updateTextView:(id)arg1 suffix:(id)arg2;
- (void)updateTextView:(id)arg1;
- (void)updateDescriptionTextView;
- (void)updateMediaDescriptionTextView;
- (void)updatePositionButton;
- (id)getPositionButtonTitle;
- (_Bool)enablePositionButtonClick;
- (_Bool)shouldStartDoubleTapFavorite;
- (_Bool)handleTapView:(id)arg1 point:(struct CGPoint)arg2;
- (void)updateFeverGesture;
- (void)handlePositionButtonClick;
@property(nonatomic) unsigned int interactionCount; // @synthesize interactionCount=_interactionCount;
- (_Bool)isShowingFriendSquareRedDot;
- (void)updateFriendSquareRedDot;
- (void)updateFriendSquareRedDotExtension;
- (void)unregisterExtensions;
- (void)registerExtensions;
- (void)initReporter;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)calculateRedEnvelopeButtonTargetSize:(struct CGSize)arg1;
- (void)onTapRedEnvelopeButton;
- (_Bool)shouldShowRedEnvelopeButton;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

