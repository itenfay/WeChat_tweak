//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderClientStatus, NSArray, NSString;

@interface WCFinderStatsReportCGI
{
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
    NSArray *_statsArray;
    unsigned long long _reportScene;
    FinderClientStatus *_status;
    NSArray *_feedIdArray;
    NSString *_extraKey;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *extraKey; // @synthesize extraKey=_extraKey;
@property(retain, nonatomic) NSArray *feedIdArray; // @synthesize feedIdArray=_feedIdArray;
@property(retain, nonatomic) FinderClientStatus *status; // @synthesize status=_status;
@property(nonatomic) unsigned long long reportScene; // @synthesize reportScene=_reportScene;
@property(copy, nonatomic) NSArray *statsArray; // @synthesize statsArray=_statsArray;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithStatsArray:(id)arg1 reportScene:(unsigned long long)arg2 extraKey:(id)arg3 clientStatus:(id)arg4 feedIdArray:(id)arg5 successful:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;

@end

