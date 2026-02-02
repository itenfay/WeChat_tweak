//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class NSString, TextStateItemView, UILabel, UIView, WCFinderHeadImageView;

@interface TextStateBaseCommentCell : UITableViewCell
{
    _Bool _enableShowFinder;
    WCFinderHeadImageView *_avatarImageView;
    UILabel *_timeLabel;
    UILabel *_nickNameLabel;
    UILabel *_authorLikeLabel;
    long long _section;
    UIView *_bottomView;
    TextStateItemView *_stateView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TextStateItemView *stateView; // @synthesize stateView=_stateView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) long long section; // @synthesize section=_section;
@property(nonatomic) _Bool enableShowFinder; // @synthesize enableShowFinder=_enableShowFinder;
@property(retain, nonatomic) UILabel *authorLikeLabel; // @synthesize authorLikeLabel=_authorLikeLabel;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (id)backgroundColorInNormalMode;
- (void)longPress:(id)arg1;
- (void)onClickLikeComment;
- (void)clickAvatar;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)bottomViewBackgroundColor;
- (void)prepareForReuse;
- (struct CGSize)avatarSize;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

