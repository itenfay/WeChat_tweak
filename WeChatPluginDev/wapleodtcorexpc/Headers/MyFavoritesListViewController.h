//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol MyFavoritesListViewControllerDelegate;

@interface MyFavoritesListViewController
{
    id <MyFavoritesListViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MyFavoritesListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onSelectFavDataItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3;
- (void)onSelectFavItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3 fromScene:(unsigned int)arg4 favIndex:(unsigned int)arg5 searchText:(id)arg6 withCell:(id)arg7;
- (void)onSquareImgClicked:(id)arg1 withInfo:(id)arg2 withOffset:(unsigned int)arg3;
- (void)finderFeedFlowView:(id)arg1 updateCell:(id)arg2 atIndexPath:(id)arg3;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)OnForwardDone;
- (id)getFavForawrdViewController;
- (void)forwardData:(id)arg1;
- (void)onSelectRowAtIndexPath:(id)arg1;
- (_Bool)shouldInteractiveDismiss;
- (void)viewDidAppear:(_Bool)arg1;
- (void)OnCancelModalView:(id)arg1;
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

