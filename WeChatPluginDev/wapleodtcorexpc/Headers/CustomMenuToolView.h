//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMHorizontalTableView, NSMutableArray, NSString, UIButton, UIView;
@protocol CustomMenuToolViewDelegate;

@interface CustomMenuToolView
{
    NSMutableArray *m_menuList;
    UIButton *_changeBtn;
    MMHorizontalTableView *m_tableView;
    UIButton *m_pageBtn;
    long long lastClickMenuIndex;
    id <CustomMenuToolViewDelegate> m_delegate;
    UIView *_bgView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIButton *m_pageBtn; // @synthesize m_pageBtn;
@property(retain, nonatomic) MMHorizontalTableView *m_tableView; // @synthesize m_tableView;
@property(retain, nonatomic) NSMutableArray *m_menuList; // @synthesize m_menuList;
@property(nonatomic) __weak id <CustomMenuToolViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)reportWCPayMenuClickWithScene:(int)arg1 name:(id)arg2 reddot:(int)arg3 expose:(int)arg4;
- (void)reportMenuClickWithName:(id)arg1;
- (_Bool)shouldShowRedDotWithMenuKey:(id)arg1;
- (_Bool)isPayRelatedSession;
- (_Bool)isInWeChatPaySession;
- (_Bool)isInCollAssistSession;
- (void)resetLastClickMenuIndex;
- (_Bool)isMenusNumerous;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onChangeBtnClick:(id)arg1;
- (void)onPageBtnClick:(id)arg1;
- (void)onMenuButtonClick:(id)arg1;
- (void)horizontalTableView:(id)arg1 didSelectColumnAtIndex:(unsigned long long)arg2;
- (id)horizontalTableView:(id)arg1 viewForColumnAtIndex:(unsigned long long)arg2;
- (double)horizontalTableView:(id)arg1 widthForColumnAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfColumnsInHorizontalTableView:(id)arg1;
- (void)preloadWeAppTaskIfNeeded;
- (void)loadSubView;
- (void)layoutSubviews;
- (id)initWithMenuList:(id)arg1;
- (id)title;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

