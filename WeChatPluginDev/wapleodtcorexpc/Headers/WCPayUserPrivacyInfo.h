//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayUserPrivacyInfo : NSObject
{
    unsigned int _m_needAgreeDuty;
}

+ (id)LoadFromFile;
+ (void)initialize;
+ (void)PBArrayAdd_m_needAgreeDuty;
@property(nonatomic) unsigned int m_needAgreeDuty; // @synthesize m_needAgreeDuty=_m_needAgreeDuty;
@property(readonly, copy) NSString *description;
- (void)saveToFile;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

