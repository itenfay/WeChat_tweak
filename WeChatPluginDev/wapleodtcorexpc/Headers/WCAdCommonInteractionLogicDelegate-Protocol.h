//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCDataItem;

@protocol WCAdCommonInteractionLogicDelegate <NSObject>

@optional
- (void)onAdCommonInteractionLogicShakeActionFired;
- (unsigned long long)onAdCommonInteractionLogicFetchScene;
- (WCDataItem *)onAdCommonInteractionLogicFetchDataItem;
@end

