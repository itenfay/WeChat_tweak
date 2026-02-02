//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface RsaCertInfo : NSObject
{
    unsigned int m_uiCertVersion;
    NSString *m_nsCertE;
    NSString *m_nsCertN;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsCertN; // @synthesize m_nsCertN;
@property(retain, nonatomic) NSString *m_nsCertE; // @synthesize m_nsCertE;
@property(nonatomic) unsigned int m_uiCertVersion; // @synthesize m_uiCertVersion;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

