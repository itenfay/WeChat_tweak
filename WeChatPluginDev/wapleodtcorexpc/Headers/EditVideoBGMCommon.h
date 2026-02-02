//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLRUCache, NSString;

@interface EditVideoBGMCommon
{
    MMLRUCache *_urlToFilePathMap;
}

+ (id)setAllText:(id)arg1 andSpcifiStr:(id)arg2 withColor:(id)arg3 specifiStrFont:(id)arg4;
+ (id)genLyricsFromLrcString:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMLRUCache *urlToFilePathMap; // @synthesize urlToFilePathMap=_urlToFilePathMap;
- (id)saveMusicPathWithMusicData:(id)arg1 components:(id)arg2;
- (id)getMusicPathWithMusicData:(id)arg1;
- (id)getMusicPath:(id)arg1;
- (id)_restoreMap;
- (void)_saveMap:(id)arg1;
- (void)onServiceTerminate;
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

