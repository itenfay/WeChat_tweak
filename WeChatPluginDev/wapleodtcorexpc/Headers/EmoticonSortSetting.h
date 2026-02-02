//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface EmoticonSortSetting : NSObject
{
    NSMutableArray *_m_sortPids;
}

+ (void)initialize;
+ (void)PBArrayAdd_m_sortPids;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *m_sortPids; // @synthesize m_sortPids=_m_sortPids;
- (id)getOldSortPackageListWithDownloadedTusiji:(id)arg1;
- (id)getSortPackageListWithDownloadedTusiji:(id)arg1;
- (id)getSortPackageList:(id)arg1 withTusiji:(_Bool)arg2;
- (id)getLocalCachePath;
- (id)getLocalCacheRootDir;
- (void)saveSetting;
- (void)copyFeildFrom:(id)arg1;
- (_Bool)loadSetting;
- (void)resetSetting;
- (id)init;
@property(retain, nonatomic) NSMutableArray *m_newSortPids;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

