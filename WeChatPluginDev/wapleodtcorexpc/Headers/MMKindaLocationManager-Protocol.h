//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MMKindaLocationManager <NSObject>
- (NSString *)getCellInfo;
- (NSString *)getEncryptKey;
- (NSString *)getEncryptInfo:(_Bool)arg1 bReportSSid:(_Bool)arg2;
@end

