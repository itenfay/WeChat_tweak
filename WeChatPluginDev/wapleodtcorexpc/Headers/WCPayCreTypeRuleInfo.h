//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCPayCreExtInfo;

@interface WCPayCreTypeRuleInfo : NSObject
{
    unsigned int _m_supportCreType;
    WCPayCreExtInfo *_m_creNeedInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayCreExtInfo *m_creNeedInfo; // @synthesize m_creNeedInfo=_m_creNeedInfo;
@property(nonatomic) unsigned int m_supportCreType; // @synthesize m_supportCreType=_m_supportCreType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

