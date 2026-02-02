//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayDeleteDigitalCertCgiResp : NSObject
{
    unsigned int _m_wxErrorType;
    NSString *_m_wxErrorMsg;
}

+ (id)GenFromDictionary:(id)arg1 WithErrorType:(unsigned int)arg2 ErrorMsg:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_wxErrorMsg; // @synthesize m_wxErrorMsg=_m_wxErrorMsg;
@property(nonatomic) unsigned int m_wxErrorType; // @synthesize m_wxErrorType=_m_wxErrorType;
- (id)init;

@end

