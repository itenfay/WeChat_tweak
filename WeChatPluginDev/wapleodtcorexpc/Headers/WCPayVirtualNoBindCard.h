//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCPayVirtualNoBindCard : NSObject
{
    unsigned int m_uiCardID;
    NSString *m_nsBankType;
    NSString *m_nsBankName;
    unsigned int m_uiCardStatus;
    NSString *m_nsLogoUrl;
    NSString *m_nsBigLogoUrl;
    NSString *m_nsBackgroundLogoUrl;
    unsigned int m_uiCardType;
    NSArray *m_aryEducationList;
    NSString *m_branderUserName;
    NSString *m_branderNickName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_branderNickName; // @synthesize m_branderNickName;
@property(retain, nonatomic) NSString *m_branderUserName; // @synthesize m_branderUserName;
@property(retain, nonatomic) NSArray *m_aryEducationList; // @synthesize m_aryEducationList;
@property(nonatomic) unsigned int m_uiCardType; // @synthesize m_uiCardType;
@property(retain, nonatomic) NSString *m_nsBackgroundLogoUrl; // @synthesize m_nsBackgroundLogoUrl;
@property(retain, nonatomic) NSString *m_nsBigLogoUrl; // @synthesize m_nsBigLogoUrl;
@property(retain, nonatomic) NSString *m_nsLogoUrl; // @synthesize m_nsLogoUrl;
@property(nonatomic) unsigned int m_uiCardStatus; // @synthesize m_uiCardStatus;
@property(retain, nonatomic) NSString *m_nsBankType; // @synthesize m_nsBankType;
@property(retain, nonatomic) NSString *m_nsBankName; // @synthesize m_nsBankName;
@property(nonatomic) unsigned int m_uiCardID; // @synthesize m_uiCardID;

@end

