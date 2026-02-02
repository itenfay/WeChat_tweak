//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CalendarInfo, NSMutableArray, NSString;

@interface CalendarStatisticsArgs
{
    _Bool isEnterFinderWithRedDot;
    unsigned int _dropRedDotCount;
    unsigned int _deepReadCount;
    unsigned int _lastEnterFinderTimeSec;
    unsigned int _lastExitFinderTimeSec;
    unsigned int _lastFinderVvCount;
    CalendarInfo *_discoverInfo;
    CalendarInfo *_finderInfo;
    CalendarInfo *_liveInfo;
    NSMutableArray *_finderExposeTimeArray;
    NSMutableArray *_liveExposeTimeArray;
}

+ (id)loadFromMMKV;
+ (void)initialize;
+ (void)PBArrayAdd_lastFinderVvCount;
+ (void)PBArrayAdd_lastExitFinderTimeSec;
+ (void)PBArrayAdd_lastEnterFinderTimeSec;
+ (void)PBArrayAdd_deepReadCount;
+ (void)PBArrayAdd_dropRedDotCount;
+ (void)PBArrayAdd_liveExposeTimeArray;
+ (void)PBArrayAdd_finderExposeTimeArray;
+ (void)PBArrayAdd_liveInfo;
+ (void)PBArrayAdd_finderInfo;
+ (void)PBArrayAdd_discoverInfo;
- (void).cxx_destruct;
@property(nonatomic) unsigned int lastFinderVvCount; // @synthesize lastFinderVvCount=_lastFinderVvCount;
@property(nonatomic) unsigned int lastExitFinderTimeSec; // @synthesize lastExitFinderTimeSec=_lastExitFinderTimeSec;
@property(nonatomic) unsigned int lastEnterFinderTimeSec; // @synthesize lastEnterFinderTimeSec=_lastEnterFinderTimeSec;
@property(nonatomic) unsigned int deepReadCount; // @synthesize deepReadCount=_deepReadCount;
@property(nonatomic) unsigned int dropRedDotCount; // @synthesize dropRedDotCount=_dropRedDotCount;
@property(retain, nonatomic) NSMutableArray *liveExposeTimeArray; // @synthesize liveExposeTimeArray=_liveExposeTimeArray;
@property(retain, nonatomic) NSMutableArray *finderExposeTimeArray; // @synthesize finderExposeTimeArray=_finderExposeTimeArray;
@property(retain, nonatomic) CalendarInfo *liveInfo; // @synthesize liveInfo=_liveInfo;
@property(retain, nonatomic) CalendarInfo *finderInfo; // @synthesize finderInfo=_finderInfo;
@property(retain, nonatomic) CalendarInfo *discoverInfo; // @synthesize discoverInfo=_discoverInfo;
- (unsigned int)genDayStr:(unsigned long long)arg1;
- (void)quitFindFriendEntryController:(id)arg1 andNext:(id)arg2 andStayTimeMs:(unsigned long long)arg3;
- (void)enterFindFriendEntryController:(id)arg1 andStayTimeMs:(unsigned long long)arg2;
- (void)checkToNoteFinderEnterTime:(unsigned int)arg1 andExitTime:(unsigned int)arg2;
- (void)save;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

