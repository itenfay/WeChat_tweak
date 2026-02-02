//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderJumpNativeTemplateSearchParams : NSObject
{
    NSString *_query;
    unsigned long long _scene;
    NSString *_params;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *params; // @synthesize params=_params;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;

@end

