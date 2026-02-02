//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface GiftAttackRenderScriptObj : NSObject
{
    long long _scriptId;
    NSString *_resourcePath;
    long long _state;
}

- (void).cxx_destruct;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *resourcePath; // @synthesize resourcePath=_resourcePath;
@property(nonatomic) long long scriptId; // @synthesize scriptId=_scriptId;
- (_Bool)isValid;
- (id)initWithEmptyScript;
- (id)initWithScriptId:(long long)arg1 resPath:(id)arg2;

@end

