//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MAVInputAnimation, MAVVLogLayoutInfo;
@protocol MTLTexture;

@interface MAVVLogInputTexture : NSObject
{
    _Bool _needPosition;
    int _width;
    int _height;
    id <MTLTexture> _mtlTexture;
    struct __CVBuffer *_pixelBuffer;
    MAVVLogLayoutInfo *_layoutInfo;
    MAVVLogLayoutInfo *_toLayoutInfo;
    MAVInputAnimation *_animation;
    long long _rotate;
    struct CGRect _position;
    struct CGRect _cropRect;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needPosition; // @synthesize needPosition=_needPosition;
@property(nonatomic) long long rotate; // @synthesize rotate=_rotate;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(nonatomic) struct CGRect position; // @synthesize position=_position;
@property(retain, nonatomic) MAVInputAnimation *animation; // @synthesize animation=_animation;
@property(retain, nonatomic) MAVVLogLayoutInfo *toLayoutInfo; // @synthesize toLayoutInfo=_toLayoutInfo;
@property(retain, nonatomic) MAVVLogLayoutInfo *layoutInfo; // @synthesize layoutInfo=_layoutInfo;
@property(nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
@property(nonatomic) int height; // @synthesize height=_height;
@property(nonatomic) int width; // @synthesize width=_width;
@property(retain, nonatomic) id <MTLTexture> mtlTexture; // @synthesize mtlTexture=_mtlTexture;
- (id)init;

@end

