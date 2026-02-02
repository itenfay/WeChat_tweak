//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CIImage, MMLivePixelBuffer, NSString;

@interface WCPIPVideoFrame
{
    _Bool _flipX;
    MMLivePixelBuffer *_pixelBufferObj;
    MMLivePixelBuffer *_cachedAspectPixelBufferObj;
    CIImage *_cachedFillImage;
    unsigned long long _srcType;
    NSString *_userId;
    unsigned long long _renderMode;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long renderMode; // @synthesize renderMode=_renderMode;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) _Bool flipX; // @synthesize flipX=_flipX;
@property(nonatomic) unsigned long long srcType; // @synthesize srcType=_srcType;
@property(retain) CIImage *cachedFillImage; // @synthesize cachedFillImage=_cachedFillImage;
@property(retain) MMLivePixelBuffer *cachedAspectPixelBufferObj; // @synthesize cachedAspectPixelBufferObj=_cachedAspectPixelBufferObj;
@property(retain) MMLivePixelBuffer *pixelBufferObj; // @synthesize pixelBufferObj=_pixelBufferObj;
- (_Bool)isSrcValid;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

