//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface WCFinderCreateLivePrepareCGI
{
    NSString *_finderUsername;
    NSString *_micFinderUsername;
    unsigned long long _micObjectId;
    unsigned long long _micLiveId;
    NSMutableArray *_cachedGestures;
    CDUnknownBlockType _success;
    CDUnknownBlockType _failure;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType success; // @synthesize success=_success;
@property(retain, nonatomic) NSMutableArray *cachedGestures; // @synthesize cachedGestures=_cachedGestures;
@property(nonatomic) unsigned long long micLiveId; // @synthesize micLiveId=_micLiveId;
@property(nonatomic) unsigned long long micObjectId; // @synthesize micObjectId=_micObjectId;
@property(copy, nonatomic) NSString *micFinderUsername; // @synthesize micFinderUsername=_micFinderUsername;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
- (void)logForQuestActivities:(id)arg1;
- (void)preHandleForCreateLiveResponse:(id)arg1;
- (void)logResponseInfo:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderUsername:(id)arg1 micFinderUsername:(id)arg2 micObjectId:(unsigned long long)arg3 micLiveId:(unsigned long long)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;

@end

