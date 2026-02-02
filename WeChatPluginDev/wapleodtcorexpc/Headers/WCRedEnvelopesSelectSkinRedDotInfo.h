//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCRedEnvelopesSelectSkinRedDotInfo : NSObject
{
    _Bool _isShow;
    _Bool _selectskinpage_is_show;
    NSString *_wording_cn;
    NSString *_wording_hk;
    NSString *_wording_tw;
    NSString *_wording_en;
    NSString *_iconUrl;
    long long _exposureTimes;
    long long _invalidateTime;
    NSString *_version;
    long long _effectiveTime;
    long long _reddotType;
    long long _selectskinpage_exposureTimes;
    long long _selectskinpage_invalidateTime;
    NSString *_tagName;
}

+ (_Bool)isVersionInNeverShowList:(id)arg1;
+ (void)addVersionToNeverShowList:(id)arg1;
+ (void)setSkinPlazaClicked;
+ (_Bool)isSkinPlazaClicked;
+ (void)saveEffectiveEndTime:(unsigned int)arg1;
+ (unsigned int)getEffectiveEndTime;
+ (id)CurrentRedDot;
+ (id)InfoFromCoverSetRedDotInfo:(id)arg1;
+ (id)getMMKV;
+ (unsigned int)getClickReddotTime;
+ (void)saveClickReddotTime:(unsigned int)arg1;
+ (void)saveVersion:(id)arg1;
+ (void)clearLocalRedDotInfo;
+ (_Bool)isVersionExist:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_tagName;
+ (void)PBArrayAdd_selectskinpage_invalidateTime;
+ (void)PBArrayAdd_selectskinpage_exposureTimes;
+ (void)PBArrayAdd_selectskinpage_is_show;
+ (void)PBArrayAdd_reddotType;
+ (void)PBArrayAdd_effectiveTime;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_invalidateTime;
+ (void)PBArrayAdd_exposureTimes;
+ (void)PBArrayAdd_iconUrl;
+ (void)PBArrayAdd_wording_en;
+ (void)PBArrayAdd_wording_tw;
+ (void)PBArrayAdd_wording_hk;
+ (void)PBArrayAdd_wording_cn;
+ (void)PBArrayAdd_isShow;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
@property(nonatomic) long long selectskinpage_invalidateTime; // @synthesize selectskinpage_invalidateTime=_selectskinpage_invalidateTime;
@property(nonatomic) long long selectskinpage_exposureTimes; // @synthesize selectskinpage_exposureTimes=_selectskinpage_exposureTimes;
@property(nonatomic) _Bool selectskinpage_is_show; // @synthesize selectskinpage_is_show=_selectskinpage_is_show;
@property(nonatomic) long long reddotType; // @synthesize reddotType=_reddotType;
@property(nonatomic) long long effectiveTime; // @synthesize effectiveTime=_effectiveTime;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(nonatomic) long long invalidateTime; // @synthesize invalidateTime=_invalidateTime;
@property(nonatomic) long long exposureTimes; // @synthesize exposureTimes=_exposureTimes;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *wording_en; // @synthesize wording_en=_wording_en;
@property(retain, nonatomic) NSString *wording_tw; // @synthesize wording_tw=_wording_tw;
@property(retain, nonatomic) NSString *wording_hk; // @synthesize wording_hk=_wording_hk;
@property(retain, nonatomic) NSString *wording_cn; // @synthesize wording_cn=_wording_cn;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
- (void)save;
- (id)getWording;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

