//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MultiLineTextConfig, NSMutableAttributedString, NSString;

@protocol MultiLineTextView <NSObject>
- (void)applyMultiLineConfig:(MultiLineTextConfig *)arg1;
- (void)setMultilineAttrText:(NSMutableAttributedString *)arg1;
- (void)setMultilineText:(NSString *)arg1;
@end

