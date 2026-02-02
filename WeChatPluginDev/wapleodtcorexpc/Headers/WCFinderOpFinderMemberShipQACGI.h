//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderUploadTask;

@interface WCFinderOpFinderMemberShipQACGI
{
    int _oprType;
    WCFinderUploadTask *_task;
    NSString *_finderUsername;
    NSString *_refObjectid;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
@property(nonatomic) int oprType; // @synthesize oprType=_oprType;
@property(copy, nonatomic) NSString *refObjectid; // @synthesize refObjectid=_refObjectid;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) WCFinderUploadTask *task; // @synthesize task=_task;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createOPRequest;
- (id)initWithFinderUsername:(id)arg1 refObjectid:(id)arg2 oprType:(int)arg3 successful:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)createPostRequest;
- (id)initWithFinderUploadTask:(id)arg1 successful:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;

@end

