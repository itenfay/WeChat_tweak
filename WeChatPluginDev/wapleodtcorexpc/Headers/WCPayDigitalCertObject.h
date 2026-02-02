//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayDigitalCertObject : NSObject
{
    int _m_isCurDevice;
    NSString *_m_deviceName;
    NSString *_m_deviceOs;
    NSString *_m_crtNo;
}

+ (id)GenFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_crtNo; // @synthesize m_crtNo=_m_crtNo;
@property(nonatomic) int m_isCurDevice; // @synthesize m_isCurDevice=_m_isCurDevice;
@property(retain, nonatomic) NSString *m_deviceOs; // @synthesize m_deviceOs=_m_deviceOs;
@property(retain, nonatomic) NSString *m_deviceName; // @synthesize m_deviceName=_m_deviceName;

@end

