//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderNpsSurveyInfo, FinderNpsSurveyQuestion, FinderNpsSurveyTaskConf, NSMutableArray, NSString;

@interface WCFinderNpsSurveyTaskDataWrap : NSObject
{
    unsigned int _surveyStatus;
    FinderNpsSurveyTaskConf *_surveyTaskConf;
    FinderNpsSurveyInfo *_surveyInfo;
    NSString *_shownInFeedID;
    NSString *_boundToFeedID;
    FinderNpsSurveyQuestion *_showingSurveyQuestion;
    NSMutableArray *_trackInfoList;
    unsigned long long _surveyShownCount;
    unsigned long long _triggerSource;
    unsigned long long _startShowTimestamp;
    unsigned long long _endShowTimestamp;
    unsigned long long _showTimestamp;
    unsigned long long _selectTimestamp;
}

+ (void)initialize;
+ (void)PBArrayAdd_boundToFeedID;
+ (void)PBArrayAdd_shownInFeedID;
+ (void)PBArrayAdd_surveyStatus;
+ (void)PBArrayAdd_surveyInfo;
+ (void)PBArrayAdd_surveyTaskConf;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long selectTimestamp; // @synthesize selectTimestamp=_selectTimestamp;
@property(nonatomic) unsigned long long showTimestamp; // @synthesize showTimestamp=_showTimestamp;
@property(nonatomic) unsigned long long endShowTimestamp; // @synthesize endShowTimestamp=_endShowTimestamp;
@property(nonatomic) unsigned long long startShowTimestamp; // @synthesize startShowTimestamp=_startShowTimestamp;
@property(nonatomic) unsigned long long triggerSource; // @synthesize triggerSource=_triggerSource;
@property(nonatomic) unsigned long long surveyShownCount; // @synthesize surveyShownCount=_surveyShownCount;
@property(retain, nonatomic) NSMutableArray *trackInfoList; // @synthesize trackInfoList=_trackInfoList;
@property(retain, nonatomic) FinderNpsSurveyQuestion *showingSurveyQuestion; // @synthesize showingSurveyQuestion=_showingSurveyQuestion;
@property(copy, nonatomic) NSString *boundToFeedID; // @synthesize boundToFeedID=_boundToFeedID;
@property(copy, nonatomic) NSString *shownInFeedID; // @synthesize shownInFeedID=_shownInFeedID;
@property(nonatomic) unsigned int surveyStatus; // @synthesize surveyStatus=_surveyStatus;
@property(retain, nonatomic) FinderNpsSurveyInfo *surveyInfo; // @synthesize surveyInfo=_surveyInfo;
@property(retain, nonatomic) FinderNpsSurveyTaskConf *surveyTaskConf; // @synthesize surveyTaskConf=_surveyTaskConf;
- (id)genReportKVInfoJsonWithContextInfo:(id)arg1;
- (_Bool)isAvailableSurveyWithTriggerEvent:(long long)arg1 contextInfo:(id)arg2;
- (_Bool)isSurveyHasBoundToFeedID:(id)arg1;
- (_Bool)isSurveyHasShownInFeedID:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

