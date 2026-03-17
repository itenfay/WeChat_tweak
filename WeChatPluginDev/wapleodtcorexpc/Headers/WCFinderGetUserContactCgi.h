//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class NSString;

@interface WCFinderGetUserContactCgi : NSObject
{
    NSString *_nickname;
    NSString *_exportUsername;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(copy, nonatomic) NSString *exportUsername; // @synthesize exportUsername=_exportUsername;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithExpostUsername:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (id)initWithNickname:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;

@end
