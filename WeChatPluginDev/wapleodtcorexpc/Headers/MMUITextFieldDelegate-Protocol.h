//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUITextField;

@protocol MMUITextFieldDelegate <NSObject>

@optional
- (void)mmTextFieldDidExceedMaxLen:(MMUITextField *)arg1;
- (void)mmTextFieldDidChange:(MMUITextField *)arg1;
@end

