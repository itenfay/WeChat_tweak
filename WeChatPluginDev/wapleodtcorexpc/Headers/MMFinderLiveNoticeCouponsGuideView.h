//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UITableView;

@interface MMFinderLiveNoticeCouponsGuideView : UIView
{
    NSArray *_coupons;
    NSArray *_notices;
    NSString *_anchor;
    UITableView *_couponsTable;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITableView *couponsTable; // @synthesize couponsTable=_couponsTable;
@property(copy, nonatomic) NSString *anchor; // @synthesize anchor=_anchor;
@property(retain, nonatomic) NSArray *notices; // @synthesize notices=_notices;
@property(retain, nonatomic) NSArray *coupons; // @synthesize coupons=_coupons;
- (struct UIEdgeInsets)couponCellsPadding;
- (void)onActionButtonClicked:(id)arg1 view:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)initWithNotices:(id)arg1 anchor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

