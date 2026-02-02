//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMKView-Protocol.h"

@class MMDynamicColor, NSData, NSString;
@protocol MMKImage;

@protocol MMKImageView <MMKView>
- (NSData *)getImageData;
- (void)setImageData:(NSData *)arg1;
- (MMDynamicColor *)getTintColor;
- (void)setTintColor:(MMDynamicColor *)arg1;
- (long long)getScaleType;
- (void)setScaleType:(long long)arg1;
- (id <MMKImage>)getImage;
- (void)setImage:(id <MMKImage>)arg1;
- (NSString *)getDarkModeUrl;
- (void)setDarkModeUrl:(NSString *)arg1;
- (NSString *)getDefaultUrl;
- (void)setDefaultUrl:(NSString *)arg1;
- (NSString *)getUrl;
- (void)setUrl:(NSString *)arg1;
@end

