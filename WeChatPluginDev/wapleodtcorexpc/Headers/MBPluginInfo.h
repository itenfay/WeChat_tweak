//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MBPluginInfo : NSObject
{
    NSString *_alias;
    NSString *_provider;
    NSString *_version;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *provider; // @synthesize provider=_provider;
@property(copy, nonatomic) NSString *alias; // @synthesize alias=_alias;
- (id)description;

@end

