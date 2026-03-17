//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIColor;

@protocol EditImageTextInputDelegate <NSObject>
- (void)confirmEditText:(NSString *)arg1 withColor:(UIColor *)arg2 style:(unsigned long long)arg3 backgroundColor:(UIColor *)arg4;
- (void)cancelEditText:(NSString *)arg1;

@optional
- (void)onClickSecondCutPromotionButton:(id)arg1;
@end

