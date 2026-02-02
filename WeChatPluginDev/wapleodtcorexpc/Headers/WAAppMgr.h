//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAAppMgr
{
    unsigned int _lastUpdate;
}

@property(nonatomic) unsigned int lastUpdate; // @synthesize lastUpdate=_lastUpdate;
- (void)updateSearchPlaceHolder;
- (void)onLanguageChange;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

