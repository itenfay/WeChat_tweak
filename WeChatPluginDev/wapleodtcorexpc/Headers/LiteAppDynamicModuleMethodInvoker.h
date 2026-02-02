//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSInvocation, NSString;

@interface LiteAppDynamicModuleMethodInvoker : NSObject
{
    _Bool _isFromView;
    unsigned int _appUuid;
    NSString *_appId;
    id _target;
    NSInvocation *_invocation;
}

+ (id)invokerWithInstance:(id)arg1 method:(id)arg2;
+ (id)invokerWithClass:(id)arg1 method:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSInvocation *invocation; // @synthesize invocation=_invocation;
@property(retain, nonatomic) id target; // @synthesize target=_target;
@property(nonatomic) _Bool isFromView; // @synthesize isFromView=_isFromView;
@property(nonatomic) unsigned int appUuid; // @synthesize appUuid=_appUuid;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (_Bool)isJsonString:(id)arg1;
- (id)getReturnValue;
- (void)invoke;
- (void)setArguments:(id)arg1;
- (void)setViewController:(id)arg1;
- (void)setCallback:(id)arg1;

@end

