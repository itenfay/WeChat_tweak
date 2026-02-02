//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol WCRedEnvelopes2019GreetingViewControllerDelegate <NSObject>

@optional
- (NSString *)getGreetingReportSessionId;
- (void)onGoToBalanceDetail;
- (void)onOpenDetailList;
- (void)redEnvelopes2019GreetingViewControllerSendClick:(NSDictionary *)arg1;
- (void)redEnvelopes2019GreetingViewControllerBack;
@end

