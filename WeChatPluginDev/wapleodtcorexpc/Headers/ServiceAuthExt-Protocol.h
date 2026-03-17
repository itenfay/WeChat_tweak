//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ServiceAuthConfig, WCBaseNetworkingError;

@protocol ServiceAuthExt <NSObject>

@optional
- (void)onCancelServiceAuth;
- (void)onCloseService:(unsigned long long)arg1 config:(ServiceAuthConfig *)arg2 error:(WCBaseNetworkingError *)arg3;
- (void)onOpenService:(unsigned long long)arg1 config:(ServiceAuthConfig *)arg2 error:(WCBaseNetworkingError *)arg3;
@end

