//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TimelineRequestInterceptor : NSObject
{
    NSMutableDictionary *_interceptors;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *interceptors; // @synthesize interceptors=_interceptors;
- (void)registerInterceptor:(id)arg1;
- (void)intercept:(id)arg1;
- (id)init;

@end

