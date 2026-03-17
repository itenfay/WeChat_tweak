//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol JITRuntimeJsApiHandlerDelegate <NSObject>
- (void)processInvokeHandler:(NSString *)arg1 param:(NSDictionary *)arg2 callbackId:(unsigned int)arg3;
@end

