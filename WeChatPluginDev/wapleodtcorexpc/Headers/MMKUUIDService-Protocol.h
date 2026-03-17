//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMITransmitKvData, NSString;

@protocol MMKUUIDService <NSObject>
- (MMITransmitKvData *)getExtendInfo;
- (_Bool)isWechatClient;
- (_Bool)developmentSettingEnable;
- (_Bool)adbEnable;
- (NSString *)getOaid;
- (NSString *)getUuid;
@end

