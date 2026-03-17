//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCPayCreExtInfo : NSObject
{
    unsigned int _m_needCreidRenewal;
    unsigned int _m_needBirthDate;
    unsigned int _m_needCreExpireDate;
    unsigned int _m_needCreType;
}

@property(nonatomic) unsigned int m_needCreType; // @synthesize m_needCreType=_m_needCreType;
@property(nonatomic) unsigned int m_needCreExpireDate; // @synthesize m_needCreExpireDate=_m_needCreExpireDate;
@property(nonatomic) unsigned int m_needBirthDate; // @synthesize m_needBirthDate=_m_needBirthDate;
@property(nonatomic) unsigned int m_needCreidRenewal; // @synthesize m_needCreidRenewal=_m_needCreidRenewal;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

