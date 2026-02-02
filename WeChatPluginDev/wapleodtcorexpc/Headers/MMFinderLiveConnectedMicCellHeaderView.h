//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMFinderLiveConnectedMicCellHeaderViewAction, MMUIButton, NSString, UILabel, UIView;

@interface MMFinderLiveConnectedMicCellHeaderView : UITableViewCell
{
    UILabel *_titleLabel;
    NSString *_titleText;
    MMFinderLiveConnectedMicCellHeaderViewAction *_action;
    MMUIButton *_actionButton;
    UIView *_bottomSeparatorLine;
}

+ (id)ReuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomSeparatorLine; // @synthesize bottomSeparatorLine=_bottomSeparatorLine;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMFinderLiveConnectedMicCellHeaderViewAction *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)layoutSearchButton;
- (void)onTapSearchButton;
- (void)configSearchButton;
- (void)updateWithTitle:(id)arg1;
- (void)layoutUI;
- (void)configTitleLabel;
- (void)layoutSubviews;
- (void)prepareForReuse;
@property(nonatomic) _Bool showSeparatorBar;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

