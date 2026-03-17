//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class NSString;

@protocol TingUserLifetimeExptConfig <NSObject, UnitRCBaseProtocol>
- (void)setConfigForKey:(NSString *)arg1 value:(_Bool)arg2;
- (_Bool)getConfigForKey:(NSString *)arg1 defaultValue:(_Bool)arg2;
@end

