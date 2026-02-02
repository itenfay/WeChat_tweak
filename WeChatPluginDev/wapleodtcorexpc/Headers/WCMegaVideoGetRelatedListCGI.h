//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MegaVideoClientStatus, NSData, NSString, WCMegaVideoLocation;

@interface WCMegaVideoGetRelatedListCGI
{
    int _scene;
    NSData *_lastBuff;
    NSString *_videoId;
    NSString *_videoNonceId;
    WCMegaVideoLocation *_location;
    MegaVideoClientStatus *_clientStatus;
    NSString *_fromUsername;
    NSString *_toUsername;
    NSData *_objectSessionInfo;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
@property(retain, nonatomic) NSData *objectSessionInfo; // @synthesize objectSessionInfo=_objectSessionInfo;
@property(copy, nonatomic) NSString *toUsername; // @synthesize toUsername=_toUsername;
@property(copy, nonatomic) NSString *fromUsername; // @synthesize fromUsername=_fromUsername;
@property(retain, nonatomic) MegaVideoClientStatus *clientStatus; // @synthesize clientStatus=_clientStatus;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) WCMegaVideoLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *videoNonceId; // @synthesize videoNonceId=_videoNonceId;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLastBuff:(id)arg1 videoId:(id)arg2 videoNonceId:(id)arg3 location:(id)arg4 scene:(int)arg5 clientStatus:(id)arg6 fromUsername:(id)arg7 toUsername:(id)arg8 objectSectionInfo:(id)arg9 successful:(CDUnknownBlockType)arg10 failure:(CDUnknownBlockType)arg11;
- (id)initWithLastBuff:(id)arg1 videoId:(id)arg2 videoNonceId:(id)arg3 scene:(int)arg4 fromUsername:(id)arg5 toUsername:(id)arg6 successful:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;

@end

