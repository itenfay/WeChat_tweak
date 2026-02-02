//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol TXICameraCapturerInterfaceDelegate <NSObject>
- (void)onCameraInterruptionEnd;
- (void)onCameraInterrupted:(long long)arg1;
- (void)onCameraStateChanged:(NSString *)arg1 isConnected:(_Bool)arg2;
@end

