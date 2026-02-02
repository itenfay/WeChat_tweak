//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, ContactRelatedGroupLogic, MMTableViewInfo, NSString, QZoneLoginStatus;

@interface SocialInfomationViewController
{
    MMTableViewInfo *m_tableViewInfo;
    QZoneLoginStatus *m_qzone;
    NSString *m_cpKeyForSignature;
    _Bool m_isSignatureUnsafe;
    CContact *m_contact;
    ContactRelatedGroupLogic *m_relatedGroupLogic;
}

+ (id)getSourceForContact:(id)arg1 sourceMsg:(id)arg2;
+ (id)getRegionForContact:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) ContactRelatedGroupLogic *m_relatedGroupLogic; // @synthesize m_relatedGroupLogic;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
- (void)onCRGDataUpdated;
- (void)updateCPState;
- (void)onQZoneUrl:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onPushRelatedGroupViewController;
- (void)OnQQAction;
- (void)reloadTableView;
- (void)makeAddCreateTimeInfoCell:(id)arg1 CellInfo:(id)arg2;
- (void)addContactAddCreateTimeCellAtSection:(id)arg1;
- (void)addSourceCellAtSection:(id)arg1;
- (void)addSignatureCellAtSection:(id)arg1;
- (void)addRegionCellAtSection:(id)arg1;
- (void)addFriendInfoSection;
- (void)relatedGroupSection;
- (void)addThridAccountSection;
- (_Bool)shouldRestrictContentViewSize;
- (id)relatedGroupTitle;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

