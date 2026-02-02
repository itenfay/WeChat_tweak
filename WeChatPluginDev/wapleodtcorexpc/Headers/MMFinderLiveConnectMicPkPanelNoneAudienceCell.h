//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel;
@protocol MMFinderLiveConnectMicPkPanelCellDelegate;

@interface MMFinderLiveConnectMicPkPanelNoneAudienceCell : UITableViewCell
{
    id <MMFinderLiveConnectMicPkPanelCellDelegate> cellDelegate;
    UILabel *_titleLabel;
}

+ (id)ReuseIdentifier;
+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <MMFinderLiveConnectMicPkPanelCellDelegate> cellDelegate; // @synthesize cellDelegate;
- (void)prepareForReuse;
- (void)updateWithTitle:(id)arg1;
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

