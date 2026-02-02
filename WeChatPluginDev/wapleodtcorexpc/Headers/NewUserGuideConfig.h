//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface NewUserGuideConfig : NSObject
{
    _Bool _bShowMainFrameTip;
    _Bool _bShowContactsAddTip;
    _Bool _bShowVoiceTip;
    _Bool _bShowVoipAndPhoneTip;
    _Bool _bShowNearByRedDot;
    _Bool _bShowShakeRedDot;
    _Bool _bShowSightTip;
    unsigned int _uiRegTime;
    unsigned int _uiStartCount;
}

+ (void)initialize;
+ (void)PBArrayAdd_bShowSightTip;
+ (void)PBArrayAdd_bShowShakeRedDot;
+ (void)PBArrayAdd_bShowNearByRedDot;
+ (void)PBArrayAdd_bShowVoipAndPhoneTip;
+ (void)PBArrayAdd_bShowVoiceTip;
+ (void)PBArrayAdd_bShowContactsAddTip;
+ (void)PBArrayAdd_bShowMainFrameTip;
+ (void)PBArrayAdd_uiStartCount;
+ (void)PBArrayAdd_uiRegTime;
@property(nonatomic) _Bool bShowSightTip; // @synthesize bShowSightTip=_bShowSightTip;
@property(nonatomic) _Bool bShowShakeRedDot; // @synthesize bShowShakeRedDot=_bShowShakeRedDot;
@property(nonatomic) _Bool bShowNearByRedDot; // @synthesize bShowNearByRedDot=_bShowNearByRedDot;
@property(nonatomic) _Bool bShowVoipAndPhoneTip; // @synthesize bShowVoipAndPhoneTip=_bShowVoipAndPhoneTip;
@property(nonatomic) _Bool bShowVoiceTip; // @synthesize bShowVoiceTip=_bShowVoiceTip;
@property(nonatomic) _Bool bShowContactsAddTip; // @synthesize bShowContactsAddTip=_bShowContactsAddTip;
@property(nonatomic) _Bool bShowMainFrameTip; // @synthesize bShowMainFrameTip=_bShowMainFrameTip;
@property(nonatomic) unsigned int uiStartCount; // @synthesize uiStartCount=_uiStartCount;
@property(nonatomic) unsigned int uiRegTime; // @synthesize uiRegTime=_uiRegTime;
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

