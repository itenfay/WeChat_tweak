//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface OpenCustomerServiceHandler
{
    NSString *_wwkfUrl;
    NSString *_corpid;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *corpid; // @synthesize corpid=_corpid;
@property(copy, nonatomic) NSString *wwkfUrl; // @synthesize wwkfUrl=_wwkfUrl;
- (void)backTo3rdApp:(int)arg1 extMsg:(id)arg2;
- (void)sendRespAndReturnTo3rdApp:(id)arg1 errCode:(int)arg2;
- (id)getExtTaransLinkParams;
- (void)realHandleReqAfterermissionValidation;
- (void)cancelHandler;
- (void)startHandler:(id)arg1;

@end

