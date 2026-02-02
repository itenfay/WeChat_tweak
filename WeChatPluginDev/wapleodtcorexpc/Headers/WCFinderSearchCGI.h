//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WCFinderSearchCGI
{
    int _scene;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
    NSString *_queryText;
    NSData *_lastBuffer;
    NSString *_requestID;
}

+ (id)hotwordSessionBufferKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *queryText; // @synthesize queryText=_queryText;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithSearchUGCParams:(id)arg1 lastBuffer:(id)arg2 requestID:(id)arg3 successful:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)initWithQueryText:(id)arg1 requestID:(id)arg2 scene:(int)arg3 lastBuffer:(id)arg4 optionalParams:(id)arg5 commentScene:(int)arg6 successful:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;
- (id)initWithQueryText:(id)arg1 requestID:(id)arg2 scene:(int)arg3 lastBuffer:(id)arg4 objHotwordInfoBuff:(id)arg5 optionalParams:(id)arg6 successful:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;

@end

