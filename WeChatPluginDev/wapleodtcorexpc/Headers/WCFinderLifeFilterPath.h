//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, WCFinderLifeFilterTag;

@interface WCFinderLifeFilterPath : NSObject
{
    long long _level;
    NSArray *_tags;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(nonatomic) long long level; // @synthesize level=_level;
- (id)tagEnumerator;
- (id)description;
@property(readonly, nonatomic) WCFinderLifeFilterTag *lastTag;
- (void)enumerateTabId:(CDUnknownBlockType)arg1;
- (_Bool)isEqualToPath:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

