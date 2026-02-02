//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, YtExtraOptions, YtFaceFrameInfo;

@interface YtReflectReqData : NSObject
{
    float _lux;
    int _backendProtoType;
    int _cpNum;
    NSString *_rgbConfig;
    NSString *_appId;
    NSString *_sessionId;
    YtFaceFrameInfo *_eyeImage;
    YtFaceFrameInfo *_mouthImage;
    NSString *_version;
    NSString *_extraConfig;
    YtExtraOptions *_extraOptions;
    YtFaceFrameInfo *_bestImage;
    struct YTFullPack _fullDataPack;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain) YtFaceFrameInfo *bestImage; // @synthesize bestImage=_bestImage;
@property(retain) YtExtraOptions *extraOptions; // @synthesize extraOptions=_extraOptions;
@property(retain) NSString *extraConfig; // @synthesize extraConfig=_extraConfig;
@property int cpNum; // @synthesize cpNum=_cpNum;
@property int backendProtoType; // @synthesize backendProtoType=_backendProtoType;
@property(retain) NSString *version; // @synthesize version=_version;
@property float lux; // @synthesize lux=_lux;
@property(retain) YtFaceFrameInfo *mouthImage; // @synthesize mouthImage=_mouthImage;
@property(retain) YtFaceFrameInfo *eyeImage; // @synthesize eyeImage=_eyeImage;
@property(retain) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain) NSString *appId; // @synthesize appId=_appId;
@property(retain) NSString *rgbConfig; // @synthesize rgbConfig=_rgbConfig;
@property struct YTFullPack fullDataPack; // @synthesize fullDataPack=_fullDataPack;

@end

