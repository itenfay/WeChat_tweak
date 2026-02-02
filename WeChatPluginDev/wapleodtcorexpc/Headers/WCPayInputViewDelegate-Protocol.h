//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCPayInputView;

@protocol WCPayInputViewDelegate <NSObject>
- (void)inputView:(WCPayInputView *)arg1 didChangeText:(NSString *)arg2;
@end

