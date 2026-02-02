//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface MMMyChatRoomSessionMgr
{
    _Bool _hasPreLoadCache;
    NSMutableDictionary *_dicMyChatTimeInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasPreLoadCache; // @synthesize hasPreLoadCache=_hasPreLoadCache;
@property(retain, nonatomic) NSMutableDictionary *dicMyChatTimeInfo; // @synthesize dicMyChatTimeInfo=_dicMyChatTimeInfo;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)hasLoaded;
- (void)loadMyChatTimeIfNeeded;
- (void)onServiceMemoryWarning;
- (void)onServiceClearData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

