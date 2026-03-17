//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiveVideoCloudMixtureParams : NSObject
{
    int _videoWidth;
    int _videoHeight;
    int _subWidth;
    int _subHeight;
    int _bitrate;
    int _offsetX;
    int _offsetY;
    int _videoFps;
}

@property(nonatomic) int videoFps; // @synthesize videoFps=_videoFps;
@property(nonatomic) int offsetY; // @synthesize offsetY=_offsetY;
@property(nonatomic) int offsetX; // @synthesize offsetX=_offsetX;
@property(nonatomic) int bitrate; // @synthesize bitrate=_bitrate;
@property(nonatomic) int subHeight; // @synthesize subHeight=_subHeight;
@property(nonatomic) int subWidth; // @synthesize subWidth=_subWidth;
@property(nonatomic) int videoHeight; // @synthesize videoHeight=_videoHeight;
@property(nonatomic) int videoWidth; // @synthesize videoWidth=_videoWidth;

@end

