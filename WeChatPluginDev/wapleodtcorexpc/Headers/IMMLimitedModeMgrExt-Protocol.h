//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLimitedModeDataAgreenAuthorizationItemPB, NSString;

@protocol IMMLimitedModeMgrExt <NSObject>

@optional
- (void)onBecomeGuardian:(NSString *)arg1 becomeGuardianTime:(unsigned int)arg2;
- (void)onAgreenAuthorization:(NSString *)arg1 agreenAuthorizationInfo:(MMLimitedModeDataAgreenAuthorizationItemPB *)arg2;
@end

