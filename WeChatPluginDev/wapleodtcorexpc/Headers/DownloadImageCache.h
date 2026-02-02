//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface DownloadImageCache : NSObject
{
    _Bool _m_bHD;
    unsigned int _m_uiLocalID;
    unsigned int _m_uiLastReadTime;
    NSString *_m_nsMD5;
    NSString *_m_nsChatName;
}

+ (void)initialize;
+ (void)PBArrayAdd_m_bHD;
+ (void)PBArrayAdd_m_uiLastReadTime;
+ (void)PBArrayAdd_m_uiLocalID;
+ (void)PBArrayAdd_m_nsChatName;
+ (void)PBArrayAdd_m_nsMD5;
- (void).cxx_destruct;
@property(nonatomic) _Bool m_bHD; // @synthesize m_bHD=_m_bHD;
@property(nonatomic) unsigned int m_uiLastReadTime; // @synthesize m_uiLastReadTime=_m_uiLastReadTime;
@property(nonatomic) unsigned int m_uiLocalID; // @synthesize m_uiLocalID=_m_uiLocalID;
@property(retain, nonatomic) NSString *m_nsChatName; // @synthesize m_nsChatName=_m_nsChatName;
@property(retain, nonatomic) NSString *m_nsMD5; // @synthesize m_nsMD5=_m_nsMD5;
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

