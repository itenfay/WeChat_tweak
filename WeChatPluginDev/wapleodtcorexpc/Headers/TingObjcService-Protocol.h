//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@protocol TingObjcAffReddotService, TingPlayTaskIndicatorService, TingUserLifetimeExptConfig;

@protocol TingObjcService <NSObject, UnitRCBaseProtocol>
- (id <TingObjcAffReddotService>)getRedDotService;
- (id <TingPlayTaskIndicatorService>)getPlayTaskIndicatorService;
- (id <TingUserLifetimeExptConfig>)getExptConfig;
@end

