//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPVideoFrameBuffer : NSObject
{
    _Bool _dataRef;
    int _rotation;
    int _dstWidth;
    int _dstHeight;
    int _trackID;
    int _flags;
    int _srcWidth;
    int _srcHeight;
    struct __CVBuffer *_pixelBuffer;
    long long _ptsMS;
    char **_data;
    int *_linesize;
    long long _format;
    struct TPFrame *_frame;
}

@property(nonatomic) _Bool dataRef; // @synthesize dataRef=_dataRef;
@property(nonatomic) struct TPFrame *frame; // @synthesize frame=_frame;
@property(nonatomic) int srcHeight; // @synthesize srcHeight=_srcHeight;
@property(nonatomic) int srcWidth; // @synthesize srcWidth=_srcWidth;
@property(nonatomic) long long format; // @synthesize format=_format;
@property(nonatomic) int *linesize; // @synthesize linesize=_linesize;
@property(nonatomic) char **data; // @synthesize data=_data;
@property(nonatomic) int flags; // @synthesize flags=_flags;
@property(nonatomic) int trackID; // @synthesize trackID=_trackID;
@property(nonatomic) long long ptsMS; // @synthesize ptsMS=_ptsMS;
@property(nonatomic) int dstHeight; // @synthesize dstHeight=_dstHeight;
@property(nonatomic) int dstWidth; // @synthesize dstWidth=_dstWidth;
@property(nonatomic) int rotation; // @synthesize rotation=_rotation;
@property(nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
- (void)dealloc;
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1 trackID:(int)arg2 andFlags:(int)arg3;
- (id)initWithTPFrame:(void *)arg1 trackID:(int)arg2 andFlags:(int)arg3;
- (id)init;

@end

