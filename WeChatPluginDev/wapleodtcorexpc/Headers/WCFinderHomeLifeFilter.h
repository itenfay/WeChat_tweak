//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSNumber;

@interface WCFinderHomeLifeFilter : NSObject
{
    NSArray *_filterGroup;
    NSNumber *_hashValue;
}

+ (id)filterWithPath:(id)arg1;
+ (id)filterWithPathArray:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *hashValue; // @synthesize hashValue=_hashValue;
@property(retain, nonatomic) NSArray *filterGroup; // @synthesize filterGroup=_filterGroup;
- (id)description;
- (_Bool)isEqualToFilter:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

