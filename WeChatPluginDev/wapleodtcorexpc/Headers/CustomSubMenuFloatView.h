//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSMutableArray, NSString, UIView;
@protocol CustomSubMenuFloatViewDelegate;

@interface CustomSubMenuFloatView
{
    UIView *m_contentView;
    MMTableView *m_tableView;
    NSMutableArray *m_btnList;
    double m_tableCellWidth;
    id <CustomSubMenuFloatViewDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *m_btnList; // @synthesize m_btnList;
@property(retain, nonatomic) UIView *m_contentView; // @synthesize m_contentView;
@property(nonatomic) __weak id <CustomSubMenuFloatViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)reportMenuClickWithName:(id)arg1;
- (_Bool)shouldShowRedDotWithMenuKey:(id)arg1;
- (_Bool)isInWeChatPaySession;
- (_Bool)isInCollAssistSession;
- (_Bool)isPayRelatedSession;
- (void)preloadWeAppTaskIfNeeded;
- (id)displayViews:(id)arg1;
- (void)dumpView:(id)arg1 atIndent:(int)arg2 into:(id)arg3;
- (long long)show2StorageIndex:(long long)arg1;
- (long long)storage2ShowIndex:(long long)arg1;
- (_Bool)isSubMenuListHasIcon;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)getTableCellWidth;
- (double)getFontSize;
- (void)onRemoveFloatView;
- (void)animateDismissContentView;
- (void)animatePresentContentView;
- (void)onTableViewButtonDown:(id)arg1;
- (void)onTapScreenBtn;
- (void)loadContentViewWithArrowX:(double)arg1;
- (id)initWithList:(id)arg1 ArrowX:(double)arg2 delegate:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

