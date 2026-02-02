//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderComment;

@interface WCFinderCommentTopCGI
{
    WCFinderComment *_comment;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    NSString *_userName;
    NSString *_sessionBuffer;
    NSString *_tid;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(copy, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) WCFinderComment *comment; // @synthesize comment=_comment;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithComment:(id)arg1 tid:(id)arg2 userName:(id)arg3 scene:(unsigned long long)arg4 commentScene:(int)arg5 sessionBuffer:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failBlock:(CDUnknownBlockType)arg8;

@end

