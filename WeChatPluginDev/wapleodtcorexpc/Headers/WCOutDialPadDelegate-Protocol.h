//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCOutDialPadDelegate <NSObject>

@optional
- (void)OnPressedDialPadFunctionBtnWithType:(unsigned long long)arg1;
- (void)OnPressedDialPadKeyWithText:(NSString *)arg1 andKeyCode:(int)arg2;
@end

