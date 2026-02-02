//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSCalendar, NSMutableArray, NSMutableDictionary;

@interface TextStateHistoryCalendar : NSObject
{
    unsigned long long _currentYear;
    NSCalendar *_calendar;
    NSMutableArray *_privateSectionList;
    NSMutableDictionary *_idToSectionDict;
    NSMutableArray *_privateDayList;
    NSMutableDictionary *_idToDayDict;
    NSMutableDictionary *_idToInfoDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *idToInfoDict; // @synthesize idToInfoDict=_idToInfoDict;
@property(retain, nonatomic) NSMutableDictionary *idToDayDict; // @synthesize idToDayDict=_idToDayDict;
@property(retain, nonatomic) NSMutableArray *privateDayList; // @synthesize privateDayList=_privateDayList;
@property(retain, nonatomic) NSMutableDictionary *idToSectionDict; // @synthesize idToSectionDict=_idToSectionDict;
@property(retain, nonatomic) NSMutableArray *privateSectionList; // @synthesize privateSectionList=_privateSectionList;
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(nonatomic) unsigned long long currentYear; // @synthesize currentYear=_currentYear;
- (id)infoForTextStateId:(id)arg1;
- (void)removeHistoryInfo:(id)arg1;
- (id)historyInfoForIndexPath:(id)arg1;
- (id)indexPathFromHistoryInfo:(id)arg1;
- (unsigned long long)dayIndexFromHistoryInfo:(id)arg1;
- (id)dayFromHistoryInfo:(id)arg1;
- (id)dayList;
- (id)sectionList;
- (void)updateSections;
- (void)appendHistoryInfoList:(id)arg1 isNew:(_Bool)arg2;
- (void)appendHistoryInfoList:(id)arg1;
- (id)init;

@end

