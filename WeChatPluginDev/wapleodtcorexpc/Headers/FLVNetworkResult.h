//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface FLVNetworkResult : NSObject
{
    unsigned int _videoQualityLevel;
    unsigned int _avgSpeed;
    unsigned int _avgFps;
    long long _networkQuality;
}

@property(nonatomic) long long networkQuality; // @synthesize networkQuality=_networkQuality;
@property(nonatomic) unsigned int avgFps; // @synthesize avgFps=_avgFps;
@property(nonatomic) unsigned int avgSpeed; // @synthesize avgSpeed=_avgSpeed;
@property(nonatomic) unsigned int videoQualityLevel; // @synthesize videoQualityLevel=_videoQualityLevel;

@end

