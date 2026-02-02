//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, RTETextView;

@protocol RTETextViewDataDelegate <NSObject>
- (void)onReplaceTextInRange:(struct _NSRange)arg1 withText:(NSString *)arg2 inTextView:(RTETextView *)arg3;
@end

