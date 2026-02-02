//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSMutableArray, NSString, UIView;
@protocol WCFinderLiveRosterSelectDelegate;

@interface WCFinderLiveRosterSelectViewController
{
    _Bool _isInPageSheetMode;
    _Bool _forceDarkMode;
    id <WCFinderLiveRosterSelectDelegate> _delegate;
    NSMutableArray *_visibilityIdLists;
    NSMutableArray *_allVisibilityFileLists;
    long long _visibilityMode;
    long long _liveMode;
    MMTableView *_tableView;
    UIView *_tableViewFooter;
    double _tableHeight;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forceDarkMode; // @synthesize forceDarkMode=_forceDarkMode;
@property(nonatomic) double tableHeight; // @synthesize tableHeight=_tableHeight;
@property(retain, nonatomic) UIView *tableViewFooter; // @synthesize tableViewFooter=_tableViewFooter;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long liveMode; // @synthesize liveMode=_liveMode;
@property(nonatomic) long long visibilityMode; // @synthesize visibilityMode=_visibilityMode;
@property(retain, nonatomic) NSMutableArray *allVisibilityFileLists; // @synthesize allVisibilityFileLists=_allVisibilityFileLists;
@property(retain, nonatomic) NSMutableArray *visibilityIdLists; // @synthesize visibilityIdLists=_visibilityIdLists;
@property(nonatomic) _Bool isInPageSheetMode; // @synthesize isInPageSheetMode=_isInPageSheetMode;
@property(nonatomic) __weak id <WCFinderLiveRosterSelectDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTapDone;
- (void)finishRosterSelect;
- (void)onTapCancel;
- (void)cancelRosterSelect;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)layoutTableView;
- (void)initTableView;
- (id)createInitRightBarItem;
- (id)createInitLeftButton;
- (id)createInitLeftBarItem;
- (void)initView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (long long)overrideUserInterfaceStyle;
- (long long)preferredStatusBarStyle;
- (_Bool)navigationBarBlurEffect;
- (id)navigationBarBackgroundColor;
- (id)getColorProxy;
- (id)initWithVisibilityFileLists:(id)arg1 andChoosenIdLists:(id)arg2 visibilityMode:(long long)arg3 liveMode:(long long)arg4 forceDarkMode:(_Bool)arg5;
- (void)pageSheetDidClose:(id)arg1 closeType:(long long)arg2;
- (void)onCancelInPageSheetMode:(id)arg1;
- (void)onDoneInPageSheetMode:(id)arg1;
- (double)getVisibleHeight;
- (double)getContentViewY;
- (id)pageSheetAdapter;
- (void)setPageSheetAdapter:(id)arg1;
- (void)initRightBarItemInPageSheetModeIfNeeded;
- (void)initLeftBarItemInPageSheetModeIfNeeded;
- (void)setTitleInPageSheetModeIfNeeded:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

