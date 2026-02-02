//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavSightView, NSString;

@interface FavSightDetailViewController
{
    FavSightView *m_sightView;
    _Bool m_hasIllegalData;
}

- (void).cxx_destruct;
- (void)OnUpdateItems:(id)arg1;
- (void)saveSight;
- (void)onFavSightSizeDidChange:(id)arg1;
- (void)onJumpToViewDetail:(id)arg1;
- (void)jumpToDetail:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onFavActionSheetSelectedItemWithType:(long long)arg1;
- (void)onFavActionSheetSelectedForwardToUser:(id)arg1;
- (id)getCurrentViewController;
- (void)onAction:(id)arg1;
- (id)getFavForawrdViewController;
- (void)initSightView;
- (void)genContent:(id)arg1 indexPath:(id)arg2;
- (double)getHeightForRowAtIndexPath:(id)arg1;
- (long long)getRowsInContentSection;
- (void)viewDidLoad;
- (id)initWithFavItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

