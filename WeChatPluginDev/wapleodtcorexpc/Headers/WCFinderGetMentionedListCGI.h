//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WCFinderGetMentionedListCGI
{
    NSString *_lastDisplayId;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
    NSData *_lastBuff;
    NSString *_userName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
@property(copy, nonatomic) NSString *lastDisplayId; // @synthesize lastDisplayId=_lastDisplayId;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest:(int)arg1;
- (id)initWithUserName:(id)arg1 lastBuff:(id)arg2 type:(int)arg3 successful:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;

@end

