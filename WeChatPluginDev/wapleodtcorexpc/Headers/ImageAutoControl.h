//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ImageAutoControl : NSObject
{
    int _m_nDownloadCount;
    double _m_douLimitBegin;
}

+ (void)initialize;
+ (void)PBArrayAdd_m_nDownloadCount;
+ (void)PBArrayAdd_m_douLimitBegin;
@property(nonatomic) int m_nDownloadCount; // @synthesize m_nDownloadCount=_m_nDownloadCount;
@property(nonatomic) double m_douLimitBegin; // @synthesize m_douLimitBegin=_m_douLimitBegin;
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

