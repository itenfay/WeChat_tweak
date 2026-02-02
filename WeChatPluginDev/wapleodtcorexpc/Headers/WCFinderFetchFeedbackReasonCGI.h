//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderFetchFeedbackReasonCGI
{
    int _commentScene;
    unsigned long long _feedID;
    long long _liveScene;
    unsigned long long _feedbackType;
    NSString *_sessionBuffer;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) unsigned long long feedbackType; // @synthesize feedbackType=_feedbackType;
@property(nonatomic) long long liveScene; // @synthesize liveScene=_liveScene;
@property(nonatomic) unsigned long long feedID; // @synthesize feedID=_feedID;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFeedID:(unsigned long long)arg1 liveScene:(long long)arg2 feedbackType:(unsigned long long)arg3 commentScene:(int)arg4 sessionBuffer:(id)arg5 success:(CDUnknownBlockType)arg6 fail:(CDUnknownBlockType)arg7;

@end

