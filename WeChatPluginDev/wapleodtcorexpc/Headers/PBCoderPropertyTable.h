//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PBCoderPropertyTable : NSObject
{
    NSMutableArray *arrayWrap;
    struct map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> mapTagToIndex;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (const void *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)init;

@end

