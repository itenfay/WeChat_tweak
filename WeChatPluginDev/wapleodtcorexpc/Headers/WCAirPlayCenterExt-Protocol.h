//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AVAudioSessionRouteDescription, WCAirPlayCenter;

@protocol WCAirPlayCenterExt <NSObject>

@optional
- (void)airPlayCenter:(WCAirPlayCenter *)arg1 routeDidChange:(AVAudioSessionRouteDescription *)arg2;
@end

