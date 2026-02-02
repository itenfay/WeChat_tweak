//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMFinderLiveConnectMicPkUser, MMLiveIconButton, UILabel, UIView, WCFinderHeadImageView;

@interface MMFinderLiveConnectMicTeamPkCell : UICollectionViewCell
{
    _Bool _disableChangeTeam;
    CDUnknownBlockType _changeTeamBlock;
    UIView *_containerView;
    UILabel *_nickNameLabel;
    UILabel *_teamLabel;
    MMLiveIconButton *_actionButton;
    WCFinderHeadImageView *_avatarImageView;
    MMFinderLiveConnectMicPkUser *_micUser;
}

+ (double)cellWidth;
+ (double)cellHeight;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(nonatomic) _Bool disableChangeTeam; // @synthesize disableChangeTeam=_disableChangeTeam;
@property(retain, nonatomic) MMFinderLiveConnectMicPkUser *micUser; // @synthesize micUser=_micUser;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) MMLiveIconButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *teamLabel; // @synthesize teamLabel=_teamLabel;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) CDUnknownBlockType changeTeamBlock; // @synthesize changeTeamBlock=_changeTeamBlock;
- (void)layoutSubviews;
- (void)onChangeTeam;
- (void)initSubviews;
- (void)updateWithMicUser:(id)arg1 team:(unsigned long long)arg2 disableChangeTeam:(_Bool)arg3 isApply:(_Bool)arg4;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

