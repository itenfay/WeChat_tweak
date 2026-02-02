//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayOfflinePayCreateRequestStruct : NSObject
{
    NSString *m_nsPassword;
    NSString *m_nsBindSerialNo;
    NSString *m_nsBankType;
    NSString *m_nsCardTail;
    unsigned int m_uiInitalMoney;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiInitalMoney; // @synthesize m_uiInitalMoney;
@property(retain, nonatomic) NSString *m_nsPassword; // @synthesize m_nsPassword;
@property(retain, nonatomic) NSString *m_nsCardTail; // @synthesize m_nsCardTail;
@property(retain, nonatomic) NSString *m_nsBindSerialNo; // @synthesize m_nsBindSerialNo;
@property(retain, nonatomic) NSString *m_nsBankType; // @synthesize m_nsBankType;

@end

