//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

@interface WCPayOverseaReadActivityList : NSObject
{
    unsigned int _m_tpaCountry;
    NSMutableSet *_m_set;
}

+ (void)checkFileWithTpaCountryV2:(unsigned int)arg1;
+ (void)checkFileWithTpaCountry:(unsigned int)arg1;
+ (id)getSavePathWithTpaCountryV2:(unsigned int)arg1;
+ (id)getSavePathWithTpaCountry:(unsigned int)arg1;
+ (id)getSaveRootDir;
+ (id)cacheObjectWithTpaCountryV2:(unsigned int)arg1;
+ (id)cacheObjectWithTpaCountry:(unsigned int)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_m_set;
- (void).cxx_destruct;
@property(nonatomic) unsigned int m_tpaCountry; // @synthesize m_tpaCountry=_m_tpaCountry;
@property(retain, nonatomic) NSMutableSet *m_set; // @synthesize m_set=_m_set;
- (void)saveToCacheV2;
- (void)saveToCache;
- (_Bool)hasReadActivityId:(id)arg1;
- (void)addReadActivityId:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

