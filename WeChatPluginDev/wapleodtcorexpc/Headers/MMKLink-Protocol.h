//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMDynamicColor, MMVoidCallback, NSString;

@protocol MMKLink <NSObject>
- (void)setFontStyle:(long long)arg1;
- (void)setTextSize:(float)arg1;
- (void)setBackground:(MMDynamicColor *)arg1 radius:(int)arg2;
- (void)setLinkFont:(NSString *)arg1;
- (void)setLinkStyle:(long long)arg1;
- (void)setLinkCallbackImpl:(MMVoidCallback *)arg1;
- (void)setLinkColor:(MMDynamicColor *)arg1;
- (void)setText:(NSString *)arg1;
@end

