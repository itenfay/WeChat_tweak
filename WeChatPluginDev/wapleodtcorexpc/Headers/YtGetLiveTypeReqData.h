//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, YtExtraOptions;

@interface YtGetLiveTypeReqData : NSObject
{
    float _luxScore;
    int _cpNum;
    NSString *_appId;
    NSString *_extraConfig;
    NSString *_clientVersion;
    YtExtraOptions *_extraOptions;
    NSString *_controlConfig;
}

- (void).cxx_destruct;
@property(retain) NSString *controlConfig; // @synthesize controlConfig=_controlConfig;
@property(retain) YtExtraOptions *extraOptions; // @synthesize extraOptions=_extraOptions;
@property(retain) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain) NSString *extraConfig; // @synthesize extraConfig=_extraConfig;
@property int cpNum; // @synthesize cpNum=_cpNum;
@property float luxScore; // @synthesize luxScore=_luxScore;
@property(retain) NSString *appId; // @synthesize appId=_appId;

@end

