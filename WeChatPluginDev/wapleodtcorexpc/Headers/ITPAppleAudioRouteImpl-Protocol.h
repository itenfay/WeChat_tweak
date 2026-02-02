//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol ITPAppleAudioRouteImpl <NSObject>
- (_Bool)isRouteTypeOn:(int)arg1;
- (deque_19df0b0c)getCurrentRoutes;
- (void)removeCallback:(struct ITPAudioRouteManagerCallback *)arg1;
- (void)addCallback:(struct ITPAudioRouteManagerCallback *)arg1;
@end

