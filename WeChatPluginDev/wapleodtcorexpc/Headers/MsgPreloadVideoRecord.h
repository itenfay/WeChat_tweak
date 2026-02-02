//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MsgPreloadVideoRecord : NSObject
{
    _Bool _m_bNonAutoClean;
    unsigned int _m_uiLocalID;
    unsigned int _m_uiAccessTime;
    unsigned int _m_uiHasPreloadSize;
    NSString *_m_nsChatName;
}

+ (void)initialize;
+ (void)PBArrayAdd_m_bNonAutoClean;
+ (void)PBArrayAdd_m_uiHasPreloadSize;
+ (void)PBArrayAdd_m_uiAccessTime;
+ (void)PBArrayAdd_m_uiLocalID;
+ (void)PBArrayAdd_m_nsChatName;
- (void).cxx_destruct;
@property(nonatomic) _Bool m_bNonAutoClean; // @synthesize m_bNonAutoClean=_m_bNonAutoClean;
@property(nonatomic) unsigned int m_uiHasPreloadSize; // @synthesize m_uiHasPreloadSize=_m_uiHasPreloadSize;
@property(nonatomic) unsigned int m_uiAccessTime; // @synthesize m_uiAccessTime=_m_uiAccessTime;
@property(nonatomic) unsigned int m_uiLocalID; // @synthesize m_uiLocalID=_m_uiLocalID;
@property(retain, nonatomic) NSString *m_nsChatName; // @synthesize m_nsChatName=_m_nsChatName;
- (_Bool)isChatRoom;
- (id)pathForPreloadVideo;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

