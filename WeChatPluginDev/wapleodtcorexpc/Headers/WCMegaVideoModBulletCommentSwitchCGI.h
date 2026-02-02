//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCMegaVideoModBulletCommentSwitchCGI
{
    _Bool _commentSwitch;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
    NSString *_userName;
    NSString *_videoId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool commentSwitch; // @synthesize commentSwitch=_commentSwitch;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithUserName:(id)arg1 videoId:(id)arg2 commentSwitch:(_Bool)arg3 successful:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;

@end

