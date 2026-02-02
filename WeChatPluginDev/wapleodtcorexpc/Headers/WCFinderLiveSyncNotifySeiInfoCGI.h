//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderNotifySeiInfo, NSData;

@interface WCFinderLiveSyncNotifySeiInfoCGI
{
    NSData *_liveCookies;
    FinderNotifySeiInfo *_notifySeiInfo;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) FinderNotifySeiInfo *notifySeiInfo; // @synthesize notifySeiInfo=_notifySeiInfo;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLiveTaskId:(id)arg1 liveCookies:(id)arg2 notifySeiInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end

