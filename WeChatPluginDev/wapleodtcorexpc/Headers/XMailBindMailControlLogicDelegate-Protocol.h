//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, XMailBindMailControlLogic;

@protocol XMailBindMailControlLogicDelegate <NSObject>

@optional
- (void)onXMailBindMailControlLogicCanceled:(XMailBindMailControlLogic *)arg1;
- (void)onXMailBindMailControlLogicSuccess:(XMailBindMailControlLogic *)arg1 mailAddr:(NSString *)arg2;
@end

