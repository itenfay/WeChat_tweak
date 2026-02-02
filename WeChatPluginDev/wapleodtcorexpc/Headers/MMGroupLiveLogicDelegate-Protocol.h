//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMLiveLogicDelegate-Protocol.h"

@class NSString;

@protocol MMGroupLiveLogicDelegate <MMLiveLogicDelegate>
- (void)onCloseLiveAfterVerifyFail;
- (void)onKickedOut;
- (void)onStartCheckCreateLiveWithVerifyUrl:(NSString *)arg1;
- (void)onStartCheckConnectMicWithVerifyUrl:(NSString *)arg1;
@end

