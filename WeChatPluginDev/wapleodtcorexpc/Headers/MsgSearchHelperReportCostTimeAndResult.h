//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MsgSearchHelperReportCostTimeAndResult
{
    _Bool _isSearchStartHadPriorityBuildIndex;
    _Bool _isHadReportSearchResult;
    unsigned long long _searchStartTime;
    unsigned long long _searchEndTime;
}

@property(nonatomic) _Bool isHadReportSearchResult; // @synthesize isHadReportSearchResult=_isHadReportSearchResult;
@property(nonatomic) _Bool isSearchStartHadPriorityBuildIndex; // @synthesize isSearchStartHadPriorityBuildIndex=_isSearchStartHadPriorityBuildIndex;
@property(nonatomic) unsigned long long searchEndTime; // @synthesize searchEndTime=_searchEndTime;
@property(nonatomic) unsigned long long searchStartTime; // @synthesize searchStartTime=_searchStartTime;
- (void)copyFromOtherObject:(id)arg1;

@end

