//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSObject, NSString, WAProvideApiConfig;

@protocol WAProvideApiDelegate <NSObject>
- (void)onApiSendEvent:(WAProvideApiConfig *)arg1 Name:(NSString *)arg2 Param:(NSObject *)arg3;
- (void)onApiEndResult:(WAProvideApiConfig *)arg1 Name:(NSString *)arg2 Param:(NSDictionary *)arg3 CallbackId:(unsigned int)arg4;
@end

