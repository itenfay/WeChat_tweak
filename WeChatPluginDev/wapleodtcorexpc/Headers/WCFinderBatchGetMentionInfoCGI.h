//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface WCFinderBatchGetMentionInfoCGI
{
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
    NSString *_userName;
    NSArray *_mentionIDList;
    long long _requestScene;
}

- (void).cxx_destruct;
@property(nonatomic) long long requestScene; // @synthesize requestScene=_requestScene;
@property(retain, nonatomic) NSArray *mentionIDList; // @synthesize mentionIDList=_mentionIDList;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithUserName:(id)arg1 mentionIDList:(id)arg2 requestScene:(long long)arg3 successful:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;

@end

