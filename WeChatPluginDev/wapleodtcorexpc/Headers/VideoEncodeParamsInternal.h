//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface VideoEncodeParamsInternal : NSObject
{
    _Bool _videoOnly;
    float _frameInterval;
    float _audioBitrate;
    long long _codec;
    long long _configCount;
    struct WxVideoConfigPara *_configs;
}

@property(nonatomic) struct WxVideoConfigPara *configs; // @synthesize configs=_configs;
@property(nonatomic) long long configCount; // @synthesize configCount=_configCount;
@property(nonatomic) _Bool videoOnly; // @synthesize videoOnly=_videoOnly;
@property(nonatomic) long long codec; // @synthesize codec=_codec;
@property(nonatomic) float audioBitrate; // @synthesize audioBitrate=_audioBitrate;
@property(nonatomic) float frameInterval; // @synthesize frameInterval=_frameInterval;
- (id)description;
- (void)dealloc;

@end

