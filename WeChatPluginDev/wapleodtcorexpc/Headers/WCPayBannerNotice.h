//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayBannerNotice : NSObject
{
    unsigned int _m_readOnly;
    NSString *_m_detailUrl;
    NSString *_m_wording;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_readOnly; // @synthesize m_readOnly=_m_readOnly;
@property(retain, nonatomic) NSString *m_wording; // @synthesize m_wording=_m_wording;
@property(retain, nonatomic) NSString *m_detailUrl; // @synthesize m_detailUrl=_m_detailUrl;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

