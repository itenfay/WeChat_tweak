//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMPatternLockView, NSString;

@protocol MMPatternLockViewDelegate <NSObject>
- (_Bool)isContinueWhenlockViewResultInValid:(MMPatternLockView *)arg1;
- (void)lockView:(MMPatternLockView *)arg1 didEndWithPattern:(NSString *)arg2;
@end

