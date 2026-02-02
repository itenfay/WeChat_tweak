//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class NSString, WCFinderFavPoiItem, WCFinderLBSCardContentView;
@protocol WCFinderPOIFavListTableViewCellDelegate;

@interface WCFinderPOIFavListTableViewCell : UITableViewCell
{
    id <WCFinderPOIFavListTableViewCellDelegate> _delegate;
    WCFinderLBSCardContentView *_lbsCard;
    double _layoutWidth;
    WCFinderFavPoiItem *_favPOIItem;
}

+ (double)heightWithStyle:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFavPoiItem *favPOIItem; // @synthesize favPOIItem=_favPOIItem;
@property(nonatomic) double layoutWidth; // @synthesize layoutWidth=_layoutWidth;
@property(retain, nonatomic) WCFinderLBSCardContentView *lbsCard; // @synthesize lbsCard=_lbsCard;
@property(nonatomic) __weak id <WCFinderPOIFavListTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)lbsCardDidClickCard;
- (void)lbsCardLayoutHeightChanged;
- (void)updateWithFavPOIItem:(id)arg1;
- (void)updateUI;
- (void)setupUI;
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

