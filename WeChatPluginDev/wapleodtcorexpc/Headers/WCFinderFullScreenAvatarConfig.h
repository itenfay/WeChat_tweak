//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderFullScreenAvatarConfig : NSObject
{
    unsigned long long _configFlag;
}

+ (id)defaultConfig;
@property(nonatomic) unsigned long long configFlag; // @synthesize configFlag=_configFlag;

@end

