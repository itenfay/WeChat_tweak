//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, UIImageView, UILabel, WCFinderAuthInfoIconView, WCFinderHeadImageView;
@protocol WCFinderMusicAuthorViewDelegate;

@interface WCFinderMusicAuthorView : UIView
{
    id <WCFinderMusicAuthorViewDelegate> _delegate;
    WCFinderHeadImageView *_avatarImageView;
    UILabel *_nicknameLabel;
    WCFinderAuthInfoIconView *_authIconView;
    UILabel *_friendViewInfoLabel;
    UIImageView *_arrowImageView;
    MMUIButton *_followBtn;
    UIView *_topSeparateLine;
    UIView *_bottomSeparateLine;
}

+ (double)heightOfAuthorView:(id)arg1;
+ (id)getFriendDataStringByFriendData:(id)arg1;
+ (id)buildFriendDescLabel:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomSeparateLine; // @synthesize bottomSeparateLine=_bottomSeparateLine;
@property(retain, nonatomic) UIView *topSeparateLine; // @synthesize topSeparateLine=_topSeparateLine;
@property(retain, nonatomic) MMUIButton *followBtn; // @synthesize followBtn=_followBtn;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *friendViewInfoLabel; // @synthesize friendViewInfoLabel=_friendViewInfoLabel;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) __weak id <WCFinderMusicAuthorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickTagAuthorView;
- (void)onClickOutterFollowBtn;
- (void)layoutAllSubviews;
- (void)updateAuthorViewWithTopicInfo:(id)arg1;
- (void)updateFollowBtnState:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

