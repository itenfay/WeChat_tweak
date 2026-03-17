//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol WCPayCollectPalmControlLogicDelegate <NSObject>

@optional
- (void)onWCPayCollectPalmControlLogicEndWithFail:(NSDictionary *)arg1;
- (void)onWCPayCollectPalmControlLogicEndWithCancel:(NSDictionary *)arg1;
- (void)onWCPayCollectPalmControlLogicEndWithOK:(NSDictionary *)arg1;
@end

