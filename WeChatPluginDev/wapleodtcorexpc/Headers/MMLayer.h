//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLayer : NSObject
{
    struct shared_ptr<WeVisionUtil::Layer> _nativeLayer;
    _Bool _flipX;
    unsigned int _rgba8TextureID;
    unsigned int _lumaTextureID;
    unsigned int _chromaTextureID;
    unsigned int _zOrder;
    struct CGSize _imageSize;
    struct CGSize _size;
    struct CGPoint _origin;
    struct CGRect _frame;
    struct CGRect _cropRect;
}

+ (id)layer;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) unsigned int zOrder; // @synthesize zOrder=_zOrder;
@property(nonatomic) _Bool flipX; // @synthesize flipX=_flipX;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(nonatomic) unsigned int chromaTextureID; // @synthesize chromaTextureID=_chromaTextureID;
@property(nonatomic) unsigned int lumaTextureID; // @synthesize lumaTextureID=_lumaTextureID;
@property(nonatomic) unsigned int rgba8TextureID; // @synthesize rgba8TextureID=_rgba8TextureID;
@property(nonatomic) struct CGPoint origin; // @synthesize origin=_origin;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (void)removeFromSuperLayer;
- (void)addSubLayer:(id)arg1;
- (id)initWithNativeLayer:(void *)arg1;

@end

