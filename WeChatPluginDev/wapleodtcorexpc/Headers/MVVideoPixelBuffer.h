//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MAVVLogInputTexture;

@interface MVVideoPixelBuffer : NSObject
{
    unsigned long long _type;
    struct __CVBuffer *_cvPixelBuffer;
    long long _rotate;
    double _createTimeStamp;
    long long _pts;
    long long _videoId;
    long long _originalPts;
    MAVVLogInputTexture *_inputTexture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MAVVLogInputTexture *inputTexture; // @synthesize inputTexture=_inputTexture;
@property(nonatomic) long long originalPts; // @synthesize originalPts=_originalPts;
@property(nonatomic) long long videoId; // @synthesize videoId=_videoId;
@property(nonatomic) long long pts; // @synthesize pts=_pts;
@property(nonatomic) double createTimeStamp; // @synthesize createTimeStamp=_createTimeStamp;
@property(nonatomic) long long rotate; // @synthesize rotate=_rotate;
@property(nonatomic) struct __CVBuffer *cvPixelBuffer; // @synthesize cvPixelBuffer=_cvPixelBuffer;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)initWithCvPixelBuffer:(struct __CVBuffer *)arg1;
- (void)dealloc;

@end

