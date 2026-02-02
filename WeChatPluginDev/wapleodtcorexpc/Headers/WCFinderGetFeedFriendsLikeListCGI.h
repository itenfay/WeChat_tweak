//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WCFinderGetFeedFriendsLikeListCGI
{
    NSString *_username;
    unsigned long long _scene;
    NSData *_lastBuffer;
    NSString *_objectID;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
@property(copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithUsername:(id)arg1 scene:(unsigned long long)arg2 lastBuffer:(id)arg3 objectID:(id)arg4 nonceID:(id)arg5 likeBuffer:(id)arg6 successful:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;

@end

