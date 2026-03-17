//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MAVTextureInfo : NSObject
{
    int _texture;
    int _width;
    int _height;
}

@property(nonatomic) int height; // @synthesize height=_height;
@property(nonatomic) int width; // @synthesize width=_width;
@property(nonatomic) int texture; // @synthesize texture=_texture;
- (id)initWithTexture:(int)arg1 width:(int)arg2 height:(int)arg3;

@end

