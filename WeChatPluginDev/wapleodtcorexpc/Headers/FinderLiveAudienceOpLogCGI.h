//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableArray;

@interface FinderLiveAudienceOpLogCGI
{
    unsigned int _scene;
    NSMutableArray *_cmdItemRequestWrapList;
    NSArray *_unmutableCmdItemRequestWrapList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *unmutableCmdItemRequestWrapList; // @synthesize unmutableCmdItemRequestWrapList=_unmutableCmdItemRequestWrapList;
@property(retain, nonatomic) NSMutableArray *cmdItemRequestWrapList; // @synthesize cmdItemRequestWrapList=_cmdItemRequestWrapList;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (void)start;
- (void)addCmdItem:(id)arg1 completeCallBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (id)initWithScene:(unsigned int)arg1;

@end

