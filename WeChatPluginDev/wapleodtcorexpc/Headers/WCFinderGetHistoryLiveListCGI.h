//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WCFinderGetHistoryLiveListCGI
{
    unsigned int _startTimeRange;
    unsigned int _endTimeRange;
    int _requestScene;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    NSString *_anchorFinderUsername;
    NSData *_lastBuffer;
}

- (void).cxx_destruct;
@property(nonatomic) int requestScene; // @synthesize requestScene=_requestScene;
@property(nonatomic) unsigned int endTimeRange; // @synthesize endTimeRange=_endTimeRange;
@property(nonatomic) unsigned int startTimeRange; // @synthesize startTimeRange=_startTimeRange;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSString *anchorFinderUsername; // @synthesize anchorFinderUsername=_anchorFinderUsername;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithAnchorFinderUsername:(id)arg1 requestScene:(int)arg2 lastBuffer:(id)arg3 startTimeRange:(unsigned int)arg4 endTimeRange:(unsigned int)arg5 successBlock:(CDUnknownBlockType)arg6 failBlock:(CDUnknownBlockType)arg7;

@end

