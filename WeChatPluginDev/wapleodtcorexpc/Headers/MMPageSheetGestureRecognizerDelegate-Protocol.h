//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIGestureRecognizer;

@protocol MMPageSheetGestureRecognizerDelegate <NSObject>

@optional
- (_Bool)pageSheetGestureRecognizerShouldBegin:(UIGestureRecognizer *)arg1;
- (_Bool)onContainerPanGestureRecognizer:(UIGestureRecognizer *)arg1 shouldRequireFailureOfGestureRecognizer:(UIGestureRecognizer *)arg2;
@end

