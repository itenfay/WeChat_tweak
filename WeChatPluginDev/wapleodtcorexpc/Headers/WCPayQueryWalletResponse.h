//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayQueryWalletResponse : NSObject
{
    unsigned int _m_errCode;
    NSString *_m_errMsg;
    NSString *_m_walletUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_walletUrl; // @synthesize m_walletUrl=_m_walletUrl;
@property(retain, nonatomic) NSString *m_errMsg; // @synthesize m_errMsg=_m_errMsg;
@property(nonatomic) unsigned int m_errCode; // @synthesize m_errCode=_m_errCode;

@end

