//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TextState3rdPartyLiveCache : NSObject
{
    NSMutableDictionary *_cache;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end

