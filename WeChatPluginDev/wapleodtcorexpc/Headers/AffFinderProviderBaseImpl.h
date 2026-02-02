//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AffFinderProviderCallback, NSString;

@interface AffFinderProviderBaseImpl : NSObject
{
    AffFinderProviderCallback *_callback;
}

+ (void)loadContext;
- (void).cxx_destruct;
@property(retain, nonatomic) AffFinderProviderCallback *callback; // @synthesize callback=_callback;
- (void)reddotWillRevokeTipsUuidArray:(id)arg1;
- (int)getCurFinderUnreadCountByUsername:(id)arg1 fromRedDotPath:(_Bool)arg2;
- (int)getPrivateMsgTotalUnreadCountByUsername:(id)arg1;
- (_Bool)reddotPersonalExposeClearSwitch;
- (void)finderRedDotDataChangedActionAsync:(unsigned long long)arg1 actionType:(int)arg2 subReasonType:(int)arg3 fromCtrlInfoData:(id)arg4 toCtrlInfoData:(id)arg5 disposePath:(id)arg6;
- (void)finderRedDotHasDisposeActionAsync:(unsigned long long)arg1 path:(id)arg2 ctrlInfoData:(id)arg3;
- (_Bool)finderRedDotEnableUseCtrlInfoInNMStrategy:(id)arg1 ignoreNMFrequency:(_Bool)arg2 maxPriorityCtrlInfoData:(id)arg3;
- (_Bool)finderRedDotWillDisposeAction:(id)arg1;
- (void)finderRedDotHasAddActionAsync:(unsigned long long)arg1 ctrlInfoData:(id)arg2;
- (_Bool)finderRedDotWillAddAction:(id)arg1;
- (void)finderRedDotDataReceiveRedDotBindObjectPathKey:(id)arg1;
- (void)finderRedDotDataRevokedWithPathKey:(id)arg1;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)finderRedDotDataReceiveWithPathKey:(id)arg1 isAlreadExistRedDot:(_Bool)arg2;
- (id)finderGetCGIBaseRequest:(int)arg1 scene:(int)arg2;
- (id)getContact:(id)arg1;
- (id)getFeedSessionBuffer:(id)arg1 scene:(int)arg2 extraKey:(id)arg3;
- (id)getCacheLocation;
- (id)getLocalFinderObject:(id)arg1;
- (void)saveFinderObject:(id)arg1 scene:(int)arg2 sessionBufferExtraKey:(id)arg3;
- (id)curContextID;
- (id)curTabSessionID;
- (id)finderGetCurrentUsername;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

