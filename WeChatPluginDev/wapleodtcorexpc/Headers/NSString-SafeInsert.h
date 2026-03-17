//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSString.h>

@interface NSString (SafeInsert)
+ (id)safeStringWithString:(id)arg1;
- (id)nonEmptyOrNil;
- (id)safeStringByReplacingCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
@end

