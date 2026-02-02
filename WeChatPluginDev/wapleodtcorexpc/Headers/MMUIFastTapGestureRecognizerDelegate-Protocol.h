//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIGestureRecognizer;

@protocol MMUIFastTapGestureRecognizerDelegate <UIGestureRecognizerDelegate>

@optional
- (NSString *)getContextString;
- (void)tapGestureRecognizerFinished:(UIGestureRecognizer *)arg1;
- (void)tapGestureRecognizerBegan:(UIGestureRecognizer *)arg1 tapCount:(unsigned long long)arg2;
@end

