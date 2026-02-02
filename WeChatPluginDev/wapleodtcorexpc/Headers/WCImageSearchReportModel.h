//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCImageSearchReportModel
{
    int _cgiRet;
    long long _action;
    long long _source;
    NSString *_picMD5;
    NSString *_cgiAction;
    NSString *_sourceURL;
    NSString *_searchID;
    NSString *_docID;
    NSString *_reqKey;
}

+ (id)GenTimelineReporterWithAction:(long long)arg1 requestId:(id)arg2 source:(long long)arg3 scene:(unsigned int)arg4 snsItem:(id)arg5 chatType:(unsigned long long)arg6 picMD5:(id)arg7;
+ (id)GenMsgReporterWithAction:(long long)arg1 requestId:(id)arg2 source:(long long)arg3 scene:(unsigned int)arg4 msgWrap:(id)arg5;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *reqKey; // @synthesize reqKey=_reqKey;
@property(copy, nonatomic) NSString *docID; // @synthesize docID=_docID;
@property(copy, nonatomic) NSString *searchID; // @synthesize searchID=_searchID;
@property(copy, nonatomic) NSString *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(copy, nonatomic) NSString *cgiAction; // @synthesize cgiAction=_cgiAction;
@property(nonatomic) int cgiRet; // @synthesize cgiRet=_cgiRet;
@property(copy, nonatomic) NSString *picMD5; // @synthesize picMD5=_picMD5;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) long long action; // @synthesize action=_action;
- (void)doReport;
- (void)doReport:(long long)arg1;
- (void)reportImageOperation:(unsigned long long)arg1;
- (id)reportContent;
- (unsigned int)reportKvId;
- (id)initWithMsgWrap:(id)arg1;

@end

