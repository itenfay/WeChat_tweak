//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface MMTListTransitionData : NSObject
{
    NSArray *_fromObjects;
    NSArray *_toObjects;
    NSArray *_toSectionControllers;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *toSectionControllers; // @synthesize toSectionControllers=_toSectionControllers;
@property(readonly, copy, nonatomic) NSArray *toObjects; // @synthesize toObjects=_toObjects;
@property(readonly, copy, nonatomic) NSArray *fromObjects; // @synthesize fromObjects=_fromObjects;
- (id)initFromObjects:(id)arg1 toObjects:(id)arg2 toSectionControllers:(id)arg3;

@end

