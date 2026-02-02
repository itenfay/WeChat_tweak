//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveSimpleSelectionSheetView, NSString, UITableView, UIView;
@protocol MMFinderLiveFansGroupAnchorCardEditPanelDelegate;

@interface MMFinderLiveFansGroupAnchorCardEditPanel
{
    unsigned long long _currentVisibility;
    id <MMFinderLiveFansGroupAnchorCardEditPanelDelegate> _panelDelegate;
    UIView *_contentView;
    UITableView *_tableView;
    MMFinderLiveSimpleSelectionSheetView *_visibilitySelectionSheetView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMFinderLiveSimpleSelectionSheetView *visibilitySelectionSheetView; // @synthesize visibilitySelectionSheetView=_visibilitySelectionSheetView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <MMFinderLiveFansGroupAnchorCardEditPanelDelegate> panelDelegate; // @synthesize panelDelegate=_panelDelegate;
@property(nonatomic) unsigned long long currentVisibility; // @synthesize currentVisibility=_currentVisibility;
- (void)simpleSelectionSheetView:(id)arg1 willCloseWithSelectedIndex:(unsigned long long)arg2;
- (void)showVisibilitySelectionSheetView;
- (void)onDoneButtonClicked;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)layoutSubviews;
- (void)createAllViews;
- (double)contentHeight;
- (double)contentWidth;
- (id)genDoneButton;
- (void)setupPageSheetConfig;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

