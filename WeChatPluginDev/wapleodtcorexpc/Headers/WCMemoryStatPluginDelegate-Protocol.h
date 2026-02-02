//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, WCMemoryStatPlugin;

@protocol WCMemoryStatPluginDelegate <NSObject>
- (NSDictionary *)onMemoryStatPluginGetCustomInfo:(WCMemoryStatPlugin *)arg1;
- (void)onMemoryStatPlugin:(WCMemoryStatPlugin *)arg1 hasError:(int)arg2;
@end

