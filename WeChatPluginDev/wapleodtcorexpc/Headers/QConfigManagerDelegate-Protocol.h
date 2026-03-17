//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSError, QConfigManager;

@protocol QConfigManagerDelegate <NSObject>

@optional
- (void)configUpdateNotRequire:(QConfigManager *)arg1;
- (void)configManagerDidFail:(QConfigManager *)arg1 WithError:(NSError *)arg2;
- (void)configManagerDidFinish:(QConfigManager *)arg1;
@end

