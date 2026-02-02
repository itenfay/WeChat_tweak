//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface BizRecFollowActionInfo : NSObject
{
    NSString *_username;
    long long _scene;
    NSString *_articleUrl;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithUsername:(id)arg1 scene:(long long)arg2 articleUrl:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *articleUrl; // @synthesize articleUrl=_articleUrl;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (id)toList;

@end

