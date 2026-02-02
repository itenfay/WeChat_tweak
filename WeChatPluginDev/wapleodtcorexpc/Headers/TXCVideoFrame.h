//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, TXCVideoDataFrame, TXCVideoTextureFrame;

@interface TXCVideoFrame : NSObject
{
    unique_ptr_4b64f7fb _encodedData;
    unsigned int _pts;
    unsigned int _dts;
    unsigned int _orientation;
    unsigned long long _type;
    struct __CVBuffer *_pixelBuffer;
    TXCVideoTextureFrame *_textureData;
    TXCVideoDataFrame *_dataFrame;
    long long _bitDepth;
    long long _videoFullRangeFlag;
    shared_ptr_1255c1d2 _metaData;
}

+ (unsigned int)orientationFromRotation:(int)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) shared_ptr_1255c1d2 metaData; // @synthesize metaData=_metaData;
@property(readonly, nonatomic) long long videoFullRangeFlag; // @synthesize videoFullRangeFlag=_videoFullRangeFlag;
@property(readonly, nonatomic) long long bitDepth; // @synthesize bitDepth=_bitDepth;
@property(nonatomic) unsigned int orientation; // @synthesize orientation=_orientation;
@property(nonatomic) unsigned int dts; // @synthesize dts=_dts;
@property(nonatomic) unsigned int pts; // @synthesize pts=_pts;
@property(readonly, nonatomic) TXCVideoDataFrame *dataFrame; // @synthesize dataFrame=_dataFrame;
@property(readonly, nonatomic) TXCVideoTextureFrame *textureData; // @synthesize textureData=_textureData;
@property(nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)dealloc;
- (unique_ptr_4b64f7fb)moveEncodedVideoFrame;
@property(readonly, nonatomic) unsigned long long format;
@property(readonly, nonatomic) long long height;
@property(readonly, nonatomic) long long width;
- (void)setup;
@property(readonly, nonatomic) void *encodedData;
- (id)initWithEncodedData:(unique_ptr_4b64f7fb)arg1;
- (id)initWithDataFrame:(id)arg1 pts:(unsigned int)arg2;
- (id)initWithFrameBuffer:(id)arg1 pts:(unsigned int)arg2;
- (id)initWithTexture:(unsigned int)arg1 width:(long long)arg2 height:(long long)arg3;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 pts:(unsigned int)arg2;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
@property(nonatomic) double decodeCost;
@property(copy, nonatomic) NSArray *roiConfigArray;
@property(nonatomic) double encodeCost;

@end

