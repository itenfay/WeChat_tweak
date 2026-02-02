//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MAVVLogDirector : NSObject
{
    int _outputWidth;
    int _outputHeight;
    int _width;
    int _height;
}

@property(nonatomic) int height; // @synthesize height=_height;
@property(nonatomic) int width; // @synthesize width=_width;
@property(nonatomic) int outputHeight; // @synthesize outputHeight=_outputHeight;
@property(nonatomic) int outputWidth; // @synthesize outputWidth=_outputWidth;
- (void)render:(int)arg1 pts:(long long)arg2;
- (void)addInputTexture:(id)arg1;
- (void)setEffectManager:(id)arg1;
- (void)setOutputSize:(int)arg1 height:(int)arg2;
- (void)setSize:(int)arg1 height:(int)arg2;
- (id)init;

@end

