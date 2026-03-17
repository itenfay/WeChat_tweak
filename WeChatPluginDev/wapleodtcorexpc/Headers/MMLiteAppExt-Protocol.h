//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiteAppInfoItem, NSString;

@protocol MMLiteAppExt <NSObject>

@optional
- (void)onLiteAppOrientationChange:(NSString *)arg1 orientation:(long long)arg2;
- (void)onLiteAppUpdateFinish:(unsigned long long)arg1 appId:(NSString *)arg2 appInfo:(MMLiteAppInfoItem *)arg3;
- (void)onLiteAppViewLifeCycleEvent:(unsigned long long)arg1;
@end

