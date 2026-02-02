//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol StoreEmotionRewardAskForRewardCgiDelegate <NSObject>

@optional
- (void)onAskForRewardCgiFailWithPid:(NSString *)arg1;
- (void)onAskForRewardCgiOkWithPid:(NSString *)arg1 AndReqKey:(NSString *)arg2;
@end

