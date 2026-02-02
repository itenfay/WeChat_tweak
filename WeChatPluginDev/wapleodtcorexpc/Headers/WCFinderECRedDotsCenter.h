//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderECRedDotsCenter : NSObject
{
}

- (_Bool)shouldRejectRedDot:(id)arg1;
@property(readonly, nonatomic) _Bool shouldSyncECRedDots;
- (void)onFinderCardsEntryShouldShowChange;
- (void)onGetBizId1:(long long)arg1 data:(id)arg2;
- (void)onEcInitForStartDone;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

