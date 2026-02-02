//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIView, UIButton, WCAdFireworkCheerInfo, WCAdSocialLikeLogic, WCDataItem;
@protocol WCAdFireworkCheerInviteFriendViewDelegate;

@interface WCAdFireworkCheerInviteFriendView
{
    _Bool _contentShowFlag;
    id <WCAdFireworkCheerInviteFriendViewDelegate> _delegate;
    WCDataItem *_dataItem;
    WCAdFireworkCheerInfo *_fireworkCheerInfo;
    unsigned long long _contentItemScene;
    MMUIView *_bgView;
    UIButton *_inviteButton;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool contentShowFlag; // @synthesize contentShowFlag=_contentShowFlag;
@property(retain, nonatomic) UIButton *inviteButton; // @synthesize inviteButton=_inviteButton;
@property(retain, nonatomic) MMUIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) unsigned long long contentItemScene; // @synthesize contentItemScene=_contentItemScene;
@property(retain, nonatomic) WCAdFireworkCheerInfo *fireworkCheerInfo; // @synthesize fireworkCheerInfo=_fireworkCheerInfo;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) __weak id <WCAdFireworkCheerInviteFriendViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFireworkCheerCommentAnimationStarted:(id)arg1 contentItemScene:(unsigned long long)arg2;
@property(readonly, nonatomic) WCAdSocialLikeLogic *socialLikeLogic;
- (void)startShowContentAnimation;
- (void)onInviteButtonClick:(id)arg1;
- (void)showContent;
- (void)initView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 fireworkCheerInfo:(id)arg2 dataItem:(id)arg3 contentItemScene:(unsigned long long)arg4;

@end

