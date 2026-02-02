//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol IAdDynamicCanvasExt <NSObject>
- (void)publishEventToPage:(NSString *)arg1 event:(NSString *)arg2 params:(NSDictionary *)arg3;
- (void)publishEvent:(NSString *)arg1 params:(NSDictionary *)arg2;
@end

