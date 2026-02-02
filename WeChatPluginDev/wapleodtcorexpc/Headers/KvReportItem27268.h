//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface KvReportItem27268
{
    unsigned int _IsRetrieved_21;
    unsigned int _Style_22;
    unsigned int _RetrieveType_23;
    unsigned int _StyleInfo_26;
    unsigned int _ShowFinder_27;
    NSString *_FinderId_24;
    NSString *_feedid_25;
    NSString *_sessionid_28;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *sessionid_28; // @synthesize sessionid_28=_sessionid_28;
@property(nonatomic) unsigned int ShowFinder_27; // @synthesize ShowFinder_27=_ShowFinder_27;
@property(nonatomic) unsigned int StyleInfo_26; // @synthesize StyleInfo_26=_StyleInfo_26;
@property(copy, nonatomic) NSString *feedid_25; // @synthesize feedid_25=_feedid_25;
@property(copy, nonatomic) NSString *FinderId_24; // @synthesize FinderId_24=_FinderId_24;
@property(nonatomic) unsigned int RetrieveType_23; // @synthesize RetrieveType_23=_RetrieveType_23;
@property(nonatomic) unsigned int Style_22; // @synthesize Style_22=_Style_22;
@property(nonatomic) unsigned int IsRetrieved_21; // @synthesize IsRetrieved_21=_IsRetrieved_21;
- (id)reportOrderedFieldNameArr;
- (unsigned int)reportKvId;

@end

