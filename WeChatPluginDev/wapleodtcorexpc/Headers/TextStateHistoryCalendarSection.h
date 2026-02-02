//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableIndexSet;

@interface TextStateHistoryCalendarSection : NSObject
{
    _Bool _isLastMonthOfYear;
    unsigned long long _year;
    unsigned long long _month;
    NSMutableDictionary *_keyToItemDict;
    NSMutableIndexSet *_dayIndexes;
    NSMutableDictionary *_iconIdToCountDict;
    NSMutableDictionary *_customDescriptionToCountDict;
    NSMutableArray *_itemList;
}

+ (id)identifierFromYear:(unsigned long long)arg1 month:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *itemList; // @synthesize itemList=_itemList;
@property(retain, nonatomic) NSMutableDictionary *customDescriptionToCountDict; // @synthesize customDescriptionToCountDict=_customDescriptionToCountDict;
@property(retain, nonatomic) NSMutableDictionary *iconIdToCountDict; // @synthesize iconIdToCountDict=_iconIdToCountDict;
@property(retain, nonatomic) NSMutableIndexSet *dayIndexes; // @synthesize dayIndexes=_dayIndexes;
@property(retain, nonatomic) NSMutableDictionary *keyToItemDict; // @synthesize keyToItemDict=_keyToItemDict;
@property(nonatomic) _Bool isLastMonthOfYear; // @synthesize isLastMonthOfYear=_isLastMonthOfYear;
@property(nonatomic) unsigned long long month; // @synthesize month=_month;
@property(nonatomic) unsigned long long year; // @synthesize year=_year;
- (id)itemForDay:(unsigned long long)arg1;
- (void)removeInfo:(id)arg1 itemIndex:(unsigned long long)arg2;
- (void)appendInfo:(id)arg1 day:(unsigned long long)arg2;
- (id)topUseDescription;
@property(readonly, nonatomic) struct _NSRange dayRange;
- (id)initWithYear:(unsigned long long)arg1 month:(unsigned long long)arg2;
- (id)identifier;

@end

