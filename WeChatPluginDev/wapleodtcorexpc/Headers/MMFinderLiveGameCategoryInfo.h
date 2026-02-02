//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MMFinderLiveGameCategoryInfo : NSObject
{
    _Bool _hasNext;
    unsigned int _categoryId;
    unsigned int _tabId;
    NSString *_categoryName;
    NSArray *_gameAppInfoList;
    NSString *_queryBuffer;
    NSString *_tabName;
}

+ (id)changeArrayWithGameCategoryInfoList:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *tabName; // @synthesize tabName=_tabName;
@property(nonatomic) unsigned int tabId; // @synthesize tabId=_tabId;
@property(retain, nonatomic) NSString *queryBuffer; // @synthesize queryBuffer=_queryBuffer;
@property(nonatomic) _Bool hasNext; // @synthesize hasNext=_hasNext;
@property(copy, nonatomic) NSArray *gameAppInfoList; // @synthesize gameAppInfoList=_gameAppInfoList;
@property(retain, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(nonatomic) unsigned int categoryId; // @synthesize categoryId=_categoryId;
- (void)copyFromPBItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateWithLiveGameCategoryInfo:(id)arg1 fetchMore:(_Bool)arg2;
- (id)initWithPBItem:(id)arg1;

@end

