//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IMBBizInfoDelegate <NSObject>

@optional
- (void)onBizCallDestroy:(NSString *)arg1;
- (void)onBizCallStart:(NSString *)arg1;
@end

