//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMDynamicColor, NSString, UIImage;

@interface KindaImage : NSObject
{
    _Bool _supportDynamicSize;
    float _inputWidth;
    float _inputHeight;
    NSString *_darkModeUrl;
    MMDynamicColor *_color;
    NSString *_url;
    UIImage *_image;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool supportDynamicSize; // @synthesize supportDynamicSize=_supportDynamicSize;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) MMDynamicColor *color; // @synthesize color=_color;
@property(nonatomic) float inputHeight; // @synthesize inputHeight=_inputHeight;
@property(nonatomic) float inputWidth; // @synthesize inputWidth=_inputWidth;
@property(retain, nonatomic) NSString *darkModeUrl; // @synthesize darkModeUrl=_darkModeUrl;
- (id)getImage;
- (void)setSvgUrl:(id)arg1 color:(id)arg2 size:(id)arg3;
- (void)stretchImage:(float)arg1 topCap:(float)arg2;
- (float)getHeight;
- (float)getWidth;
- (id)getUrl;
- (void)setSvgUrl:(id)arg1 color:(id)arg2;
- (_Bool)getSupportDynamicSize;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

