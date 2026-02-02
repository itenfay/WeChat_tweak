//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderLiveConcertTicketStyleSwitchCgi
{
    NSString *_activityId;
    NSString *_resourceId;
    NSString *_audienceFinderUsername;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSString *audienceFinderUsername; // @synthesize audienceFinderUsername=_audienceFinderUsername;
@property(retain, nonatomic) NSString *resourceId; // @synthesize resourceId=_resourceId;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithActivityId:(id)arg1 resourceId:(id)arg2 audienceFinderUsername:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;

@end

