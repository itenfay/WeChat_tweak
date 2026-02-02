//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayCheckPayPwdByTokenResponse : NSObject
{
    NSString *m_nsCheckPwdToken;
    _Bool m_bIsFreeSMS;
    NSString *m_nsMobileNo;
    NSString *m_nsRelationKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsRelationKey; // @synthesize m_nsRelationKey;
@property(retain, nonatomic) NSString *m_nsMobileNo; // @synthesize m_nsMobileNo;
@property(nonatomic) _Bool m_bIsFreeSMS; // @synthesize m_bIsFreeSMS;
@property(retain, nonatomic) NSString *m_nsCheckPwdToken; // @synthesize m_nsCheckPwdToken;

@end

