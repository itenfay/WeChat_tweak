//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCStoryUserPageCgiObj
{
    unsigned int _source;
    CDUnknownBlockType _dataCallBack;
    CDUnknownBlockType _dbSyncCallBack;
    CDUnknownBlockType _getDBDataCallBack;
    NSString *_userName;
    NSString *_chatRoomName;
    unsigned long long _maxId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int source; // @synthesize source=_source;
@property(nonatomic) unsigned long long maxId; // @synthesize maxId=_maxId;
@property(retain, nonatomic) NSString *chatRoomName; // @synthesize chatRoomName=_chatRoomName;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) CDUnknownBlockType getDBDataCallBack; // @synthesize getDBDataCallBack=_getDBDataCallBack;
@property(copy, nonatomic) CDUnknownBlockType dbSyncCallBack; // @synthesize dbSyncCallBack=_dbSyncCallBack;
@property(copy, nonatomic) CDUnknownBlockType dataCallBack; // @synthesize dataCallBack=_dataCallBack;
- (id)converListStoryObjToStoryItem:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithUserName:(id)arg1 MaxId:(unsigned long long)arg2 ChatRoomName:(id)arg3;

@end

