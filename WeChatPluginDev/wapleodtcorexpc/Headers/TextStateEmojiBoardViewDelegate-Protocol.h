//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, TextStateIcon;

@protocol TextStateEmojiBoardViewDelegate <NSObject>

@optional
- (void)onEmojiBoardItemSelected:(TextStateIcon *)arg1 groupDescription:(NSString *)arg2;
@end

