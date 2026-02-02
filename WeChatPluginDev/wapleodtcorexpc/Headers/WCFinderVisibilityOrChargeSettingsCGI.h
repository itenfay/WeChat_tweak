//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface WCFinderVisibilityOrChargeSettingsCGI
{
    NSString *_qrCodeUrl;
    NSMutableArray *_selectChatroomArr;
    NSMutableArray *_selectUserNameArr;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSMutableArray *selectUserNameArr; // @synthesize selectUserNameArr=_selectUserNameArr;
@property(retain, nonatomic) NSMutableArray *selectChatroomArr; // @synthesize selectChatroomArr=_selectChatroomArr;
@property(retain, nonatomic) NSString *qrCodeUrl; // @synthesize qrCodeUrl=_qrCodeUrl;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderQrCode:(id)arg1 selectChatroomArr:(id)arg2 selectUserNameArr:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;

@end

