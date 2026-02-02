//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSMutableArray, NSMutableDictionary, NSString;
@protocol BizTLPersonalCenterMainViewControllerDelegate;

@interface BizTLPersonalCenterMainViewController
{
    int _sessionId;
    int _personalizedOpt;
    id <BizTLPersonalCenterMainViewControllerDelegate> _m_delegate;
    MMTableView *_mainMenuTableView;
    NSMutableDictionary *_cellDict;
    NSMutableArray *_groupCellList;
}

- (void).cxx_destruct;
@property(nonatomic) int personalizedOpt; // @synthesize personalizedOpt=_personalizedOpt;
@property(retain, nonatomic) NSMutableArray *groupCellList; // @synthesize groupCellList=_groupCellList;
@property(retain, nonatomic) NSMutableDictionary *cellDict; // @synthesize cellDict=_cellDict;
@property(retain, nonatomic) MMTableView *mainMenuTableView; // @synthesize mainMenuTableView=_mainMenuTableView;
@property(nonatomic) int sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) __weak id <BizTLPersonalCenterMainViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onPersonalizedOperated:(int)arg1;
- (void)report27213:(unsigned int)arg1 scene:(unsigned int)arg2;
- (void)setCornerRadius:(id)arg1 top:(_Bool)arg2 bottom:(_Bool)arg3;
- (struct CGSize)getCellSize;
- (_Bool)isStartSectionCell:(id)arg1;
- (_Bool)isEndSectionCell:(id)arg1;
- (id)getNewDynamicList;
- (_Bool)triggerRedline:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)decorateCell:(id)arg1 index:(id)arg2;
- (void)jumpToWxa:(id)arg1;
- (void)jumpToWeb:(id)arg1;
- (void)jumpToSetting;
- (void)jumpToNotify;
- (void)jumpToRecentReading;
- (void)jumpToMyBizList;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (_Bool)checkCellInfoAvaliable:(id)arg1;
- (void)filterDataSource:(id)arg1;
- (void)initDynamicData;
- (void)initTableView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

