//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderVideoBasisModel : NSObject
{
    _Bool _isHDR;
    unsigned int _videoCodecType;
    NSString *_videoFormat;
    unsigned long long _bitrate;
    unsigned long long _frameRate;
    unsigned long long _audioTrackNum;
    double _videoFileSize;
    struct CGSize _videoResolution;
}

- (void).cxx_destruct;
@property(nonatomic) double videoFileSize; // @synthesize videoFileSize=_videoFileSize;
@property(nonatomic) unsigned long long audioTrackNum; // @synthesize audioTrackNum=_audioTrackNum;
@property(nonatomic) unsigned long long frameRate; // @synthesize frameRate=_frameRate;
@property(nonatomic) unsigned long long bitrate; // @synthesize bitrate=_bitrate;
@property(nonatomic) struct CGSize videoResolution; // @synthesize videoResolution=_videoResolution;
@property(nonatomic) unsigned int videoCodecType; // @synthesize videoCodecType=_videoCodecType;
@property(nonatomic) _Bool isHDR; // @synthesize isHDR=_isHDR;
@property(copy, nonatomic) NSString *videoFormat; // @synthesize videoFormat=_videoFormat;

@end

