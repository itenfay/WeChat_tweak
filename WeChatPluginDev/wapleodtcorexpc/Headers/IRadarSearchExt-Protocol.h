//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol IRadarSearchExt <NSObject>

@optional
- (void)OnRetrieveLocationOk;
- (void)OnRetrieveLocationTimeout;
- (void)OnRetrieveLocationError:(int)arg1;
- (void)OnVerifyUsr:(NSString *)arg1 ErrCode:(int)arg2;
- (void)OnAddFriend:(NSString *)arg1 ErrCode:(int)arg2;
- (void)OnRadarSearch:(NSArray *)arg1 ErrCode:(int)arg2;
@end

