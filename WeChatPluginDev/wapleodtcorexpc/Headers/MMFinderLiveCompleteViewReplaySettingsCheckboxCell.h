//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIImageView, UILabel, UIView;

@interface MMFinderLiveCompleteViewReplaySettingsCheckboxCell : UITableViewCell
{
    UIImageView *_checkboxIconView;
    UILabel *_titleLabel;
    UIView *_separatorBar;
}

+ (id)reuseId;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separatorBar; // @synthesize separatorBar=_separatorBar;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *checkboxIconView; // @synthesize checkboxIconView=_checkboxIconView;
- (void)layoutSubviews;
- (void)setSeparatorInset:(struct UIEdgeInsets)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) NSString *title;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

