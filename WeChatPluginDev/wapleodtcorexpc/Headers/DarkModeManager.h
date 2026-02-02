//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface DarkModeManager
{
    _Bool _skipNextReport;
}

@property(nonatomic) _Bool skipNextReport; // @synthesize skipNextReport=_skipNextReport;
- (void)reportAction:(long long)arg1;
- (void)onAppWillEnterForeground:(id)arg1;
- (void)onAppDidEnterBackground:(id)arg1;
- (void)onAppWillResignActive:(id)arg1;
- (void)mm_traitCollectionDidChange:(id)arg1;
- (void)changeDarkModeConfigType:(long long)arg1;
- (void)launchReport;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

