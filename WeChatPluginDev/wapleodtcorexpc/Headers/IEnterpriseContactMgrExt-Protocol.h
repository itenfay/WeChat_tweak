//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CEnterpriseContact, NSArray, NSString;

@protocol IEnterpriseContactMgrExt <NSObject>

@optional
- (void)onUpdateMyEnterpriseContact:(NSString *)arg1 errCode:(int)arg2;
- (void)onUpdateMyContactUserFlag:(NSString *)arg1 bitMask:(unsigned int)arg2 errCode:(int)arg3;
- (void)onModifyEnterpriseContactDraft:(CEnterpriseContact *)arg1;
- (void)onBatchModifyEnterpriseContact:(NSArray *)arg1;
- (void)onModifyEnterpriseContact:(CEnterpriseContact *)arg1;
@end

