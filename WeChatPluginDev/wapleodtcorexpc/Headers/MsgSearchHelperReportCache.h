//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface MsgSearchHelperReportCache
{
    _Bool _isHadReportSearch;
    NSString *_searchSessionId;
    NSString *_query;
    unsigned long long _buildIndexStartTime;
    unsigned long long _buildIndexEndTime;
    NSMutableDictionary *_dicReportCostTimeAndResult;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isHadReportSearch; // @synthesize isHadReportSearch=_isHadReportSearch;
@property(retain, nonatomic) NSMutableDictionary *dicReportCostTimeAndResult; // @synthesize dicReportCostTimeAndResult=_dicReportCostTimeAndResult;
@property(nonatomic) unsigned long long buildIndexEndTime; // @synthesize buildIndexEndTime=_buildIndexEndTime;
@property(nonatomic) unsigned long long buildIndexStartTime; // @synthesize buildIndexStartTime=_buildIndexStartTime;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) NSString *searchSessionId; // @synthesize searchSessionId=_searchSessionId;
- (id)getReportCostTimeAndResultWithMsgSearchType:(unsigned int)arg1;

@end

