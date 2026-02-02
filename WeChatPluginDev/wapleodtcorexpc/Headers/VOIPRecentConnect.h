//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface VOIPRecentConnect : NSObject
{
    NSMutableArray *_m_videoRecentConnectUserName;
    NSMutableArray *_m_voiceRecentConnectUserName;
}

+ (id)loadFromFile;
+ (id)getSavePath;
+ (id)getSaveRootDir;
+ (void)initialize;
+ (void)PBArrayAdd_m_voiceRecentConnectUserName;
+ (void)PBArrayAdd_m_videoRecentConnectUserName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *m_voiceRecentConnectUserName; // @synthesize m_voiceRecentConnectUserName=_m_voiceRecentConnectUserName;
@property(retain, nonatomic) NSMutableArray *m_videoRecentConnectUserName; // @synthesize m_videoRecentConnectUserName=_m_videoRecentConnectUserName;
- (void)saveToCache;
- (void)addRecentVoiceConnect:(id)arg1;
- (void)addRecentVideoConnect:(id)arg1;
- (id)getRecentVoiceContact;
- (id)getRecentVideoConnect;
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

