//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WSRecommendSetting : NSObject
{
    _Bool _hasConfirmVideoDragTips;
    _Bool _hasConfirmVideoGoodLookEducateAlert;
    _Bool _hasConfirmVideoGoodLookTipEducateToast;
    _Bool _hasWowContent;
    unsigned int _wowContentUpdateTs;
}

+ (void)initialize;
+ (void)PBArrayAdd_wowContentUpdateTs;
+ (void)PBArrayAdd_hasWowContent;
+ (void)PBArrayAdd_hasConfirmVideoGoodLookTipEducateToast;
+ (void)PBArrayAdd_hasConfirmVideoGoodLookEducateAlert;
+ (void)PBArrayAdd_hasConfirmVideoDragTips;
@property(nonatomic) unsigned int wowContentUpdateTs; // @synthesize wowContentUpdateTs=_wowContentUpdateTs;
@property(nonatomic) _Bool hasWowContent; // @synthesize hasWowContent=_hasWowContent;
@property(nonatomic) _Bool hasConfirmVideoGoodLookTipEducateToast; // @synthesize hasConfirmVideoGoodLookTipEducateToast=_hasConfirmVideoGoodLookTipEducateToast;
@property(nonatomic) _Bool hasConfirmVideoGoodLookEducateAlert; // @synthesize hasConfirmVideoGoodLookEducateAlert=_hasConfirmVideoGoodLookEducateAlert;
@property(nonatomic) _Bool hasConfirmVideoDragTips; // @synthesize hasConfirmVideoDragTips=_hasConfirmVideoDragTips;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

