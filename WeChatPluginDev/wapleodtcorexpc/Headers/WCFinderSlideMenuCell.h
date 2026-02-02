//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSArray, NSString, UIPanGestureRecognizer, UIView;

@interface WCFinderSlideMenuCell : UICollectionViewCell
{
    _Bool _menuOpened;
    _Bool _closedOtherMenu;
    UIView *_menuView;
    NSArray *_menuInfos;
    UIPanGestureRecognizer *_panGesture;
    struct CGPoint _gestureOrigin;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool closedOtherMenu; // @synthesize closedOtherMenu=_closedOtherMenu;
@property(nonatomic) _Bool menuOpened; // @synthesize menuOpened=_menuOpened;
@property(nonatomic) struct CGPoint gestureOrigin; // @synthesize gestureOrigin=_gestureOrigin;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) NSArray *menuInfos; // @synthesize menuInfos=_menuInfos;
@property(retain, nonatomic) UIView *menuView; // @synthesize menuView=_menuView;
- (void)invokeTarget:(id)arg1 action:(SEL)arg2 menu:(id)arg3;
- (void)onTap:(id)arg1;
- (void)updateMenuPosition;
- (double)totalWidth;
- (void)layoutEachMenuSubviews:(id)arg1;
- (void)resetMenuViewLayout;
- (void)layoutMenuViewsWthenExpand;
- (void)ensureMenuView;
- (id)menuIdentify;
- (void)removeSelfRecardMenuOpened;
- (void)recardMeuOpened;
- (id)recardMenuIdentify;
- (id)findCollectionView;
- (void)_closeOtherCellMenu;
- (void)_cleanMenuViews;
- (void)closeMenu;
- (void)exposeMenuOpened;
- (void)tryCloseMenu:(double)arg1;
- (void)tryOpenMenu:(double)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)onPan:(id)arg1;
- (void)createMenuInfo;
- (void)setupGesture:(_Bool)arg1;
@property(copy, nonatomic) NSArray *menuItems;
- (void)prepareForReuse;
- (id)displayContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

