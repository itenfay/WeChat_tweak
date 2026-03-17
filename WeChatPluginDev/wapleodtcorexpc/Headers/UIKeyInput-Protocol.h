//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "UITextInputTraits-Protocol.h"

@class NSString;

@protocol UIKeyInput <UITextInputTraits>
@property(readonly, nonatomic) _Bool hasText;
- (void)deleteBackward;
- (void)insertText:(NSString *)arg1;
@end

