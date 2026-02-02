//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AffFinderProviderCallback, NSArray, NSData, NSString;

@protocol AffFinderProviderBase <NSObject>

@optional
- (NSData *)getCacheLocation;
- (void)saveFinderObject:(NSArray *)arg1 scene:(int)arg2 sessionBufferExtraKey:(NSString *)arg3;
- (NSString *)getFeedSessionBuffer:(NSString *)arg1 scene:(int)arg2 extraKey:(NSString *)arg3;
- (NSArray *)getLocalFinderObject:(NSArray *)arg1;
- (NSArray *)getContact:(NSString *)arg1;
- (void)reddotWillRevokeTipsUuidArray:(NSArray *)arg1;
- (int)getCurFinderUnreadCountByUsername:(NSString *)arg1 fromRedDotPath:(_Bool)arg2;
- (int)getPrivateMsgTotalUnreadCountByUsername:(NSString *)arg1;
- (_Bool)reddotPersonalExposeClearSwitch;
- (void)finderRedDotDataChangedActionAsync:(unsigned long long)arg1 actionType:(int)arg2 subReasonType:(int)arg3 fromCtrlInfoData:(NSData *)arg4 toCtrlInfoData:(NSData *)arg5 disposePath:(NSString *)arg6;
- (void)finderRedDotDataReceiveRedDotBindObjectPathKey:(NSString *)arg1;
- (void)finderRedDotDataRevokedWithPathKey:(NSString *)arg1;
- (void)finderRedDotDataChangedWithPathKey:(NSString *)arg1;
- (void)finderRedDotDataReceiveWithPathKey:(NSString *)arg1 isAlreadExistRedDot:(_Bool)arg2;
- (_Bool)finderRedDotEnableUseCtrlInfoInNMStrategy:(NSString *)arg1 ignoreNMFrequency:(_Bool)arg2 maxPriorityCtrlInfoData:(NSData *)arg3;
- (void)finderRedDotHasDisposeActionAsync:(unsigned long long)arg1 path:(NSString *)arg2 ctrlInfoData:(NSData *)arg3;
- (_Bool)finderRedDotWillDisposeAction:(NSString *)arg1;
- (void)finderRedDotHasAddActionAsync:(unsigned long long)arg1 ctrlInfoData:(NSData *)arg2;
- (_Bool)finderRedDotWillAddAction:(NSData *)arg1;
- (NSData *)finderGetCGIBaseRequest:(int)arg1 scene:(int)arg2;
- (NSString *)curContextID;
- (NSString *)curTabSessionID;
- (NSString *)finderGetCurrentUsername;
- (void)setCallback:(AffFinderProviderCallback *)arg1;
@end

