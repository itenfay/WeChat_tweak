//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMOverheatingCharacteristics, NSString;

@interface MMOverheatingDetector
{
    MMOverheatingCharacteristics *_currentCharacteristics;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMOverheatingCharacteristics *currentCharacteristics; // @synthesize currentCharacteristics=_currentCharacteristics;
- (void)handleNetworkChangeToUnreachable;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)notifyThatDeviceMayResignOverheating:(id)arg1;
- (void)notifyThatDeviceMayBecomeOverheating:(id)arg1;
- (void)initDetector;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

