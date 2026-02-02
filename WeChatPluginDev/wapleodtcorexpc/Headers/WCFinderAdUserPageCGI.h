//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderClientStatus, NSData, NSString;

@interface WCFinderAdUserPageCGI
{
    _Bool _needFansCount;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
    NSString *_username;
    unsigned long long _maxTid;
    NSData *_lastBuffer;
    unsigned long long _reportScene;
    FinderClientStatus *_clientStatus;
    NSString *_feedID;
    NSString *_encryptedObjectId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *encryptedObjectId; // @synthesize encryptedObjectId=_encryptedObjectId;
@property(copy, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
@property(retain, nonatomic) FinderClientStatus *clientStatus; // @synthesize clientStatus=_clientStatus;
@property(nonatomic) unsigned long long reportScene; // @synthesize reportScene=_reportScene;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) _Bool needFansCount; // @synthesize needFansCount=_needFansCount;
@property(nonatomic) unsigned long long maxTid; // @synthesize maxTid=_maxTid;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithContactUsername:(id)arg1 maxTid:(unsigned long long)arg2 reportScene:(unsigned long long)arg3 needFansCount:(_Bool)arg4 lastBuffer:(id)arg5 clientStatus:(id)arg6 feedID:(id)arg7 encryptedObjectid:(id)arg8 successful:(CDUnknownBlockType)arg9 failure:(CDUnknownBlockType)arg10;

@end

