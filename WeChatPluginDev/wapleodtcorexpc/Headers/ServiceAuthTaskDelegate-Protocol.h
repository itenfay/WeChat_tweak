//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ServiceAuthTask, WCBaseNetworkingError;

@protocol ServiceAuthTaskDelegate <NSObject>
- (void)onTaskFail:(ServiceAuthTask *)arg1 error:(WCBaseNetworkingError *)arg2;
- (void)onTaskSuccess:(ServiceAuthTask *)arg1;
@end

