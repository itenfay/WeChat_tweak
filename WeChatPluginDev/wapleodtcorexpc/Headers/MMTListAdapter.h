//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMListReportManager, MMTListSectionMap, MMUIViewController, NSMutableSet, NSString, UITableView;
@protocol MMTListAdapterDataSource, MMTListAdapterDelegate, UIScrollViewDelegate, UITableViewDelegate;

@interface MMTListAdapter : NSObject
{
    _Bool _isInObjectUpdateTransaction;
    id <MMTListAdapterDataSource> _dataSource;
    id <MMTListAdapterDelegate> _delegate;
    UITableView *_tableView;
    MMListReportManager *_reportHandler;
    id <UITableViewDelegate> _tableViewDelegate;
    id <UIScrollViewDelegate> _scrollViewDelegate;
    MMUIViewController *_viewController;
    MMTListSectionMap *_sectionMap;
    NSMutableSet *_registeredCellIdentifiers;
    NSMutableSet *_registeredSupplementaryViewIdentifiers;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInObjectUpdateTransaction; // @synthesize isInObjectUpdateTransaction=_isInObjectUpdateTransaction;
@property(retain, nonatomic) NSMutableSet *registeredSupplementaryViewIdentifiers; // @synthesize registeredSupplementaryViewIdentifiers=_registeredSupplementaryViewIdentifiers;
@property(retain, nonatomic) NSMutableSet *registeredCellIdentifiers; // @synthesize registeredCellIdentifiers=_registeredCellIdentifiers;
@property(readonly, nonatomic) MMTListSectionMap *sectionMap; // @synthesize sectionMap=_sectionMap;
@property(nonatomic) __weak MMUIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <UIScrollViewDelegate> scrollViewDelegate; // @synthesize scrollViewDelegate=_scrollViewDelegate;
@property(nonatomic) __weak id <UITableViewDelegate> tableViewDelegate; // @synthesize tableViewDelegate=_tableViewDelegate;
@property(retain, nonatomic) MMListReportManager *reportHandler; // @synthesize reportHandler=_reportHandler;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <MMTListAdapterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MMTListAdapterDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)objectForSectionController:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1 sectionController:(id)arg2;
- (void)deselectRowAtIndex:(long long)arg1 sectionController:(id)arg2 animated:(_Bool)arg3;
- (id)dequeueReusableCellOfClass:(Class)arg1 withReuseIdentifier:(id)arg2 forSectionController:(id)arg3 atIndex:(long long)arg4;
- (id)dequeueReusableCellOfClass:(Class)arg1 forSectionController:(id)arg2 atIndex:(long long)arg3;
- (id)indexPathForSectionController:(id)arg1 index:(long long)arg2;
- (id)sectionControllerForSection:(long long)arg1;
- (void)_updateObjects:(id)arg1 dataSource:(id)arg2;
- (id)_generateTransitionDataWithObjects:(id)arg1 dataSource:(id)arg2;
- (void)_updateWithData:(id)arg1;
- (void)_updateObjects;
- (void)reloadData;
- (id)initWithViewController:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

