//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol WCPayOverseaIBGGetWalletCgiDelegate;

@interface WCPayOverseaIBGGetWalletCgi : NSObject
{
    _Bool _m_isCgiEnd;
    id <WCPayOverseaIBGGetWalletCgiDelegate> _m_delegate;
}

+ (id)GetCacheRespWithTpaCountry:(unsigned int)arg1;
+ (void)checkFileWithTpaCountry:(unsigned int)arg1;
+ (id)getSavePathWithTpaCountry:(unsigned int)arg1;
+ (id)getSaveRootDir;
- (void).cxx_destruct;
@property(nonatomic) _Bool m_isCgiEnd; // @synthesize m_isCgiEnd=_m_isCgiEnd;
@property(nonatomic) __weak id <WCPayOverseaIBGGetWalletCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (id)cacheFromResp:(id)arg1;
- (void)callOkDelegateWithRespObject:(id)arg1;
- (void)callErrorDelegateWithErrorCode:(int)arg1 ErrorMsg:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)startRequest;
- (_Bool)isCgiEnd;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

