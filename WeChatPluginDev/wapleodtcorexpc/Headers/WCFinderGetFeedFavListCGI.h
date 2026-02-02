//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WCFinderGetFeedFavListCGI
{
    int _requestType;
    NSString *_finderUsername;
    unsigned long long _scene;
    NSData *_lastBuffer;
    NSString *_objectID;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
@property(nonatomic) int requestType; // @synthesize requestType=_requestType;
@property(copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithFinderUsername:(id)arg1 scene:(unsigned long long)arg2 lastBuffer:(id)arg3 objectID:(id)arg4 requestType:(int)arg5 successful:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;

@end

