//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, NSString, WCAdContinuousLikeTagInfo, WCAdSocialLikeLogic, WCAdURLImageView, WCDataItem;
@protocol WCAdContinuousLikeTagViewDelegate;

@interface WCAdContinuousLikeTagView
{
    id <WCAdContinuousLikeTagViewDelegate> _delegate;
    WCDataItem *_dataItem;
    WCAdContinuousLikeTagInfo *_tagInfo;
    unsigned long long _contentItemScene;
    MMUILabel *_likeNumberTitle;
    MMUILabel *_continuousLikeTitle;
    MMUILabel *_continuousLikeNumber;
    MMUIButton *_jumpLinkButton;
    WCAdURLImageView *_jumpLinkIcon;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdURLImageView *jumpLinkIcon; // @synthesize jumpLinkIcon=_jumpLinkIcon;
@property(retain, nonatomic) MMUIButton *jumpLinkButton; // @synthesize jumpLinkButton=_jumpLinkButton;
@property(retain, nonatomic) MMUILabel *continuousLikeNumber; // @synthesize continuousLikeNumber=_continuousLikeNumber;
@property(retain, nonatomic) MMUILabel *continuousLikeTitle; // @synthesize continuousLikeTitle=_continuousLikeTitle;
@property(retain, nonatomic) MMUILabel *likeNumberTitle; // @synthesize likeNumberTitle=_likeNumberTitle;
@property(nonatomic) unsigned long long contentItemScene; // @synthesize contentItemScene=_contentItemScene;
@property(retain, nonatomic) WCAdContinuousLikeTagInfo *tagInfo; // @synthesize tagInfo=_tagInfo;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) __weak id <WCAdContinuousLikeTagViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onContinuousLikeCountChanged:(id)arg1 contentItemScene:(unsigned long long)arg2 likeCount:(int)arg3;
- (void)onContinuousLikeStateChanged:(id)arg1 contentItemScene:(unsigned long long)arg2 likeState:(int)arg3;
- (void)resetJumpLinkButtonState;
- (void)onJumpLinkButtonTouchUp:(id)arg1;
- (void)onJumpLinkButtonTouchDown:(id)arg1;
- (void)onJumpLinkButtonClick:(id)arg1;
@property(readonly, nonatomic) WCAdSocialLikeLogic *socialLikeLogic;
- (void)playContinuousLikeNumberAnimation;
- (void)updateContinuousLikeNumber:(int)arg1;
- (void)updateDataItem:(id)arg1;
- (void)initContinuousLikingView;
- (void)initLikedView;
- (void)initNotLikeView;
- (void)cleanSubViews;
- (void)initView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 tagInfo:(id)arg2 dataItem:(id)arg3 contentItemScene:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

