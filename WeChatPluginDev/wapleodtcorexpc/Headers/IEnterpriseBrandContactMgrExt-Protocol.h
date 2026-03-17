//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, EnterpriseBrandAttr, NSDictionary, NSString;

@protocol IEnterpriseBrandContactMgrExt

@optional
- (void)onEnterpriseBrandSyncToSvrCompleted:(NSString *)arg1 extParams:(NSDictionary *)arg2;
- (void)onEnterpriseBrandContactDeleted:(CContact *)arg1;
- (void)onEnterpriseBrandAttrChanged:(EnterpriseBrandAttr *)arg1;
- (void)onEnterpriseBrandContactChanged:(CContact *)arg1;
@end

