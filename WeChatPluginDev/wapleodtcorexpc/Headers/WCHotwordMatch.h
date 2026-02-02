//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCHotwordMatch : NSObject
{
    long long _scene;
    NSString *_hotword;
}

+ (id)hotwordMatchFromURLString:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *hotword; // @synthesize hotword=_hotword;
@property(readonly, nonatomic) long long scene; // @synthesize scene=_scene;
- (id)generateURLString;
- (_Bool)isValid;
- (id)initWithScene:(long long)arg1 hotword:(id)arg2;

@end

