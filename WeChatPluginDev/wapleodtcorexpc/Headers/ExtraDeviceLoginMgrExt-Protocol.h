//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MultiDeviceLoginInfo;

@protocol ExtraDeviceLoginMgrExt <NSObject>

@optional
- (void)onGetExtDeviceLoginInfo:(MultiDeviceLoginInfo *)arg1;
- (void)onNeedReStartScanQRCode;
@end

