//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol WCPayPassKitFacadeDelegate <NSObject>

@optional
- (void)onGetSimplePKPassesJSONString:(NSArray *)arg1 errorMsg:(NSString *)arg2;
- (void)onCheckIssueCardPermission:(_Bool)arg1 errorMsg:(NSString *)arg2;
@end

