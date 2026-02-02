//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayDigitalCertInstallCrtWording : NSObject
{
    NSString *_m_title;
    NSString *_m_body1;
    NSString *_m_body2;
    NSString *_m_button;
}

+ (id)GenFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_button; // @synthesize m_button=_m_button;
@property(retain, nonatomic) NSString *m_body2; // @synthesize m_body2=_m_body2;
@property(retain, nonatomic) NSString *m_body1; // @synthesize m_body1=_m_body1;
@property(retain, nonatomic) NSString *m_title; // @synthesize m_title=_m_title;

@end

