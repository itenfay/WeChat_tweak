//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class APAuth;

@protocol APAuthDelegate <NSObject>

@optional
- (void)didExpiredOfApAuth:(APAuth *)arg1;
- (void)didFailOfApAuth:(APAuth *)arg1 withErrCode:(int)arg2;
- (void)didSuccessOfApAuth:(APAuth *)arg1;
- (void)didStartApAuth:(APAuth *)arg1;
@end

