//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData;

@protocol BlueAdapterDelegateBase <NSObject>

@optional
- (void)onStateChange:(int)arg1;
- (void)onDeviceLost:(long long)arg1;
- (void)onDeviceFound:(long long)arg1 WithExtData:(NSData *)arg2;
- (void)onDeviceFound:(long long)arg1;
@end

