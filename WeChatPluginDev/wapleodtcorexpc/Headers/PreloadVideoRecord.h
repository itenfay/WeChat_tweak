//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface PreloadVideoRecord : NSObject
{
    unsigned int _m_uiAccessTime;
    NSString *_m_nsTempPath;
    NSString *_m_nsChatName;
}

+ (void)initialize;
+ (void)PBArrayAdd_m_nsChatName;
+ (void)PBArrayAdd_m_uiAccessTime;
+ (void)PBArrayAdd_m_nsTempPath;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsChatName; // @synthesize m_nsChatName=_m_nsChatName;
@property(nonatomic) unsigned int m_uiAccessTime; // @synthesize m_uiAccessTime=_m_uiAccessTime;
@property(retain, nonatomic) NSString *m_nsTempPath; // @synthesize m_nsTempPath=_m_nsTempPath;
- (id)pathForTempVideo;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

