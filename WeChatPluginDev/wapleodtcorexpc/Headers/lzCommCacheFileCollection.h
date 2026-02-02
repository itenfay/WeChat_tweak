//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface lzCommCacheFileCollection : NSObject
{
    NSMutableArray *_fileList;
    long long _totalSize;
    NSMutableArray *_expfileList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *expfileList; // @synthesize expfileList=_expfileList;
@property(nonatomic) long long totalSize; // @synthesize totalSize=_totalSize;
@property(retain, nonatomic) NSMutableArray *fileList; // @synthesize fileList=_fileList;
- (id)sortByDate;
- (void)dealloc;
- (id)init;

@end

