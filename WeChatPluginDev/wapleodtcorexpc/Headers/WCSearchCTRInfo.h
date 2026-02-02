//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface WCSearchCTRInfo : NSObject
{
    _Bool _hasSearchDone;
    _Bool _hasSearchResult;
    _Bool _isVoiceInput;
    unsigned long long _start;
    unsigned long long _end;
    long long _si64SessionId;
    long long _si64SearchId;
    NSString *_query;
    NSMutableArray *_arrClickType;
    NSMutableDictionary *_dicItemStatus;
    NSMutableDictionary *_dicSectionCount;
    NSMutableSet *_disableSectionSet;
    NSString *_pardusDocId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *pardusDocId; // @synthesize pardusDocId=_pardusDocId;
@property(nonatomic) _Bool isVoiceInput; // @synthesize isVoiceInput=_isVoiceInput;
@property(nonatomic) _Bool hasSearchResult; // @synthesize hasSearchResult=_hasSearchResult;
@property(nonatomic) _Bool hasSearchDone; // @synthesize hasSearchDone=_hasSearchDone;
@property(retain, nonatomic) NSMutableSet *disableSectionSet; // @synthesize disableSectionSet=_disableSectionSet;
@property(retain, nonatomic) NSMutableDictionary *dicSectionCount; // @synthesize dicSectionCount=_dicSectionCount;
@property(retain, nonatomic) NSMutableDictionary *dicItemStatus; // @synthesize dicItemStatus=_dicItemStatus;
@property(retain, nonatomic) NSMutableArray *arrClickType; // @synthesize arrClickType=_arrClickType;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(nonatomic) long long si64SearchId; // @synthesize si64SearchId=_si64SearchId;
@property(nonatomic) long long si64SessionId; // @synthesize si64SessionId=_si64SessionId;
@property(nonatomic) unsigned long long end; // @synthesize end=_end;
@property(nonatomic) unsigned long long start; // @synthesize start=_start;
- (_Bool)isDisabledItemKey:(id)arg1;
- (id)safeKVString:(id)arg1;
- (id)genLogString;
- (void)finishAllSearch;
- (void)doClick:(unsigned int)arg1;
- (void)disableSection:(unsigned int)arg1;
- (void)exposeSection:(unsigned int)arg1 index:(unsigned int)arg2 subType:(unsigned int)arg3 itemUserName:(id)arg4;
- (void)exposeSection:(unsigned int)arg1 index:(unsigned int)arg2 subType:(unsigned int)arg3;
- (void)exposeSection:(unsigned int)arg1 index:(unsigned int)arg2 itemUserName:(id)arg3;
- (void)exposeSection:(unsigned int)arg1 index:(unsigned int)arg2;
- (void)exposeSection:(unsigned int)arg1 index:(unsigned int)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)showSection:(unsigned int)arg1 index:(unsigned int)arg2 withHandler:(CDUnknownBlockType)arg3;
- (id)sortedStatusKeys;
- (void)countSectionItems;

@end

