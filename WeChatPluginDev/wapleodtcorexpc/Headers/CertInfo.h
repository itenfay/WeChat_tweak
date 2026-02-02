//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface CertInfo : NSObject
{
    unsigned int m_uiVersion;
    unsigned int m_uiKey;
    unsigned int m_uiLastUpdateTime;
    NSString *m_nsDesc;
    UIImage *m_imgIcon;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *m_imgIcon; // @synthesize m_imgIcon;
@property(retain, nonatomic) NSString *m_nsDesc; // @synthesize m_nsDesc;
@property(nonatomic) unsigned int m_uiLastUpdateTime; // @synthesize m_uiLastUpdateTime;
@property(nonatomic) unsigned int m_uiKey; // @synthesize m_uiKey;
@property(nonatomic) unsigned int m_uiVersion; // @synthesize m_uiVersion;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (void)preInit;

@end

