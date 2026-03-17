//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CEnterpriseContact, NSDictionary;

@protocol IEnterpriseGroupMgrExt <NSObject>

@optional
- (void)onConvertBizChat:(CEnterpriseContact *)arg1 errorCode:(int)arg2 extDic:(NSDictionary *)arg3;
- (void)onInitiateBizChat:(CEnterpriseContact *)arg1 errorCode:(int)arg2 extDic:(NSDictionary *)arg3;
- (void)onUpdateEnterpriseGroupSetting:(CEnterpriseContact *)arg1 errorCode:(int)arg2;
- (void)onUpdateEnterpriseGroupName:(CEnterpriseContact *)arg1 errorCode:(int)arg2;
- (void)onUpdateEnterpriseGroupMemberList:(CEnterpriseContact *)arg1 errorCode:(int)arg2;
- (void)onQuitEnterpriseGroup:(CEnterpriseContact *)arg1 errorCode:(int)arg2;
- (void)onCreateEnterpriseGroup:(CEnterpriseContact *)arg1 errorCode:(int)arg2 extDic:(NSDictionary *)arg3;
@end

