//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderGetHistoryCGI
{
    int _tabType;
    int _commentscene;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
    NSString *_username;
    NSString *_fluencyReportSceneKey;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *fluencyReportSceneKey; // @synthesize fluencyReportSceneKey=_fluencyReportSceneKey;
@property(nonatomic) int commentscene; // @synthesize commentscene=_commentscene;
@property(nonatomic) int tabType; // @synthesize tabType=_tabType;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
- (void)reportCGIFail;
- (void)reportCGIFinish;
- (void)reportCGIStart;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)start;
- (id)initWithLastBuff:(id)arg1 clientStatus:(id)arg2 username:(id)arg3 tabType:(int)arg4 commentscene:(int)arg5 fluencyReportSceneKey:(id)arg6 successful:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;

@end

