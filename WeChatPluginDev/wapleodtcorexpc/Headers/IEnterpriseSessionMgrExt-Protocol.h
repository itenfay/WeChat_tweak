//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, NSString;

@protocol IEnterpriseSessionMgrExt <NSObject>

@optional
- (void)onCleanUpEnterpriseChat:(CContact *)arg1;
- (void)onEnterpriseChatSessionChanged:(NSString *)arg1;
@end

