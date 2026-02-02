//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MMBifrost : NSObject
{
    NSMutableDictionary *_trackCacheDict;
}

+ (id)_trackCacheKeyWithProtocolName:(id)arg1 selector:(id)arg2;
+ (id)responderTargetsForSource:(id)arg1 protocol:(id)arg2 selector:(SEL)arg3;
+ (id)trackForProtocolName:(id)arg1 selectorName:(id)arg2;
+ (void)cacheTrack:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *trackCacheDict; // @synthesize trackCacheDict=_trackCacheDict;

@end

