//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveContactExtRelationInfo, NSData, NSString, WCFinderDataItem;

@interface WCFinderGetLiveContactCGI
{
    NSString *_userName;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    WCFinderDataItem *_dataItem;
    unsigned long long _scene;
    NSData *_liveContactExtInfo;
    unsigned long long _liveId;
    unsigned long long _objectId;
    FinderLiveContactExtRelationInfo *_extRelationInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveContactExtRelationInfo *extRelationInfo; // @synthesize extRelationInfo=_extRelationInfo;
@property(nonatomic) unsigned long long objectId; // @synthesize objectId=_objectId;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
@property(retain, nonatomic) NSData *liveContactExtInfo; // @synthesize liveContactExtInfo=_liveContactExtInfo;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLiveId:(unsigned long long)arg1 objectId:(unsigned long long)arg2 userName:(id)arg3 fromScene:(unsigned long long)arg4 extInfo:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failBlock:(CDUnknownBlockType)arg7;
- (id)initWithFinderTaskId:(id)arg1 userName:(id)arg2 fromScene:(unsigned long long)arg3 extInfo:(id)arg4 extRelationInfo:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failBlock:(CDUnknownBlockType)arg7;

@end

