//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WAMediaCastingAirPlayService;

@protocol WAMediaCastingAirPlayServiceDelegate <NSObject>

@optional
- (void)onMediaCastingAirPlayService:(WAMediaCastingAirPlayService *)arg1 wirelessRouteActiveDidChange:(_Bool)arg2;
@end

