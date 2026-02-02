//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface MMListenGetLyricService
{
    NSMutableDictionary *_musicKey2GetLyricResponseItem;
    NSMutableDictionary *_musicKey2GetLyricResponseTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *musicKey2GetLyricResponseTime; // @synthesize musicKey2GetLyricResponseTime=_musicKey2GetLyricResponseTime;
@property(retain, nonatomic) NSMutableDictionary *musicKey2GetLyricResponseItem; // @synthesize musicKey2GetLyricResponseItem=_musicKey2GetLyricResponseItem;
- (id)genMusicKeyWithMusicInfo:(id)arg1;
- (id)lyricItemWithListenId:(id)arg1 listenGetLyricResponse:(id)arg2;
- (void)sendGetListenItemWithSongId:(id)arg1 musicInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendGetListenLyricWithSongId:(id)arg1 musicInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

