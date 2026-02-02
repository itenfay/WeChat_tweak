//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSMutableArray, NSString;

@protocol IAppDataExt <NSObject>

@optional
- (void)OnNewAppStatusChanged;
- (void)OnAppInfoChanged:(NSString *)arg1;
- (void)OnAppWatermarkChanged:(NSString *)arg1;
- (void)OnAppIconChanged:(NSString *)arg1;
- (void)OnAppRegisterInfoChanged;
- (void)OnAppSettingChanged;
- (void)OnGotBizAppInfo;
- (void)OnGotAppPersonalInfoList:(NSMutableArray *)arg1 errType:(int)arg2;
- (void)OnGotAuthAppList:(NSMutableArray *)arg1 errType:(int)arg2;
- (void)OnGotListAppSettingItem:(NSMutableArray *)arg1 errType:(int)arg2;
- (void)OnUpdateAppAuthState:(NSString *)arg1 errType:(int)arg2;
- (void)OnUpdateAppRecvMsgState:(NSString *)arg1 appSettingFlag:(int)arg2 errType:(int)arg3;
@end

