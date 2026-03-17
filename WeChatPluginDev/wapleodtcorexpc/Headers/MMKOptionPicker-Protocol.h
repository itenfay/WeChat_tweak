//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMVoidBoolOptionCallback, NSArray;

@protocol MMKOptionPicker <NSObject>
- (void)hide;
- (void)showImpl:(NSArray *)arg1 optionSelectCallback:(MMVoidBoolOptionCallback *)arg2;
@end

