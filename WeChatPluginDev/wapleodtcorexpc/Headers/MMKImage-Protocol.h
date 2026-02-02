//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMDynamicColor, MMKSize, NSString;

@protocol MMKImage <NSObject>
- (void)stretchImage:(float)arg1 topCap:(float)arg2;
- (float)getHeight;
- (float)getWidth;
- (NSString *)getUrl;
- (_Bool)getSupportDynamicSize;
- (void)setSvgUrl:(NSString *)arg1 color:(MMDynamicColor *)arg2 size:(MMKSize *)arg3;
- (void)setSvgUrl:(NSString *)arg1 color:(MMDynamicColor *)arg2;
- (void)setDarkModeUrl:(NSString *)arg1;
- (void)setUrl:(NSString *)arg1;
- (void)setSupportDynamicSize:(_Bool)arg1;
@end

