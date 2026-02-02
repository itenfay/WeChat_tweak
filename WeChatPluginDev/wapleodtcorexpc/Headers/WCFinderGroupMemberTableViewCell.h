//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMHeadImageView, UILabel;

@interface WCFinderGroupMemberTableViewCell : UITableViewCell
{
    MMHeadImageView *_headImageView;
    UILabel *_groupNickNameLabel;
    UILabel *_videoCountLabel;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UILabel *videoCountLabel; // @synthesize videoCountLabel=_videoCountLabel;
@property(nonatomic) __weak UILabel *groupNickNameLabel; // @synthesize groupNickNameLabel=_groupNickNameLabel;
@property(nonatomic) __weak MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)updateWithAuthorContact:(id)arg1;
- (void)setUpUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

