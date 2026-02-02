//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMBadgeView, MMBarButton, NSMutableDictionary, NSString, RightTopMenuData;
@protocol NewMainFrameRightTopMenuBtnDelegate;

@interface NewMainFrameRightTopMenuBtn
{
    MMBadgeView *m_showNewView;
    RightTopMenuData *m_data;
    NSMutableDictionary *m_dicItems;
    _Bool haveLazyInit;
    MMBarButton *m_addButton;
    id <NewMainFrameRightTopMenuBtnDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <NewMainFrameRightTopMenuBtnDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMBarButton *m_addButton; // @synthesize m_addButton;
@property(nonatomic) _Bool haveLazyInit; // @synthesize haveLazyInit;
- (void)onTipsShowInfoChangeWithPathKey:(id)arg1;
- (void)ReloadWallet;
- (void)OnGetReceiveOrPayReddotData;
- (void)onMMDynamicConfigUpdated;
- (void)reloadData;
- (void)reloadAllItems;
- (_Bool)isRedDotShowed;
- (void)showRedDot:(_Bool)arg1;
- (void)checkRedDot;
- (void)reloadMenuItems;
- (void)saveArchive;
- (void)showRightTopMenuBtn;
- (void)updateImageColor:(id)arg1 alpha:(double)arg2 animated:(_Bool)arg3;
- (_Bool)isTopRightMenuShowID:(id)arg1;
- (void)onItemAction:(id)arg1;
- (void)goToLazyInitObject;
- (double)timeToLazyInitAfterOpenFirstView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

