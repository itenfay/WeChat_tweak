//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMDiskFileSpecialStat : NSObject
{
    unsigned int _m_fileNum;
    unsigned long long _m_fileSize;
}

+ (void)sumDicSpecialFilStat:(id)arg1 toDic:(id)arg2;
+ (void)sumSpecialFileStat:(long long)arg1 specialType:(int)arg2 withFileSize:(unsigned long long)arg3 toDic:(id)arg4;
+ (void)initialize;
+ (void)PBArrayAdd_m_fileSize;
+ (void)PBArrayAdd_m_fileNum;
@property(nonatomic) unsigned long long m_fileSize; // @synthesize m_fileSize=_m_fileSize;
@property(nonatomic) unsigned int m_fileNum; // @synthesize m_fileNum=_m_fileNum;
- (void)sumSpecialFileStat:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

