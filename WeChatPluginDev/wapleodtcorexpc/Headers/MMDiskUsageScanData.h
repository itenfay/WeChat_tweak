//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMDiskUsageScanStat, MMFolderWrap, NSString;

@interface MMDiskUsageScanData : NSObject
{
    MMDiskUsageScanStat *_m_stat;
    MMFolderWrap *_m_rootFolder;
}

+ (id)getNewDiskUsageScanData;
+ (id)scanRootDir;
+ (void)initialize;
+ (void)PBArrayAdd_m_rootFolder;
+ (void)PBArrayAdd_m_stat;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFolderWrap *m_rootFolder; // @synthesize m_rootFolder=_m_rootFolder;
@property(retain, nonatomic) MMDiskUsageScanStat *m_stat; // @synthesize m_stat=_m_stat;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

