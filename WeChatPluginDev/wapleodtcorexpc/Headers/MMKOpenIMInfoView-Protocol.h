//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMKView-Protocol.h"

@class MMDynamicColor, NSString;

@protocol MMKOpenIMInfoView <MMKView>
- (NSString *)getBusinessNameText;
- (void)setBusinessNameText:(NSString *)arg1;
- (NSString *)getTrueNameText;
- (void)setTrueNameText:(NSString *)arg1;
- (NSString *)getNickNameText;
- (void)setNickNameText:(NSString *)arg1;
- (NSString *)getFormatText;
- (void)setFormatText:(NSString *)arg1;
- (MMDynamicColor *)getTextColor;
- (void)setTextColor:(MMDynamicColor *)arg1;
- (long long)getTextAlign;
- (void)setTextAlign:(long long)arg1;
- (float)getTextSize;
- (void)setTextSize:(float)arg1;
- (void)updateContent;
@end

