//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol GameCenterJSEventLogicHandlerDelegate <NSObject>
- (void)processCallbackFromNative:(NSDictionary *)arg1 callbackId:(NSString *)arg2;
@end

