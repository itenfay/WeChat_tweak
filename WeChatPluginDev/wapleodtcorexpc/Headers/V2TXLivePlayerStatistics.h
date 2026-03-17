//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface V2TXLivePlayerStatistics : NSObject
{
    unsigned long long _appCpu;
    unsigned long long _systemCpu;
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _fps;
    unsigned long long _videoBitrate;
    unsigned long long _audioBitrate;
}

@property(nonatomic) unsigned long long audioBitrate; // @synthesize audioBitrate=_audioBitrate;
@property(nonatomic) unsigned long long videoBitrate; // @synthesize videoBitrate=_videoBitrate;
@property(nonatomic) unsigned long long fps; // @synthesize fps=_fps;
@property(nonatomic) unsigned long long height; // @synthesize height=_height;
@property(nonatomic) unsigned long long width; // @synthesize width=_width;
@property(nonatomic) unsigned long long systemCpu; // @synthesize systemCpu=_systemCpu;
@property(nonatomic) unsigned long long appCpu; // @synthesize appCpu=_appCpu;
- (id)description;

@end

