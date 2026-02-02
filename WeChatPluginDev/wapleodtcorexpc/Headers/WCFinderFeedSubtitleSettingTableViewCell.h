//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UIFont, UIImageView, UILabel, UIView;

@interface WCFinderFeedSubtitleSettingTableViewCell : UITableViewCell
{
    _Bool _disableCheckMark;
    UILabel *_titleLabel;
    UIImageView *_checkImageView;
    UIView *_separatorLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UIImageView *checkImageView; // @synthesize checkImageView=_checkImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool disableCheckMark; // @synthesize disableCheckMark=_disableCheckMark;
@property(nonatomic) _Bool hiddenSeparator;
@property(retain, nonatomic) UIFont *titleFont;
- (void)updateLayout;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateWithText:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

