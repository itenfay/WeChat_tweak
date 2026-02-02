//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;

@interface WCFinderJSApiPreloadFeedTask : NSObject
{
    NSMutableSet *_pending;
    NSSet *_faileds;
    NSSet *_fetching;
    CDUnknownBlockType _complete;
}

+ (id)taskWithIds:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType complete; // @synthesize complete=_complete;
@property(retain, nonatomic) NSSet *fetching; // @synthesize fetching=_fetching;
@property(retain, nonatomic) NSSet *faileds; // @synthesize faileds=_faileds;
@property(retain, nonatomic) NSMutableSet *pending; // @synthesize pending=_pending;

@end

