//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WCFinderUtilsCGI
{
    _Bool _isLiveArticle;
    int _cmdId;
    NSString *_username;
    unsigned long long _parseUtilType;
    NSString *_parseUrl;
    NSData *_cmdBuf;
    CDUnknownBlockType _sucBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType sucBlock; // @synthesize sucBlock=_sucBlock;
@property(retain, nonatomic) NSData *cmdBuf; // @synthesize cmdBuf=_cmdBuf;
@property(nonatomic) int cmdId; // @synthesize cmdId=_cmdId;
@property(nonatomic) _Bool isLiveArticle; // @synthesize isLiveArticle=_isLiveArticle;
@property(copy, nonatomic) NSString *parseUrl; // @synthesize parseUrl=_parseUrl;
@property(nonatomic) unsigned long long parseUtilType; // @synthesize parseUtilType=_parseUtilType;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithUsername:(id)arg1 cmdId:(int)arg2 cmdBuf:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;
- (id)initWithUsername:(id)arg1 parseUtilType:(unsigned long long)arg2 parseUrl:(id)arg3 liveArticile:(_Bool)arg4 successBlock:(CDUnknownBlockType)arg5 failBlock:(CDUnknownBlockType)arg6;

@end

