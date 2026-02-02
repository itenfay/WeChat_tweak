//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class XImage;

@interface XVisComposeElement : NSObject
{
    void *yTexture;
    void *uvTexture;
    void *rgbaTexture;
    int _formatType;
    XImage *_yImage;
    XImage *_uvImage;
    XImage *_rgbaImage;
    struct CGSize _inputSize;
    struct CGRect _normalizeCropRect;
    struct CGRect _normalizeFrame;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect normalizeFrame; // @synthesize normalizeFrame=_normalizeFrame;
@property(nonatomic) struct CGRect normalizeCropRect; // @synthesize normalizeCropRect=_normalizeCropRect;
@property(nonatomic) struct CGSize inputSize; // @synthesize inputSize=_inputSize;
@property(retain, nonatomic) XImage *rgbaImage; // @synthesize rgbaImage=_rgbaImage;
@property(retain, nonatomic) XImage *uvImage; // @synthesize uvImage=_uvImage;
@property(retain, nonatomic) XImage *yImage; // @synthesize yImage=_yImage;
@property(nonatomic) int formatType; // @synthesize formatType=_formatType;
- (int)getElementFormatFromRenderFormat:(long long)arg1;
- (void)clear;
- (_Bool)isValid;
- (void)transferFromRenderFrame:(id)arg1;

@end

