//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GetConnectInfoResponse;

@protocol ChatMigrationGetConnectInfoDelegate <NSObject>
- (void)onGetConnectInfoNotSameAccount;
- (void)onGetConnectInfo:(GetConnectInfoResponse *)arg1;
@end

