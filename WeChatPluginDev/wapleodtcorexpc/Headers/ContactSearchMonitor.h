//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface ContactSearchMonitor : NSObject
{
    unsigned int _memSearchCount;
    unsigned long long _pinyinSearchTime;
    unsigned long long _mainSearchTime;
    unsigned long long _getContentTime;
    unsigned long long _sortTime;
    unsigned long long _singleContactTime;
    unsigned long long _groupContactTime;
    unsigned long long _totalTime;
    unsigned long long _singleContactCount;
    unsigned long long _groupContactCount;
    unsigned long long _groupMemberCount;
    unsigned long long _totalContactCount;
    unsigned long long _searchWordLength;
    unsigned long long _keywordNum;
    unsigned long long _memSearchTime;
    unsigned long long _tagSearchTime;
    unsigned long long _zoneSearchTime;
    unsigned long long _multiKeywordSearchTime;
}

@property(nonatomic) unsigned long long multiKeywordSearchTime; // @synthesize multiKeywordSearchTime=_multiKeywordSearchTime;
@property(nonatomic) unsigned long long zoneSearchTime; // @synthesize zoneSearchTime=_zoneSearchTime;
@property(nonatomic) unsigned long long tagSearchTime; // @synthesize tagSearchTime=_tagSearchTime;
@property(nonatomic) unsigned long long memSearchTime; // @synthesize memSearchTime=_memSearchTime;
@property(nonatomic) unsigned int memSearchCount; // @synthesize memSearchCount=_memSearchCount;
@property(nonatomic) unsigned long long keywordNum; // @synthesize keywordNum=_keywordNum;
@property(nonatomic) unsigned long long searchWordLength; // @synthesize searchWordLength=_searchWordLength;
@property(nonatomic) unsigned long long totalContactCount; // @synthesize totalContactCount=_totalContactCount;
@property(nonatomic) unsigned long long groupMemberCount; // @synthesize groupMemberCount=_groupMemberCount;
@property(nonatomic) unsigned long long groupContactCount; // @synthesize groupContactCount=_groupContactCount;
@property(nonatomic) unsigned long long singleContactCount; // @synthesize singleContactCount=_singleContactCount;
@property(nonatomic) unsigned long long totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) unsigned long long groupContactTime; // @synthesize groupContactTime=_groupContactTime;
@property(nonatomic) unsigned long long singleContactTime; // @synthesize singleContactTime=_singleContactTime;
@property(nonatomic) unsigned long long sortTime; // @synthesize sortTime=_sortTime;
@property(nonatomic) unsigned long long getContentTime; // @synthesize getContentTime=_getContentTime;
@property(nonatomic) unsigned long long mainSearchTime; // @synthesize mainSearchTime=_mainSearchTime;
@property(nonatomic) unsigned long long pinyinSearchTime; // @synthesize pinyinSearchTime=_pinyinSearchTime;

@end

