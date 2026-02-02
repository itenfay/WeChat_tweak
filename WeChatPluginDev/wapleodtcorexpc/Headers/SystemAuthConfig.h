//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface SystemAuthConfig : NSObject
{
    NSDictionary *_webSceneMap;
    unsigned long long _version;
}

@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(retain, nonatomic) NSDictionary *webSceneMap; // @synthesize webSceneMap=_webSceneMap;
- (id)initWithFile:(id)arg1;

@end

