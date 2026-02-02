//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface MMAutoAuthWrap : NSObject
{
    unsigned int _m_uiVersion;
    NSData *_m_dtAutoAuthKey;
    NSData *_m_dtServerId;
}

+ (void)initialize;
+ (void)PBArrayAdd_m_uiVersion;
+ (void)PBArrayAdd_m_dtServerId;
+ (void)PBArrayAdd_m_dtAutoAuthKey;
- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiVersion; // @synthesize m_uiVersion=_m_uiVersion;
@property(retain, nonatomic) NSData *m_dtServerId; // @synthesize m_dtServerId=_m_dtServerId;
@property(retain, nonatomic) NSData *m_dtAutoAuthKey; // @synthesize m_dtAutoAuthKey=_m_dtAutoAuthKey;
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

