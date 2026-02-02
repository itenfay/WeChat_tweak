//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIAccessibilityElement;

@protocol WNAccessibilityElementDelegate <NSObject>
- (_Bool)isTextViewEditable;
- (_Bool)isTextViewActive;
- (NSString *)getContentWith:(struct _NSRange)arg1;
- (void)changeFocusTo:(_Bool)arg1 curElement:(UIAccessibilityElement *)arg2;
- (void)setSelectedLocation:(unsigned long long)arg1;
- (void)onBecomeFocus:(UIAccessibilityElement *)arg1;
@end

