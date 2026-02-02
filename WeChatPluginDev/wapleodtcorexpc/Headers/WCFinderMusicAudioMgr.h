//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet, NSString;

@interface WCFinderMusicAudioMgr
{
    NSMutableSet *_pages;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *pages; // @synthesize pages=_pages;
- (void)popMonitorStack:(id)arg1;
- (id)pageNameForVC:(id)arg1;
- (void)pushMonitorStack:(id)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

