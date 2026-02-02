//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCHotwordConfiguration : NSObject
{
    long long _scene;
    NSString *_hotword;
}

+ (id)configurationWithFinderHotwordConfiguration:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *hotword; // @synthesize hotword=_hotword;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
- (_Bool)isValid;

@end

