//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCBLEDevice : NSObject
{
    NSString *_m_bleName;
    long long _m_did;
    long long _m_bleSimpleProto;
    NSString *_m_mac;
    long long _m_profileID;
}

- (void).cxx_destruct;
@property(nonatomic) long long m_profileID; // @synthesize m_profileID=_m_profileID;
@property(copy, nonatomic) NSString *m_mac; // @synthesize m_mac=_m_mac;
@property(nonatomic) long long m_bleSimpleProto; // @synthesize m_bleSimpleProto=_m_bleSimpleProto;
@property(nonatomic) long long m_did; // @synthesize m_did=_m_did;
@property(copy, nonatomic) NSString *m_bleName; // @synthesize m_bleName=_m_bleName;

@end

