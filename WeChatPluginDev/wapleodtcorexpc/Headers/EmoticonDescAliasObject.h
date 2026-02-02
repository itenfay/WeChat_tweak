//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;

@interface EmoticonDescAliasObject : NSObject
{
    int _resultCacheVersion;
    NSSet *_descList;
    NSMutableSet *_resultCache;
}

- (void).cxx_destruct;
@property(nonatomic) int resultCacheVersion; // @synthesize resultCacheVersion=_resultCacheVersion;
@property(retain, nonatomic) NSMutableSet *resultCache; // @synthesize resultCache=_resultCache;
@property(retain, nonatomic) NSSet *descList; // @synthesize descList=_descList;

@end

