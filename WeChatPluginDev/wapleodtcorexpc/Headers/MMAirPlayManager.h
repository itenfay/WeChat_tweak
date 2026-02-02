//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface MMAirPlayManager
{
    NSMutableDictionary *_mutedToastRecords;
}

- (void).cxx_destruct;
- (void)airPlayCenter:(id)arg1 routeDidChange:(id)arg2;
- (void)resetMutedToastRecordsForAllScenes;
- (void)resetMutedToastRecordsForScene:(long long)arg1;
- (_Bool)showMutedToastForScene:(long long)arg1;
- (_Bool)canShowMutedToastForScene:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

