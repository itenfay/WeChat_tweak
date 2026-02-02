//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;

@interface WCTimelineBatchGetFeedsCGI
{
    int _scene;
    unsigned int _startTime;
    NSArray *_feedIds;
    CDUnknownBlockType _successHandler;
    CDUnknownBlockType _failureHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failureHandler; // @synthesize failureHandler=_failureHandler;
@property(copy, nonatomic) CDUnknownBlockType successHandler; // @synthesize successHandler=_successHandler;
@property(nonatomic) unsigned int startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) int scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSArray *feedIds; // @synthesize feedIds=_feedIds;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)startRequest;
- (void)dealloc;
- (id)initWithScene:(int)arg1 feedIds:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;

@end

