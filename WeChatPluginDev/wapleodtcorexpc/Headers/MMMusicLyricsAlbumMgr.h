//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface MMMusicLyricsAlbumMgr
{
    NSMutableArray *m_arrMusicItems;
    NSString *m_nsLyricsRootPath;
    NSString *m_nsAlbumCoverRootPath;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetLyricsAndAlbumResp:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)GetLyricsAndAlbumFromSvr:(id)arg1;
- (unsigned long long)indexOfMusicByWeUrl:(id)arg1;
- (_Bool)saveAlbumCoverToFile:(id)arg1 FilePath:(id)arg2;
- (_Bool)saveLyricsToFile:(id)arg1 FilePath:(id)arg2;
- (id)getLyricsFromFile:(id)arg1;
- (id)getAlbumCoverName:(id)arg1 AndSinger:(id)arg2;
- (id)getLyricFileName:(id)arg1 AndSinger:(id)arg2;
- (void)GetLyricsAndAlbumCoverByMusicInfo:(id)arg1;
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

