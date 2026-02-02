//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMFinderI420Frame : NSObject
{
    struct __CFData *_cfData;
    char *_planeData[3];
    unsigned long long _stride[3];
    int _width;
    int _height;
    int _i420DataLength;
    unsigned long long _timetag;
    char *_data;
}

+ (id)initWithData:(id)arg1;
@property(readonly, nonatomic) char *data; // @synthesize data=_data;
@property(nonatomic) unsigned long long timetag; // @synthesize timetag=_timetag;
@property(readonly, nonatomic) int i420DataLength; // @synthesize i420DataLength=_i420DataLength;
@property(readonly, nonatomic) int height; // @synthesize height=_height;
@property(readonly, nonatomic) int width; // @synthesize width=_width;
- (struct opaqueCMSampleBuffer *)convertToSampleBuffer;
- (void)dealloc;
- (void)freeData;
- (unsigned long long)strideOfPlane:(unsigned long long)arg1;
- (char *)dataOfPlane:(unsigned long long)arg1;
- (id)initWithWidth:(int)arg1 height:(int)arg2;
- (id)bytes;
- (void)getBytesQueue:(CDUnknownBlockType)arg1;

@end

