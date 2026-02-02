//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderDelFeedCGI
{
    int _delScene;
    int _feedSourceScene;
    NSString *_tid;
    NSString *_nonceID;
    NSString *_posterName;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
    NSString *_clientId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(nonatomic) int feedSourceScene; // @synthesize feedSourceScene=_feedSourceScene;
@property(nonatomic) int delScene; // @synthesize delScene=_delScene;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
@property(copy, nonatomic) NSString *posterName; // @synthesize posterName=_posterName;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFeedTid:(id)arg1 nonceID:(id)arg2 clientId:(id)arg3 posterName:(id)arg4 delScene:(int)arg5 feedSourceScene:(int)arg6 successful:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;

@end

