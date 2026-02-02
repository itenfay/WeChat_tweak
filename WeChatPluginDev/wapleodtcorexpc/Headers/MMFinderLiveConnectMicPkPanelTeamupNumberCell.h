//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel, UIView;
@protocol MMFinderLiveConnectMicPkPanelCellDelegate;

@interface MMFinderLiveConnectMicPkPanelTeamupNumberCell : UITableViewCell
{
    id <MMFinderLiveConnectMicPkPanelCellDelegate> cellDelegate;
    UIView *_bottomSeparatorLine;
    UILabel *_titleLabel;
}

+ (double)cellHeight;
+ (id)ReuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *bottomSeparatorLine; // @synthesize bottomSeparatorLine=_bottomSeparatorLine;
@property(nonatomic) __weak id <MMFinderLiveConnectMicPkPanelCellDelegate> cellDelegate; // @synthesize cellDelegate;
- (void)updateTeamNumber:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

