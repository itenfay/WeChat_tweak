//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel, WCCommentLikeView, WCFinderHeadImageView;

@interface WCCommentDetailCell : UITableViewCell
{
    _Bool _enableShowFinder;
    WCFinderHeadImageView *_avatarImageView;
    UILabel *_timeLabel;
    UILabel *_nickNameLabel;
    UILabel *_authorBadgeLabel;
    UILabel *_authorLikeLabel;
    long long _section;
    WCCommentLikeView *_commentLikeView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCCommentLikeView *commentLikeView; // @synthesize commentLikeView=_commentLikeView;
@property(nonatomic) long long section; // @synthesize section=_section;
@property(nonatomic) _Bool enableShowFinder; // @synthesize enableShowFinder=_enableShowFinder;
@property(retain, nonatomic) UILabel *authorLikeLabel; // @synthesize authorLikeLabel=_authorLikeLabel;
@property(retain, nonatomic) UILabel *authorBadgeLabel; // @synthesize authorBadgeLabel=_authorBadgeLabel;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (id)backgroundColorInNormalMode;
- (void)longPress:(id)arg1;
- (void)onClickLikeComment;
- (void)clickAvatar;
- (void)finderHeadImageViewDidClick:(id)arg1;
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

