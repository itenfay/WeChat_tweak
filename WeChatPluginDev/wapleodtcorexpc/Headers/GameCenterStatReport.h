//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface GameCenterStatReport
{
}

- (_Bool)svrReport:(unsigned int)arg1 withLogExt:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)stat13384:(id)arg1;
- (void)stat31408:(id)arg1;
- (void)stat12909:(id)arg1;
- (void)report12909WithWithScene:(long long)arg1 uiArea:(unsigned int)arg2 position:(unsigned int)arg3 action:(long long)arg4 extInfo:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

