//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;
@protocol MMMusicLiveCommentUnreadMentionViewDelegate;

@interface MMMusicLiveCommentUnreadMentionView : UIView
{
    id <MMMusicLiveCommentUnreadMentionViewDelegate> _delegate;
    long long _unreadCount;
    UIButton *_notifyButton;
    UILabel *_unreadLabel;
    UIImageView *_arrowIcon;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowIcon; // @synthesize arrowIcon=_arrowIcon;
@property(retain, nonatomic) UILabel *unreadLabel; // @synthesize unreadLabel=_unreadLabel;
@property(retain, nonatomic) UIButton *notifyButton; // @synthesize notifyButton=_notifyButton;
@property(nonatomic) long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(nonatomic) __weak id <MMMusicLiveCommentUnreadMentionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTapUnreadMention;
- (void)setupUnreadCount:(long long)arg1;
- (void)layoutSubviews;
- (id)init;

@end

