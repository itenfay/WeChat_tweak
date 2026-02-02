//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayCheckTransferStatusRequest : NSObject
{
    NSString *m_nsTransferID;
    NSString *m_nsFromUserName;
    unsigned long long m_uiInvalidTime;
    NSString *m_nsTransactionID;
    NSString *_group_username;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *group_username; // @synthesize group_username=_group_username;
@property(retain, nonatomic) NSString *m_nsTransactionID; // @synthesize m_nsTransactionID;
@property(nonatomic) unsigned long long m_uiInvalidTime; // @synthesize m_uiInvalidTime;
@property(retain, nonatomic) NSString *m_nsTransferID; // @synthesize m_nsTransferID;
@property(retain, nonatomic) NSString *m_nsFromUserName; // @synthesize m_nsFromUserName;

@end

