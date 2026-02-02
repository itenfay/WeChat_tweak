//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCSQLiteLintDataSourceDelegate <NSObject>
- (_Bool)excuteSQL:(NSString *)arg1 onDB:(NSString *)arg2 withCallback:(void (^)(int, NSArray *, NSArray *, NSString *))arg3;
@end

