//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MMTimeAverageData : NSObject
{
    NSMutableArray *_allRecord;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *allRecord; // @synthesize allRecord=_allRecord;
- (void)addRawDataToStr:(id)arg1 dict:(id)arg2 sortedArray:(id)arg3;
- (id)stringWithDict:(id)arg1;
- (id)numberObject:(id)arg1;
- (id)averageDictFromArray:(id)arg1;
- (id)firstDict;
- (id)averageDictExceptFirst;
- (id)averageDict;
- (void)addRecord:(id)arg1;
- (id)init;

@end

