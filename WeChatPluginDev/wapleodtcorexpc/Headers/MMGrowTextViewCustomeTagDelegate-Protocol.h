//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMGrowTextView, NSArray, NSString;

@protocol MMGrowTextViewCustomeTagDelegate <NSObject>

@optional
- (NSArray *)getCustomeTagLocation:(NSString *)arg1 textView:(MMGrowTextView *)arg2;
@end

