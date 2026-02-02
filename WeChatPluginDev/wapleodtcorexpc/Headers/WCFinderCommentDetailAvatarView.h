//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UITapGestureRecognizer, WCFinderCommentDetailAvatarUpdateInfo, WCFinderHeadImageView;

@interface WCFinderCommentDetailAvatarView : UIView
{
    CDUnknownBlockType _didTapAvatarViewAction;
    WCFinderCommentDetailAvatarUpdateInfo *_info;
    WCFinderHeadImageView *_activeAvatar;
    WCFinderHeadImageView *_wechatAvatar;
    WCFinderHeadImageView *_finderAvatar;
    UITapGestureRecognizer *_tapGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) WCFinderHeadImageView *finderAvatar; // @synthesize finderAvatar=_finderAvatar;
@property(retain, nonatomic) WCFinderHeadImageView *wechatAvatar; // @synthesize wechatAvatar=_wechatAvatar;
@property(retain, nonatomic) WCFinderHeadImageView *activeAvatar; // @synthesize activeAvatar=_activeAvatar;
@property(retain, nonatomic) WCFinderCommentDetailAvatarUpdateInfo *info; // @synthesize info=_info;
@property(copy, nonatomic) CDUnknownBlockType didTapAvatarViewAction; // @synthesize didTapAvatarViewAction=_didTapAvatarViewAction;
- (id)__createHeadImageView;
@property(readonly, nonatomic) unsigned long long currentAvatarIdentity;
- (void)__flipViewAnimationWithFromView:(id)arg1 toView:(id)arg2;
- (void)didTapAvatarView:(id)arg1;
- (void)updateWithInfo:(id)arg1;
- (void)layoutSubviews;

@end

