//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSError, NSString, WCPayCardBinInfo, WCPayGetBankResourceCgi, WCPayGetUserExInfoCgiResponse;
@protocol WCPayBankElementQueryCgiDelegate;

@interface WCPayBankElementQueryCgi : NSObject
{
    id <WCPayBankElementQueryCgiDelegate> m_delegate;
    _Bool _fromRealname;
    WCPayGetBankResourceCgi *_m_getBankResourceCgi;
    WCPayCardBinInfo *_m_selecteCardBinInfo;
    NSArray *_m_availableBankArray;
    WCPayGetUserExInfoCgiResponse *_m_userInfoResponse;
    NSError *_m_error;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSError *m_error; // @synthesize m_error=_m_error;
@property(retain, nonatomic) WCPayGetUserExInfoCgiResponse *m_userInfoResponse; // @synthesize m_userInfoResponse=_m_userInfoResponse;
@property(retain, nonatomic) NSArray *m_availableBankArray; // @synthesize m_availableBankArray=_m_availableBankArray;
@property(retain, nonatomic) WCPayCardBinInfo *m_selecteCardBinInfo; // @synthesize m_selecteCardBinInfo=_m_selecteCardBinInfo;
@property(retain, nonatomic) WCPayGetBankResourceCgi *m_getBankResourceCgi; // @synthesize m_getBankResourceCgi=_m_getBankResourceCgi;
@property _Bool fromRealname; // @synthesize fromRealname=_fromRealname;
- (void)OnGetBankResourceResponseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnGetBankResourceResponseOK:(id)arg1;
- (void)clearResponse;
- (void)GetCardBinAndAvailableBank:(id)arg1 scene:(long long)arg2 sessionId:(id)arg3;
- (void)OnGetBindingCardBin:(id)arg1 AvailableBank:(id)arg2 userExInfoResponse:(id)arg3 Error:(id)arg4;
- (id)initWitDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

