//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCCardMsgTips
{
    unsigned int _newCount;
    unsigned int _lastUpdateTime;
    NSString *_nsTipWording;
    NSString *_nsTipIconUrl;
}

+ (void)initialize;
+ (void)PBArrayAdd_nsTipIconUrl;
+ (void)PBArrayAdd_nsTipWording;
+ (void)PBArrayAdd_lastUpdateTime;
+ (void)PBArrayAdd_newCount;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *nsTipIconUrl; // @synthesize nsTipIconUrl=_nsTipIconUrl;
@property(retain, nonatomic) NSString *nsTipWording; // @synthesize nsTipWording=_nsTipWording;
@property(nonatomic) unsigned int lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(nonatomic) unsigned int newCount; // @synthesize newCount=_newCount;
- (id)pathForCardMsgTips;
- (void)loadCardMsgTipsFromCache;
- (void)saveCardMsgTipsToCache;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

