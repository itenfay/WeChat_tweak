//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIView, WCFinderPoiGroupBuyView;
@protocol WCFinderPoiGroupBuyTableViewCellDelegate;

@interface WCFinderPoiGroupBuyTableViewCell : UITableViewCell
{
    id <WCFinderPoiGroupBuyTableViewCellDelegate> _delegate;
    WCFinderPoiGroupBuyView *_groupBuyView;
    UIView *_seperateLine;
}

+ (double)heightForGroupBuyCoupon:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *seperateLine; // @synthesize seperateLine=_seperateLine;
@property(retain, nonatomic) WCFinderPoiGroupBuyView *groupBuyView; // @synthesize groupBuyView=_groupBuyView;
@property(nonatomic) __weak id <WCFinderPoiGroupBuyTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)groupBuyViewActionButtonDidClick:(id)arg1;
- (void)updateLayout:(_Bool)arg1;
- (void)updateWithGroupBuyCoupon:(id)arg1 isLastCell:(_Bool)arg2;
- (void)prepareForReuse;
- (void)initSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

