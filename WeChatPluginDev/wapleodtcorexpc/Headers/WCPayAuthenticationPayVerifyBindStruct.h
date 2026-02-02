//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayAuthenticationPayVerifyBindStruct : NSObject
{
    unsigned int m_flag;
    unsigned int m_uiPayScene;
    unsigned int m_uiPayChannel;
    NSString *m_payPassword;
    NSString *m_payKey;
    NSString *m_payToken;
    NSString *m_verifySMS;
    unsigned int _ignore_bind;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int ignore_bind; // @synthesize ignore_bind=_ignore_bind;
@property(retain, nonatomic) NSString *m_verifySMS; // @synthesize m_verifySMS;
@property(retain, nonatomic) NSString *m_payToken; // @synthesize m_payToken;
@property(nonatomic) unsigned int m_uiPayScene; // @synthesize m_uiPayScene;
@property(retain, nonatomic) NSString *m_payPassword; // @synthesize m_payPassword;
@property(retain, nonatomic) NSString *m_payKey; // @synthesize m_payKey;
@property(nonatomic) unsigned int m_uiPayChannel; // @synthesize m_uiPayChannel;
@property(nonatomic) unsigned int m_flag; // @synthesize m_flag;

@end

