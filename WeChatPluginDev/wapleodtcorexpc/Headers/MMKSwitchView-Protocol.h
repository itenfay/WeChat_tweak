//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMKView-Protocol.h"

@class MMDynamicColor, MMKSwitchViewOnChangeSwitchCallback;
@protocol MMKImage;

@protocol MMKSwitchView <MMKView>
- (void)setOnChangeSwitchCallback:(MMKSwitchViewOnChangeSwitchCallback *)arg1;
- (_Bool)getEnabled;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)getOn;
- (void)setOn:(_Bool)arg1;
- (id <MMKImage>)getOffImage;
- (void)setOffImage:(id <MMKImage>)arg1;
- (id <MMKImage>)getOnImage;
- (void)setOnImage:(id <MMKImage>)arg1;
- (MMDynamicColor *)getThumbTintColor;
- (void)setThumbTintColor:(MMDynamicColor *)arg1;
- (MMDynamicColor *)getTintColor;
- (void)setTintColor:(MMDynamicColor *)arg1;
- (MMDynamicColor *)getOnTintColor;
- (void)setOnTintColor:(MMDynamicColor *)arg1;
@end

