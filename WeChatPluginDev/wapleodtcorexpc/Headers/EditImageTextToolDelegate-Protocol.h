//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EditImageTextTool, NSString, UIColor;

@protocol EditImageTextToolDelegate <NSObject>

@optional
- (void)editImageTextTool:(EditImageTextTool *)arg1 needConfirmEditText:(NSString *)arg2 withColor:(UIColor *)arg3 style:(unsigned long long)arg4 backgroundColor:(UIColor *)arg5;
@end

