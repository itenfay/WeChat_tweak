//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface RebootWarningService
{
}

- (_Bool)tryToShowAlertWithID:(int)arg1 Key:(int)arg2 Value:(int)arg3 IsImportant:(_Bool)arg4;
- (void)showAlertWithID:(int)arg1 Key:(int)arg2 Value:(int)arg3 IsImportant:(_Bool)arg4;
- (_Bool)shouldShowAlert;
- (void)resetTimeOfWhenAlertAppears;
- (void)setTimeWhenAlertAppears;
- (unsigned int)getTimeElapsedSinceLastAlertAppears;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

