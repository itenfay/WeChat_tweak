//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol IWCAddressControlLogic <NSObject>

@optional
- (void)onAddressEditEnd:(NSDictionary *)arg1;
- (void)OnPreFinishedWCAddressLogic:(NSString *)arg1 waitUntilDone:(_Bool *)arg2;
@end

