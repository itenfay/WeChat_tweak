//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveShopShelfSubPageHeaderView, MMFinderLiveTaskId, MMTableView, NSArray, NSString;
@protocol MMFinderLiveShopShelfCouponsTableContainerDelegate;

@interface MMFinderLiveShopShelfCouponsTableContainerView : UIView
{
    id <MMFinderLiveShopShelfCouponsTableContainerDelegate> _delegate;
    NSArray *_couponViewModelGroups;
    MMFinderLiveTaskId *_taskID;
    MMTableView *_tableView;
    MMFinderLiveShopShelfSubPageHeaderView *_headerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveShopShelfSubPageHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskID; // @synthesize taskID=_taskID;
@property(retain, nonatomic) NSArray *couponViewModelGroups; // @synthesize couponViewModelGroups=_couponViewModelGroups;
@property(nonatomic) __weak id <MMFinderLiveShopShelfCouponsTableContainerDelegate> delegate; // @synthesize delegate=_delegate;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)headerMarginsWithSection:(unsigned long long)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadData;
@property(readonly, nonatomic) long long cellStyle;
- (struct UIEdgeInsets)couponCellsPadding;
- (void)layoutSubviews;
- (id)initWithTaskID:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

