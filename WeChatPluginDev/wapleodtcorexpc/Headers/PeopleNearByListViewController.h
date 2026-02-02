//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class LbsContactInfoList, MMLbsAdvertismentInfo, MMTableView, NSArray, NSMutableArray, NSMutableDictionary, NSString, SeePeopleNearByLogicController, UILabel;
@protocol PeopleNearByListViewControllerDelegate;

@interface PeopleNearByListViewController : UIView
{
    LbsContactInfoList *m_lbsContactList;
    MMTableView *m_tableView;
    SeePeopleNearByLogicController *m_logicController;
    NSMutableDictionary *m_userHeaderImageCache;
    id <PeopleNearByListViewControllerDelegate> m_delegate;
    NSArray *m_lbsPoiList;
    unsigned long long m_abtestResult;
    long long m_iRoomMemberCount;
    MMLbsAdvertismentInfo *_adInfo;
    long long _maxIndexOfUsersExposed;
    NSMutableArray *_tableModels;
    UILabel *_sexTipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *sexTipsLabel; // @synthesize sexTipsLabel=_sexTipsLabel;
@property(retain, nonatomic) NSMutableArray *tableModels; // @synthesize tableModels=_tableModels;
@property(nonatomic) long long maxIndexOfUsersExposed; // @synthesize maxIndexOfUsersExposed=_maxIndexOfUsersExposed;
@property(retain, nonatomic) MMLbsAdvertismentInfo *adInfo; // @synthesize adInfo=_adInfo;
@property(retain, nonatomic) NSArray *lbsPoiList; // @synthesize lbsPoiList=m_lbsPoiList;
@property(nonatomic) long long iRoomMemberCount; // @synthesize iRoomMemberCount=m_iRoomMemberCount;
@property(retain, nonatomic) NSMutableDictionary *userHeaderImageCache; // @synthesize userHeaderImageCache=m_userHeaderImageCache;
@property(retain, nonatomic) SeePeopleNearByLogicController *logicController; // @synthesize logicController=m_logicController;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=m_tableView;
@property(retain, nonatomic) LbsContactInfoList *lbsContactList; // @synthesize lbsContactList=m_lbsContactList;
- (void)didSelectCloseAtCell:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)adjustSubviewRects;
- (void)updateSexTipsAtTop;
- (void)reloadTableModels;
- (void)reloadWithAdInfo:(id)arg1;
- (void)reloadWithLbsPoiList:(id)arg1;
- (void)reloadWithLbsContactInfoList:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)genAdInfoCell:(id)arg1 adInfo:(id)arg2;
- (id)genLBSPeopleCell:(id)arg1 contactInfo:(id)arg2;
- (id)genLBSPoiCell:(id)arg1 poiItem:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setUpUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)getCachedHeaderImageForUsername:(id)arg1 headImgUrl:(id)arg2;
- (id)init;
- (void)setDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

