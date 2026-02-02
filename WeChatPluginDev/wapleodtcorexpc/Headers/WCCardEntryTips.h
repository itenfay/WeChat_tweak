//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCCardEntryTips
{
    _Bool _bShowNew;
    _Bool _bShowRedDot;
    _Bool _bNeedCheck;
    _Bool _bShowEntryNew;
    _Bool _bShowEntryRedDot;
    _Bool _bShowMeRedDot;
    NSString *_nsRedDotBuff;
    NSString *_nsTipWording;
    NSString *_nsTipIconUrl;
    NSString *_nsCardId;
}

+ (void)initialize;
+ (void)PBArrayAdd_bShowMeRedDot;
+ (void)PBArrayAdd_bShowEntryRedDot;
+ (void)PBArrayAdd_bShowEntryNew;
+ (void)PBArrayAdd_bNeedCheck;
+ (void)PBArrayAdd_nsCardId;
+ (void)PBArrayAdd_nsTipIconUrl;
+ (void)PBArrayAdd_nsTipWording;
+ (void)PBArrayAdd_nsRedDotBuff;
+ (void)PBArrayAdd_bShowRedDot;
+ (void)PBArrayAdd_bShowNew;
- (void).cxx_destruct;
@property(nonatomic) _Bool bShowMeRedDot; // @synthesize bShowMeRedDot=_bShowMeRedDot;
@property(nonatomic) _Bool bShowEntryRedDot; // @synthesize bShowEntryRedDot=_bShowEntryRedDot;
@property(nonatomic) _Bool bShowEntryNew; // @synthesize bShowEntryNew=_bShowEntryNew;
@property(nonatomic) _Bool bNeedCheck; // @synthesize bNeedCheck=_bNeedCheck;
@property(retain, nonatomic) NSString *nsCardId; // @synthesize nsCardId=_nsCardId;
@property(retain, nonatomic) NSString *nsTipIconUrl; // @synthesize nsTipIconUrl=_nsTipIconUrl;
@property(retain, nonatomic) NSString *nsTipWording; // @synthesize nsTipWording=_nsTipWording;
@property(retain, nonatomic) NSString *nsRedDotBuff; // @synthesize nsRedDotBuff=_nsRedDotBuff;
@property(nonatomic) _Bool bShowRedDot; // @synthesize bShowRedDot=_bShowRedDot;
@property(nonatomic) _Bool bShowNew; // @synthesize bShowNew=_bShowNew;
- (id)pathForCache;
- (void)loadFromCache;
- (void)saveToCache;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

