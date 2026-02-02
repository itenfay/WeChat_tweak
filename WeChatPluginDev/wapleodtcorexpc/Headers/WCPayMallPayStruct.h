//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WCPayMallPayStruct : NSObject
{
    NSString *m_nsPayFuncId;
    NSString *m_nsPayProductId;
    NSString *m_nsPayAppId;
    NSMutableDictionary *m_dicRemarks;
    NSString *m_nsTecket;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsTecket; // @synthesize m_nsTecket;
@property(retain, nonatomic) NSMutableDictionary *m_dicRemarks; // @synthesize m_dicRemarks;
@property(retain, nonatomic) NSString *m_nsPayProductId; // @synthesize m_nsPayProductId;
@property(retain, nonatomic) NSString *m_nsPayFuncId; // @synthesize m_nsPayFuncId;
@property(retain, nonatomic) NSString *m_nsPayAppId; // @synthesize m_nsPayAppId;

@end

