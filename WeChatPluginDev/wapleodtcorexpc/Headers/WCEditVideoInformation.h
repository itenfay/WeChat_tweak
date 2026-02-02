//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCEditVideoInformation : NSObject
{
    double _videoBitrate;
    double _videoFramerate;
    double _videoDuration;
    double _videoWidth;
    double _videoHeight;
    double _audioBitrate;
    unsigned long long _audioChannels;
    unsigned long long _fileSize;
    unsigned long long _codecType;
}

@property(nonatomic) unsigned long long codecType; // @synthesize codecType=_codecType;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) unsigned long long audioChannels; // @synthesize audioChannels=_audioChannels;
@property(nonatomic) double audioBitrate; // @synthesize audioBitrate=_audioBitrate;
@property(nonatomic) double videoHeight; // @synthesize videoHeight=_videoHeight;
@property(nonatomic) double videoWidth; // @synthesize videoWidth=_videoWidth;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) double videoFramerate; // @synthesize videoFramerate=_videoFramerate;
@property(nonatomic) double videoBitrate; // @synthesize videoBitrate=_videoBitrate;
- (id)toReportStr;

@end

