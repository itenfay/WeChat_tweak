//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ILinkParams : NSObject
{
    _Bool _enableCustomAudio;
    unsigned int _wxUin;
    NSString *_wxUserName;
    NSString *_sdkAppId;
    NSString *_sdkGroupId;
    NSString *_rtmpUrl;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enableCustomAudio; // @synthesize enableCustomAudio=_enableCustomAudio;
@property(copy, nonatomic) NSString *rtmpUrl; // @synthesize rtmpUrl=_rtmpUrl;
@property(copy, nonatomic) NSString *sdkGroupId; // @synthesize sdkGroupId=_sdkGroupId;
@property(copy, nonatomic) NSString *sdkAppId; // @synthesize sdkAppId=_sdkAppId;
@property(copy, nonatomic) NSString *wxUserName; // @synthesize wxUserName=_wxUserName;
@property(nonatomic) unsigned int wxUin; // @synthesize wxUin=_wxUin;

@end

