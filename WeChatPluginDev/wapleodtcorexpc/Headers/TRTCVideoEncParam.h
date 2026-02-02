//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber;

@interface TRTCVideoEncParam : NSObject
{
    _Bool _enableAdjustRes;
    int _videoFps;
    int _videoBitrate;
    int _minVideoBitrate;
    int _rcMethod;
    long long _videoResolution;
    long long _resMode;
    NSNumber *_gop;
    NSNumber *_minQP;
    NSNumber *_maxQP;
    NSNumber *_codecType;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *codecType; // @synthesize codecType=_codecType;
@property(retain, nonatomic) NSNumber *maxQP; // @synthesize maxQP=_maxQP;
@property(retain, nonatomic) NSNumber *minQP; // @synthesize minQP=_minQP;
@property(retain, nonatomic) NSNumber *gop; // @synthesize gop=_gop;
@property(nonatomic) int rcMethod; // @synthesize rcMethod=_rcMethod;
@property(nonatomic) _Bool enableAdjustRes; // @synthesize enableAdjustRes=_enableAdjustRes;
@property(nonatomic) int minVideoBitrate; // @synthesize minVideoBitrate=_minVideoBitrate;
@property(nonatomic) int videoBitrate; // @synthesize videoBitrate=_videoBitrate;
@property(nonatomic) int videoFps; // @synthesize videoFps=_videoFps;
@property(nonatomic) long long resMode; // @synthesize resMode=_resMode;
@property(nonatomic) long long videoResolution; // @synthesize videoResolution=_videoResolution;
- (id)description;
- (id)init;
- (struct CGSize)resolution;
- (struct TRTCVideoEncParams)convertToCppParams;

@end

