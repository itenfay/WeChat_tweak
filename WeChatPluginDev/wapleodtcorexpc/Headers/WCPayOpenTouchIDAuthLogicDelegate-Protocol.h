//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCPayOpenTouchIDAuthLogicDelegate <NSObject>

@optional
- (void)onWCPayCloseTouchIDSuccess;
- (void)onWCPayCloseTouchIDFailed;
- (void)onWCPayOpenTouchIDAuthLogicOpenFailed;
- (void)onWCPayOpenTouchIDAuthLogicOpenSuccess;
@end

