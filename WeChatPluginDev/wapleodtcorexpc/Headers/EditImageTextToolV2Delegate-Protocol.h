//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EditImageTextToolV2, NSString, UIColor;

@protocol EditImageTextToolV2Delegate <NSObject>
- (void)editImageShowTextInputView:(EditImageTextToolV2 *)arg1 displayStr:(NSString *)arg2 lineColor:(UIColor *)arg3 textStyle:(unsigned long long)arg4;
@end

