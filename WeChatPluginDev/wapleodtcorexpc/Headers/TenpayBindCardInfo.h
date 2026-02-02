//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TenpayBindCardInfo : NSObject
{
    _Bool m_bSameCardExist;
    NSString *m_nsBankType;
    NSString *m_nsBankName;
    NSString *m_nsTelphone;
    NSString *m_nsCardType;
    NSString *m_nsBindCardNumber;
    NSString *m_nsBindSerial;
    NSString *m_nsToken;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsToken; // @synthesize m_nsToken;
@property(retain, nonatomic) NSString *m_nsTelphone; // @synthesize m_nsTelphone;
@property(retain, nonatomic) NSString *m_nsCardType; // @synthesize m_nsCardType;
@property(retain, nonatomic) NSString *m_nsBindSerial; // @synthesize m_nsBindSerial;
@property(retain, nonatomic) NSString *m_nsBindCardNumber; // @synthesize m_nsBindCardNumber;
@property(retain, nonatomic) NSString *m_nsBankType; // @synthesize m_nsBankType;
@property(retain, nonatomic) NSString *m_nsBankName; // @synthesize m_nsBankName;
@property(nonatomic) _Bool m_bSameCardExist; // @synthesize m_bSameCardExist;

@end

