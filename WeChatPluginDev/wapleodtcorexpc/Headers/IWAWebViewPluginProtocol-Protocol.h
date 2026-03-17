//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol IWAWebViewPluginProtocol <NSObject>

@optional
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(NSDictionary *)arg2;
@end

