//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface V2TXLiveVideoEncoderParam : NSObject
{
    int _videoFps;
    int _videoBitrate;
    int _minVideoBitrate;
    long long _videoResolution;
    long long _videoResolutionMode;
}

@property(nonatomic) int minVideoBitrate; // @synthesize minVideoBitrate=_minVideoBitrate;
@property(nonatomic) int videoBitrate; // @synthesize videoBitrate=_videoBitrate;
@property(nonatomic) int videoFps; // @synthesize videoFps=_videoFps;
@property(nonatomic) long long videoResolutionMode; // @synthesize videoResolutionMode=_videoResolutionMode;
@property(nonatomic) long long videoResolution; // @synthesize videoResolution=_videoResolution;
- (id)description;
- (void)configWith:(long long)arg1;
- (id)initWith:(long long)arg1;
- (id)init;

@end

