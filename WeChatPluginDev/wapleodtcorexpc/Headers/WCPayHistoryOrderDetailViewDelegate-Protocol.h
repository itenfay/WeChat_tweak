//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCPayHistoryOrderDetailViewDelegate <NSObject>
- (void)OnClickedBrandProfile:(NSString *)arg1 NickName:(NSString *)arg2;

@optional
- (void)OnClickedReceiverProfile:(NSString *)arg1;
- (void)OnClickedRetrySendMessage:(NSString *)arg1 UserName:(NSString *)arg2;
@end

