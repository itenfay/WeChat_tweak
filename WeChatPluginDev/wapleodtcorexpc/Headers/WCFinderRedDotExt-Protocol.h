//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderRedDotCtrlInfo;

@protocol WCFinderRedDotExt <NSObject>

@optional
- (void)finderRedDotDataHitFrequencyAtPath:(NSString *)arg1 ctrlInfo:(WCFinderRedDotCtrlInfo *)arg2;
- (void)finderRedDotDataChangedActionType:(unsigned long long)arg1 subReasonType:(unsigned long long)arg2 fromCtrlInfo:(WCFinderRedDotCtrlInfo *)arg3 toCtrlInfo:(WCFinderRedDotCtrlInfo *)arg4 disposePath:(NSString *)arg5;
- (void)finderRedDotDataReceiveRedDotBindObjectPathKey:(NSString *)arg1;
- (void)finderRedDotDataRevokedWithPathKey:(NSString *)arg1;
- (void)finderRedDotDataChangedWithPathKey:(NSString *)arg1;
- (void)finderRedDotDataReceiveWithPathKey:(NSString *)arg1 isAlreadExistRedDot:(_Bool)arg2;
@end

