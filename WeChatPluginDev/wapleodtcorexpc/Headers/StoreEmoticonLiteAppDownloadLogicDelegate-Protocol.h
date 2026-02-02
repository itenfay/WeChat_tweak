//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol StoreEmoticonLiteAppDownloadLogicDelegate <NSObject>
- (void)onDownloadProgress:(float)arg1 pid:(NSString *)arg2;
- (void)onDownloadStatusChangeTo:(long long)arg1 pid:(NSString *)arg2;
@end

