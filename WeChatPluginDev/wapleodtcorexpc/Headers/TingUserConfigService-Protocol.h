//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class MMListenUserConfig;

@protocol TingUserConfigService <NSObject, UnitRCBaseProtocol>
- (void)setUserConfig:(MMListenUserConfig *)arg1 needNetwork:(_Bool)arg2;
- (MMListenUserConfig *)getUserConfig;
- (void)requireConfig;
@end

