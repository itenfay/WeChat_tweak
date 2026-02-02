//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAAppTaskKillInfo : NSObject
{
    unsigned int _killReason;
    NSString *_appid;
    unsigned long long _killTimeStampInMs;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long killTimeStampInMs; // @synthesize killTimeStampInMs=_killTimeStampInMs;
@property(nonatomic) unsigned int killReason; // @synthesize killReason=_killReason;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;

@end

