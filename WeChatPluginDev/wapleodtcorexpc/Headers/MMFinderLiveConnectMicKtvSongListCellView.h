//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface MMFinderLiveConnectMicKtvSongListCellView : UITableViewCell
{
    UILabel *_titleLabel;
    UIImageView *_titleIcon;
    UILabel *_subtitleLabel;
    UIImageView *_rightArrowIcon;
}

+ (id)ReuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *rightArrowIcon; // @synthesize rightArrowIcon=_rightArrowIcon;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UIImageView *titleIcon; // @synthesize titleIcon=_titleIcon;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)updateWithSubtitle:(id)arg1;
- (void)layoutUI;
- (void)configRightArrowIcon;
- (void)configTitleIcon;
- (void)configSubtitleLabel;
- (void)configTitleLabel;
- (void)configUI;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

