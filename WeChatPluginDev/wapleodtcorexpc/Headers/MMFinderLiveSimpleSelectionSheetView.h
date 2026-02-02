//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, UITableView;
@protocol MMFinderLiveSimpleSelectionSheetViewDelegate;

@interface MMFinderLiveSimpleSelectionSheetView
{
    id <MMFinderLiveSimpleSelectionSheetViewDelegate> _sheetDelegate;
    NSArray *_items;
    double _showHeight;
    unsigned long long _selectedIndex;
    UITableView *_tableView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) double showHeight; // @synthesize showHeight=_showHeight;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <MMFinderLiveSimpleSelectionSheetViewDelegate> sheetDelegate; // @synthesize sheetDelegate=_sheetDelegate;
- (void)pageSheetWillDisappear;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)layoutSubviews;
- (void)initUI;
- (void)showWithHeight:(double)arg1 animated:(_Bool)arg2;
- (void)setupPageSheetConfigWithTitle:(id)arg1;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 items:(id)arg2 selectedIndex:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

