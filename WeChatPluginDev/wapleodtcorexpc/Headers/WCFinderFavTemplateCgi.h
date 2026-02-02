//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderFavTemplateCgi
{
    unsigned int _opType;
    unsigned int _fromScene;
    NSString *_finderUsername;
    NSString *_templateID;
    unsigned long long _timestampMs;
    NSString *_sessionBuffer;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(copy, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(nonatomic) unsigned int fromScene; // @synthesize fromScene=_fromScene;
@property(nonatomic) unsigned int opType; // @synthesize opType=_opType;
@property(nonatomic) unsigned long long timestampMs; // @synthesize timestampMs=_timestampMs;
@property(copy, nonatomic) NSString *templateID; // @synthesize templateID=_templateID;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderUsername:(id)arg1 templateID:(id)arg2 timeStampMs:(unsigned long long)arg3 opType:(unsigned int)arg4 fromScene:(unsigned int)arg5 sessionBuffer:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failBlock:(CDUnknownBlockType)arg8;

@end

