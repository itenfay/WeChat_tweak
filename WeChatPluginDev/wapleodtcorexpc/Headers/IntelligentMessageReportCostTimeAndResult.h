//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface IntelligentMessageReportCostTimeAndResult
{
    _Bool _m_isSearchStartHadPriorityBuildIndex;
    _Bool _m_isHadReportSearchResult;
    NSString *_m_searchSessionId;
    NSString *_m_searchText;
    unsigned long long _m_searchStartTime;
    unsigned long long _m_searchEndTime;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_isHadReportSearchResult; // @synthesize m_isHadReportSearchResult=_m_isHadReportSearchResult;
@property(nonatomic) _Bool m_isSearchStartHadPriorityBuildIndex; // @synthesize m_isSearchStartHadPriorityBuildIndex=_m_isSearchStartHadPriorityBuildIndex;
@property(nonatomic) unsigned long long m_searchEndTime; // @synthesize m_searchEndTime=_m_searchEndTime;
@property(nonatomic) unsigned long long m_searchStartTime; // @synthesize m_searchStartTime=_m_searchStartTime;
@property(retain, nonatomic) NSString *m_searchText; // @synthesize m_searchText=_m_searchText;
@property(retain, nonatomic) NSString *m_searchSessionId; // @synthesize m_searchSessionId=_m_searchSessionId;

@end

