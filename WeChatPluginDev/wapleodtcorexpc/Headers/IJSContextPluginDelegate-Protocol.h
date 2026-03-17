//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol IJSContextPluginDelegate <NSObject>
- (void)onSuccess:(NSDictionary *)arg1;
- (void)onError:(NSString *)arg1;
@end

