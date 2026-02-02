//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSMutableArray, NSString;

@interface WCFinderLiveCommitGiftNewCustomizationCgi
{
    _Bool _modifyNewCustomText;
    NSData *_liveCookies;
    NSString *_giftProductId;
    NSString *_targetCustomText;
    NSMutableArray *_componentKeyList;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSMutableArray *componentKeyList; // @synthesize componentKeyList=_componentKeyList;
@property(retain, nonatomic) NSString *targetCustomText; // @synthesize targetCustomText=_targetCustomText;
@property(nonatomic) _Bool modifyNewCustomText; // @synthesize modifyNewCustomText=_modifyNewCustomText;
@property(retain, nonatomic) NSString *giftProductId; // @synthesize giftProductId=_giftProductId;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithTaskId:(id)arg1 liveCookies:(id)arg2 giftProductId:(id)arg3 modifyNewCustomText:(_Bool)arg4 newCustomText:(id)arg5 componentKeyList:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failBlock:(CDUnknownBlockType)arg8;

@end

