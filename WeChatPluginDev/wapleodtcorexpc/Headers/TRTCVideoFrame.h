//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData;

@interface TRTCVideoFrame : NSObject
{
    unsigned int _textureId;
    unsigned int _width;
    unsigned int _height;
    long long _pixelFormat;
    long long _bufferType;
    struct __CVBuffer *_pixelBuffer;
    NSData *_data;
    unsigned long long _timestamp;
    long long _rotation;
}

- (void).cxx_destruct;
@property(nonatomic) long long rotation; // @synthesize rotation=_rotation;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned int height; // @synthesize height=_height;
@property(nonatomic) unsigned int width; // @synthesize width=_width;
@property(nonatomic) unsigned int textureId; // @synthesize textureId=_textureId;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
@property(nonatomic) long long bufferType; // @synthesize bufferType=_bufferType;
@property(nonatomic) long long pixelFormat; // @synthesize pixelFormat=_pixelFormat;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)init;
- (unsigned long long)convertToInnerFormat:(long long)arg1;
- (long long)convertFormat:(unsigned long long)arg1;
- (id)convertToInnerFrame;
- (void)copyToVideoFrame:(id)arg1;
- (void)copyFromVideoFrame:(id)arg1;

@end

