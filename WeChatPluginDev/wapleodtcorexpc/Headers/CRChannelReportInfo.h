//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface CRChannelReportInfo : NSObject
{
    NSString *_channel;
    NSString *_channelVersion;
    long long _sceneID;
    NSString *_uinType;
    NSString *_uin;
    NSString *_gameAppID;
    NSString *_scenePopTime;
    NSString *_packageID;
    NSString *_deviceID;
    NSString *_extra;
    NSString *_appID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(copy, nonatomic) NSString *extra; // @synthesize extra=_extra;
@property(copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(copy, nonatomic) NSString *packageID; // @synthesize packageID=_packageID;
@property(copy, nonatomic) NSString *scenePopTime; // @synthesize scenePopTime=_scenePopTime;
@property(copy, nonatomic) NSString *gameAppID; // @synthesize gameAppID=_gameAppID;
@property(copy, nonatomic) NSString *uin; // @synthesize uin=_uin;
@property(copy, nonatomic) NSString *uinType; // @synthesize uinType=_uinType;
@property(nonatomic) long long sceneID; // @synthesize sceneID=_sceneID;
@property(copy, nonatomic) NSString *channelVersion; // @synthesize channelVersion=_channelVersion;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
- (id)description;
- (id)toDictionary;

@end

