//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface TingAppTaskServiceCpp
{
}

+ (id)sharedInstance;
- (void)setDisplayMode:(int)arg1;
- (int)displayMode;
- (id)sessionId;
- (long long)enterScene;
- (void)clearSession;
- (void)updateSessionWithEnterScene:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

