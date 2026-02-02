//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WCFinderModBlackListCgi
{
    unsigned int _optype;
    unsigned int _opscene;
    unsigned long long _refObjectid;
    unsigned long long _refCommentid;
    NSString *_username;
    NSString *_fansid;
    NSString *_anchorUsername;
    NSString *_nonceID;
    unsigned long long _refBulletCommentId;
    NSString *_sessionId;
    NSData *_mmlistenBypbuff;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSData *mmlistenBypbuff; // @synthesize mmlistenBypbuff=_mmlistenBypbuff;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned int opscene; // @synthesize opscene=_opscene;
@property(nonatomic) unsigned long long refBulletCommentId; // @synthesize refBulletCommentId=_refBulletCommentId;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(retain, nonatomic) NSString *anchorUsername; // @synthesize anchorUsername=_anchorUsername;
@property(retain, nonatomic) NSString *fansid; // @synthesize fansid=_fansid;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) unsigned long long refCommentid; // @synthesize refCommentid=_refCommentid;
@property(nonatomic) unsigned long long refObjectid; // @synthesize refObjectid=_refObjectid;
@property(nonatomic) unsigned int optype; // @synthesize optype=_optype;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)start;
- (id)init;

@end

