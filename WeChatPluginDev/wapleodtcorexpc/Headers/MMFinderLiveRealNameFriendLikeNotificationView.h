//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveRealNameFriendLikeNotificationMsg, MMLiveGradientLayerView, NSMutableArray, UIImageView, UILabel;

@interface MMFinderLiveRealNameFriendLikeNotificationView : UIView
{
    UIView *_containerView;
    UIView *_avatarContainerView;
    NSMutableArray *_roundHeaderViews;
    UILabel *_contentLabel;
    UIImageView *_likeIconView;
    MMLiveGradientLayerView *_bgGradientView;
    MMFinderLiveRealNameFriendLikeNotificationMsg *_notification;
}

+ (struct CGSize)sizeWithNotification:(id)arg1 maxWidth:(double)arg2;
+ (id)displayContent:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveRealNameFriendLikeNotificationMsg *notification; // @synthesize notification=_notification;
@property(retain, nonatomic) MMLiveGradientLayerView *bgGradientView; // @synthesize bgGradientView=_bgGradientView;
@property(retain, nonatomic) UIImageView *likeIconView; // @synthesize likeIconView=_likeIconView;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) NSMutableArray *roundHeaderViews; // @synthesize roundHeaderViews=_roundHeaderViews;
@property(retain, nonatomic) UIView *avatarContainerView; // @synthesize avatarContainerView=_avatarContainerView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)avatorView:(id)arg1 headerViewSize:(struct CGSize)arg2;
- (void)layoutSubviews;
- (void)updateWithNotification:(id)arg1;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

