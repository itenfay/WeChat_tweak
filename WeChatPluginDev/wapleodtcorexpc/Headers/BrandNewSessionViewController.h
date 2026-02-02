//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandSessionTableFooter, NSMutableSet, NSString;

@interface BrandNewSessionViewController
{
    _Bool _canShowPersonalCenter;
    BrandSessionTableFooter *_tableFooter;
    NSMutableSet *_clickSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *clickSet; // @synthesize clickSet=_clickSet;
@property(retain, nonatomic) BrandSessionTableFooter *tableFooter; // @synthesize tableFooter=_tableFooter;
@property(nonatomic) _Bool canShowPersonalCenter; // @synthesize canShowPersonalCenter=_canShowPersonalCenter;
- (void)reportOnClickItem:(id)arg1;
- (void)onUpdateUserPaySubcribeEntry:(_Bool)arg1 entryUrl:(id)arg2;
- (void)reportUnfollowSubscribe:(id)arg1 andUnread:(unsigned int)arg2;
- (void)handleBrandUnsubscribe:(id)arg1;
- (void)unsubscribeOnTableView:(id)arg1 IndexPath:(id)arg2;
- (void)deleteSessionOnTableView:(id)arg1 indexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addEntryToActionSheet:(id)arg1 withMenuInfo:(id)arg2;
- (void)addPaySubscribeEntryToActionSheet:(id)arg1;
- (void)showActionSheetForRightButton;
- (void)report27270:(int)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewDidLoad;
- (void)onNavBackBarButtonClicked;
- (void)configueShowRedDotOnRightBarBtn:(_Bool)arg1;
- (void)initNavigationBar;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

