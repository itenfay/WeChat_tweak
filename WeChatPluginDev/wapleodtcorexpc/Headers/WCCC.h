//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCCC : NSObject
{
}

+ (id)usedIndexesWithCollectionOfPath:(id)arg1;
+ (id)collectionBlocks;
+ (id)collectionBlocksFromUsedsData:(id)arg1;
+ (_Bool)isCoveredWithIndex:(unsigned long long)arg1 inUsedsData:(id)arg2;
+ (_Bool)isValidWithIndex:(unsigned long long)arg1 inUsedsData:(id)arg2;
+ (id)usedsData:(id)arg1 byExcludingUsedsData:(id)arg2;
+ (id)usedsData:(id)arg1 byIncludingUsedIndexes:(id)arg2;
+ (id)usedsData:(id)arg1 byIncludingUsedsData:(id)arg2;
+ (id)usedsData;
+ (id)usedsDataFromPtr:(const _Bool *)arg1 count:(unsigned long long)arg2;

@end

