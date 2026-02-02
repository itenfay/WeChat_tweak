//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WAAppTask;

@protocol IWAHandOffService <NSObject>
+ (void)removeCurrentHandOffItem;
+ (void)tryOpenCurrentHandOffWithTask:(WAAppTask *)arg1 handoffId:(NSString *)arg2 withAppPath:(NSString *)arg3 withActioId:(long long)arg4;
+ (void)trySetCurrentHandOffWithTask:(WAAppTask *)arg1 handoffId:(NSString *)arg2;
@end

