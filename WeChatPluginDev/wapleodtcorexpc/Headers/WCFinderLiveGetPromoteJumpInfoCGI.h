//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WCFinderLiveGetPromoteJumpInfoCGI
{
    unsigned int _type;
    NSString *_jumpId;
    NSData *_jumpInfoBuffer;
    NSData *_sessionBuffer;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSData *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(retain, nonatomic) NSData *jumpInfoBuffer; // @synthesize jumpInfoBuffer=_jumpInfoBuffer;
@property(copy, nonatomic) NSString *jumpId; // @synthesize jumpId=_jumpId;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)getUxInfoData;
- (void)createRequest;
- (id)initWithLiveTaskId:(id)arg1 type:(unsigned int)arg2 jumpId:(id)arg3 jumpInfoBuffer:(id)arg4 sessionBuffer:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failBlock:(CDUnknownBlockType)arg7;

@end

