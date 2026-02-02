//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderDataItem;

@interface WCFinderBanLiveCommentCGI
{
    _Bool _enable;
    WCFinderDataItem *_dataItem;
    NSString *_audienceUsername;
    unsigned long long _scene;
    long long _liveScene;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) long long liveScene; // @synthesize liveScene=_liveScene;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(copy, nonatomic) NSString *audienceUsername; // @synthesize audienceUsername=_audienceUsername;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithDataItem:(id)arg1 audienceUsername:(id)arg2 scene:(unsigned long long)arg3 liveScene:(long long)arg4 enable:(_Bool)arg5 successBlock:(CDUnknownBlockType)arg6 failBlock:(CDUnknownBlockType)arg7;

@end

