//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMPageSheetAdapter, MMTableView, NSArray, NSString, UIView;
@protocol WCPaySolitairePageSheetDelegate;

@interface WCPaySolitairePageSheet : NSObject
{
    NSArray *_dataList;
    id <WCPaySolitairePageSheetDelegate> _delegate;
    MMPageSheetAdapter *_pageAdapter;
    UIView *_pageDetailView;
    MMTableView *_dataTableView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTableView *dataTableView; // @synthesize dataTableView=_dataTableView;
@property(retain, nonatomic) UIView *pageDetailView; // @synthesize pageDetailView=_pageDetailView;
@property(retain, nonatomic) MMPageSheetAdapter *pageAdapter; // @synthesize pageAdapter=_pageAdapter;
@property(nonatomic) __weak id <WCPaySolitairePageSheetDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *dataList; // @synthesize dataList=_dataList;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(_Bool)arg2;
- (void)dismissPageSheet;
- (void)showPageSheet;
- (void)onClickCellShowDetailWithSoliObj:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)calcContentViewHeight;
- (void)setupDataTableView;
- (void)setupEmptyView;
- (void)setupDetailView;
- (void)setupAdapter;
- (void)updatePageSheetWithData:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

