//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol CameraScanLogicDelegate <NSObject>
- (void)obtainScanResultDidFinish:(NSString *)arg1;
- (_Bool)shouldBackToSessionImmediately;
- (_Bool)shouldObtainScanResult;

@optional
- (void)onScanItemResult:(NSDictionary *)arg1;
- (void)onScanCodeResult:(NSDictionary *)arg1;
@end

