//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WAMainListNearByLocationLogic;

@interface WAMainListMenuLogic : NSObject
{
    CDUnknownBlockType _menuInfoRespAction;
    NSMutableArray *_entranceInfoList;
    WAMainListNearByLocationLogic *_locationLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAMainListNearByLocationLogic *locationLogic; // @synthesize locationLogic=_locationLogic;
@property(retain, nonatomic) NSMutableArray *entranceInfoList; // @synthesize entranceInfoList=_entranceInfoList;
@property(copy, nonatomic) CDUnknownBlockType menuInfoRespAction; // @synthesize menuInfoRespAction=_menuInfoRespAction;
- (id)entranceInfoCache;
- (void)updateEntranceInfoCache:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onGetLocationFailedWithReason:(unsigned int)arg1;
- (void)onGetLocationSuccess:(id)arg1;
- (id)entranceInfoById:(int)arg1;
- (void)requestWithLocation:(id)arg1;
- (void)requestMainListMenuInfoWithCompleteAction:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

