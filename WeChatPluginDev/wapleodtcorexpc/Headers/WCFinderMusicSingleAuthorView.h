//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, WCFinderHeadImageView;
@protocol WCFinderMusicSingleAuthorViewDelegate;

@interface WCFinderMusicSingleAuthorView : UIView
{
    int _commentScene;
    id <WCFinderMusicSingleAuthorViewDelegate> _delegate;
    WCFinderHeadImageView *_avatarImageView;
    UILabel *_nicknameLabel;
    UIImageView *_iconView;
    UIImageView *_arrowImageView;
    UIView *_topSeparateLine;
    UIView *_bottomSeparateLine;
}

+ (double)heightOfSingleAuthorView;
+ (id)getFriendDataStringByFriendData:(id)arg1;
+ (id)buildFriendDescLabel:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomSeparateLine; // @synthesize bottomSeparateLine=_bottomSeparateLine;
@property(retain, nonatomic) UIView *topSeparateLine; // @synthesize topSeparateLine=_topSeparateLine;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) __weak id <WCFinderMusicSingleAuthorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickTagAuthorView;
- (void)layoutAllSubviewsByIsLastFinderContact:(_Bool)arg1;
- (void)updateAuthorViewWithSignerInfo:(id)arg1 isLastFinderContact:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

