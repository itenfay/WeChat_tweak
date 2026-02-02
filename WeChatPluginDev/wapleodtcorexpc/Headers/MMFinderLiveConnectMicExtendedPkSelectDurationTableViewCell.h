//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMFinderLiveBattleDurationItem, UIImageView, UILabel, UIView;

@interface MMFinderLiveConnectMicExtendedPkSelectDurationTableViewCell : UITableViewCell
{
    MMFinderLiveBattleDurationItem *_selectedDuration;
    UILabel *_titleLabel;
    UILabel *_durationLabel;
    UIImageView *_rightChevronView;
    UIView *_separatorBar;
}

+ (id)reuseId;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separatorBar; // @synthesize separatorBar=_separatorBar;
@property(retain, nonatomic) UIImageView *rightChevronView; // @synthesize rightChevronView=_rightChevronView;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMFinderLiveBattleDurationItem *selectedDuration; // @synthesize selectedDuration=_selectedDuration;
- (void)layoutSubviews;
- (void)updateSeparatorBarHidden:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

