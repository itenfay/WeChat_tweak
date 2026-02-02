//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContactRemarkLogic, NSMutableDictionary, NSString;

@interface AutoSetRemarkMgr
{
    NSMutableDictionary *m_dicMobileRemarkList;
    NSMutableDictionary *m_dicStrangerRemarkList;
    NSMutableDictionary *m_dicUserAssociateMobileList;
    NSMutableDictionary *m_dicStrangerAttributeList;
    NSMutableDictionary *m_dicWaitToSetRemark;
    ContactRemarkLogic *_remarkLogic;
}

+ (id)GetPathOfStrangerAttributeList;
+ (id)GetPathOfStrangerRemarkList;
+ (id)GetPathOfVerifyList;
+ (id)GetPathOfUserAssociateMobileList;
- (void).cxx_destruct;
@property(retain, nonatomic) ContactRemarkLogic *remarkLogic; // @synthesize remarkLogic=_remarkLogic;
- (void)onModifyContactProcessCardImage:(id)arg1;
- (void)onModifyContactProcessPhone:(id)arg1;
- (void)onModifyContactProcessTagName:(id)arg1;
- (void)onModifyContactProcessDesc:(id)arg1;
- (void)onModifyContactProcessRemark:(id)arg1;
- (void)SetUserAssociateMobileIdentify:(id)arg1;
- (void)onModifyContactProcessMoblie:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)OnAddressBookLoadedComplete;
- (void)autoSetRemark:(id)arg1;
- (void)clearRemark:(id)arg1;
- (id)getAndClearUserAssociateMobileIdentify:(id)arg1;
- (id)getAndClearMobileIdentify:(id)arg1;
- (id)getAndClearStrangerRemark:(id)arg1;
- (void)SetRemark:(id)arg1;
- (id)GetStrangerRemark:(id)arg1;
- (void)SetDesc:(id)arg1;
- (void)AutoSetStrangerAttribute:(id)arg1 AttributeName:(int)arg2;
- (void)ClearStrangerAttribute:(id)arg1 AttributeName:(int)arg2;
- (id)GetStrangerAttribute:(id)arg1 AttributeName:(int)arg2;
- (void)SetStrangerAttributeByName:(id)arg1 AttributeName:(int)arg2 Value:(id)arg3;
- (void)SetStrangerAttribute:(id)arg1 AttributeName:(int)arg2 Value:(id)arg3;
- (void)SetStrangerRemark:(id)arg1 Remark:(id)arg2;
- (void)InternalSetStrangerAttribute:(id)arg1 ObjValue:(id)arg2;
- (void)InternalSetStrangerAttribute:(id)arg1 StringValue:(id)arg2;
- (void)InternalSetStrangerRemark:(id)arg1 Remark:(id)arg2;
- (void)AssociateVerifyMobileUsr:(id)arg1 MobileIdentify:(id)arg2;
- (void)AddVerifyUsr:(id)arg1 MobileIdentify:(id)arg2;
- (void)SaveStrangerData;
- (void)SaveMobileData;
- (void)SaveVerifyMobileData;
- (void)LoadData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

