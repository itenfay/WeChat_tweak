//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MegaVideoMinimizeServiceCpp
{
}

+ (id)sharedInstance;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)playerDetailModel;
- (void)setPlayerDetailModel:(id)arg1;
- (long long)currentPlayerId;
- (void)updateCurrentPlayerId:(long long)arg1;
- (id)minimizeContext;
- (void)onMinimizeDeactive;
- (void)onMinimizeActive:(id)arg1;
- (_Bool)hasMinimize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

