//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableArray;

@interface WCFinderLiveModBasicInfoCGI
{
    unsigned int _scene;
    NSMutableArray *_cmdItemRequestWrapList;
    NSArray *_unmutableCmdItemRequestWrapList;
    unsigned long long _objectId;
    unsigned long long _liveId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
@property(nonatomic) unsigned long long objectId; // @synthesize objectId=_objectId;
@property(retain, nonatomic) NSArray *unmutableCmdItemRequestWrapList; // @synthesize unmutableCmdItemRequestWrapList=_unmutableCmdItemRequestWrapList;
@property(retain, nonatomic) NSMutableArray *cmdItemRequestWrapList; // @synthesize cmdItemRequestWrapList=_cmdItemRequestWrapList;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (void)start;
- (void)addCmdItem:(id)arg1 completeCallBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (id)initWithLiveId:(unsigned long long)arg1 objectId:(unsigned long long)arg2 scene:(unsigned int)arg3;
- (id)initWithFinderTaskId:(id)arg1 scene:(unsigned int)arg2;

@end

