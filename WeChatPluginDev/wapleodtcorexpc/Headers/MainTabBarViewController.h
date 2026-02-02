//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContactsViewController, FindFriendEntryViewController, MMTabbarItem, MoreViewController, NSMutableArray, NSString, NewMainFrameViewController;
@protocol MainTabBarControllerDelegate;

@interface MainTabBarViewController
{
    unsigned int m_whatHasInit;
    NewMainFrameViewController *m_mainFrameViewController;
    MMTabbarItem *m_mainFrameTabItem;
    ContactsViewController *m_contactsViewController;
    MMTabbarItem *m_contacsTabItem;
    FindFriendEntryViewController *m_findFriendEntryViewController;
    MMTabbarItem *m_findFrientTabItem;
    MoreViewController *m_moreViewController;
    MMTabbarItem *m_moreTabItem;
    NSMutableArray *m_arrViewController;
    _Bool haveLazyInit;
    _Bool _recoverTabBarItems;
    id <MainTabBarControllerDelegate> _mainDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool recoverTabBarItems; // @synthesize recoverTabBarItems=_recoverTabBarItems;
@property(nonatomic) __weak id <MainTabBarControllerDelegate> mainDelegate; // @synthesize mainDelegate=_mainDelegate;
@property(nonatomic) _Bool haveLazyInit; // @synthesize haveLazyInit;
- (void)removeAllTabBarBaseViewController;
- (void)recreateFindFriendViewController;
- (void)p_createMoreViewController;
- (id)p_getMoreViewController;
- (void)p_createFindFriendViewController;
- (id)p_getFindFriendEntryViewController;
- (id)findFriendEntryViewController;
- (void)p_createContactsViewController;
- (id)p_getContactsViewController;
- (void)p_createNewMainFrameViewController;
- (id)p_getNewMainFrameViewController;
- (void)p_createSlimViewControllers;
- (void)p_createTabBarItems;
- (void)p_tryToInitAllControllers;
@property(nonatomic) unsigned long long selectedIndex;
- (id)init;
- (id)tabBarController:(id)arg1 animationControllerForTransitionFromViewController:(id)arg2 toViewController:(id)arg3;
- (void)checkDBCorrupt;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (_Bool)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (void)OnMainTabBarHiddenChange:(_Bool)arg1;
- (void)OnMainFrameSingleClicked:(id)arg1;
- (void)OnMainFrameDoubleClicked:(id)arg1;
- (id)getAllNavigationControllers;
- (id)getNavigationContollerAtIndex:(unsigned long long)arg1;
- (id)getAllTabBaseViewControllersIfExist;
- (id)getTabBarBaseViewController:(unsigned long long)arg1;
- (id)getContactsViewController;
- (id)getNewMainFrameViewController;
- (void)goToLazyInitObject;
- (double)timeToLazyInitAfterOpenFirstView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

