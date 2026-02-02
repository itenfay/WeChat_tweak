//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol StoreEmotionRecoverLogicObjectDelegate <NSObject>

@optional
- (void)onStoreEmotionRecoverLogicFailed;
- (void)onStoreEmotionRecoverLogicOKWithServerPids:(NSArray *)arg1;
@end

