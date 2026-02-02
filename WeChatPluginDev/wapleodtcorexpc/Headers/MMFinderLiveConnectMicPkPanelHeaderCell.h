//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMUIButton, NSString, UILabel;
@protocol MMFinderLiveConnectMicPkPanelCellDelegate;

@interface MMFinderLiveConnectMicPkPanelHeaderCell : UITableViewCell
{
    id <MMFinderLiveConnectMicPkPanelCellDelegate> cellDelegate;
    unsigned long long _buttonType;
    UILabel *_titleLabel;
    NSString *_titleText;
    MMUIButton *_button;
}

+ (double)cellHeight;
+ (id)ReuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) unsigned long long buttonType; // @synthesize buttonType=_buttonType;
@property(nonatomic) __weak id <MMFinderLiveConnectMicPkPanelCellDelegate> cellDelegate; // @synthesize cellDelegate;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateWithTitle:(id)arg1;
- (void)onTapButton;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

