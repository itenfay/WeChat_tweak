//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderNewUserPrepareResponse, NSString, WCFinderContact, WCTableViewManager;

@interface WCFinderCreatorCenterViewController
{
    _Bool _hasExposeAnchorTaskEntrance;
    _Bool _hasExposeAnchorTaskRedDot;
    WCFinderContact *_contact;
    FinderNewUserPrepareResponse *_userPrepare;
    WCTableViewManager *_tableViewManager;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasExposeAnchorTaskRedDot; // @synthesize hasExposeAnchorTaskRedDot=_hasExposeAnchorTaskRedDot;
@property(nonatomic) _Bool hasExposeAnchorTaskEntrance; // @synthesize hasExposeAnchorTaskEntrance=_hasExposeAnchorTaskEntrance;
@property(retain, nonatomic) WCTableViewManager *tableViewManager; // @synthesize tableViewManager=_tableViewManager;
@property(retain, nonatomic) FinderNewUserPrepareResponse *userPrepare; // @synthesize userPrepare=_userPrepare;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
- (void)openMiniAppSilence;
- (void)updateOriginalPlainRedDotWithPathKey:(id)arg1;
- (void)finderRedDotDataRevokedWithPathKey:(id)arg1;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (id)makeSectionSeparator;
- (void)addToSection:(id)arg1 withTitle:(id)arg2 action:(SEL)arg3;
- (void)addToSection:(id)arg1 withTitle:(id)arg2 status:(id)arg3 action:(SEL)arg4;
- (id)produceGuideUrl;
- (void)clickProduceGuide;
- (void)addOtherSection;
- (void)clickStore;
- (void)addStoreSection;
- (void)clickLiveLottery;
- (void)clickLiveAnchorTaskEntrance;
- (_Bool)checkAccountLogout;
- (void)showLiveAgencyWebPage;
- (void)showIncomVC;
- (void)clickLiveIncome;
- (void)addLiveAnchorTaskSection:(id)arg1;
- (void)addLiveSection;
- (void)clickOriginalCertification;
- (_Bool)enableShowOriginalEntry;
- (void)addOriginalCellToSection:(id)arg1;
- (void)onClickAuth;
- (void)addAuthSection;
- (void)reloadTableView;
- (void)setupTableView;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithContact:(id)arg1 userPrepare:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

