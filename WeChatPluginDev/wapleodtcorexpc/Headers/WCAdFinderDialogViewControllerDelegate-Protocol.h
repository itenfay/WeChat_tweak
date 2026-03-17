//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderJumpInfoParams, WCFinderJumpNativeAdDirectToAppParams;

@protocol WCAdFinderDialogViewControllerDelegate <NSObject>
- (void)onAdFinderDialogFailedToJumpToAppDirectlyWithAppParams:(WCFinderJumpNativeAdDirectToAppParams *)arg1 jumpParams:(WCFinderJumpInfoParams *)arg2;
@end

