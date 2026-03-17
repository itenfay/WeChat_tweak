//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol WCAdSubscriptionLogicDelegate <NSObject>

@optional
- (void)onSubscriptionClosePageSheetWithoutSubmit;
- (void)onSubscriptionFinishedWithResult:(NSDictionary *)arg1 success:(_Bool)arg2 cancel:(_Bool)arg3 errorCode:(long long)arg4;
@end

