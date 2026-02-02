//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIImageView, UILabel, UIView;

@interface MMFinderLiveConnectMicModePageSheetUsersTableViewCell : UITableViewCell
{
    UILabel *_bulletLabel;
    UILabel *_displayNameLabel;
    UILabel *_subtitleLabel;
    UIImageView *_checkIconView;
    UIView *_separatorBar;
}

+ (id)reuseId;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separatorBar; // @synthesize separatorBar=_separatorBar;
@property(retain, nonatomic) UIImageView *checkIconView; // @synthesize checkIconView=_checkIconView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *displayNameLabel; // @synthesize displayNameLabel=_displayNameLabel;
@property(retain, nonatomic) UILabel *bulletLabel; // @synthesize bulletLabel=_bulletLabel;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) _Bool showBullet;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) NSString *displayName;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

