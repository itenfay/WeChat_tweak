//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderReplayKitVideoDecoder, NSData;

@interface MMFinderRecordVideoFrame : NSObject
{
    unsigned int _pts;
    unsigned int _dts;
    unsigned int _width;
    unsigned int _height;
    struct __CVBuffer *_pixelBuffer;
    NSData *_encodedData;
    NSData *_sps;
    NSData *_pps;
    long long _bitDeth;
    long long _videoFullRangeFlag;
    long long _videoFrameId;
    MMFinderReplayKitVideoDecoder *_decoder;
    long long _frameType;
    CDStruct_1b6d18a9 _dtsTime;
    CDStruct_1b6d18a9 _ptsTime;
}

- (void).cxx_destruct;
@property(nonatomic) long long frameType; // @synthesize frameType=_frameType;
@property(retain, nonatomic) MMFinderReplayKitVideoDecoder *decoder; // @synthesize decoder=_decoder;
@property(nonatomic) long long videoFrameId; // @synthesize videoFrameId=_videoFrameId;
@property(nonatomic) long long videoFullRangeFlag; // @synthesize videoFullRangeFlag=_videoFullRangeFlag;
@property(nonatomic) long long bitDeth; // @synthesize bitDeth=_bitDeth;
@property(nonatomic) unsigned int height; // @synthesize height=_height;
@property(nonatomic) unsigned int width; // @synthesize width=_width;
@property(retain, nonatomic) NSData *pps; // @synthesize pps=_pps;
@property(retain, nonatomic) NSData *sps; // @synthesize sps=_sps;
@property(nonatomic) unsigned int dts; // @synthesize dts=_dts;
@property(nonatomic) unsigned int pts; // @synthesize pts=_pts;
@property(nonatomic) CDStruct_1b6d18a9 ptsTime; // @synthesize ptsTime=_ptsTime;
@property(nonatomic) CDStruct_1b6d18a9 dtsTime; // @synthesize dtsTime=_dtsTime;
@property(retain, nonatomic) NSData *encodedData; // @synthesize encodedData=_encodedData;
@property(nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;

@end

