//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData;

@interface V2TXLiveVideoFrame : NSObject
{
    unsigned int _textureId;
    long long _pixelFormat;
    long long _bufferType;
    NSData *_data;
    struct __CVBuffer *_pixelBuffer;
    unsigned long long _width;
    unsigned long long _height;
    long long _rotation;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int textureId; // @synthesize textureId=_textureId;
@property(nonatomic) long long rotation; // @synthesize rotation=_rotation;
@property(nonatomic) unsigned long long height; // @synthesize height=_height;
@property(nonatomic) unsigned long long width; // @synthesize width=_width;
@property(nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) long long bufferType; // @synthesize bufferType=_bufferType;
@property(nonatomic) long long pixelFormat; // @synthesize pixelFormat=_pixelFormat;
- (void)dealloc;
- (id)description;

@end

