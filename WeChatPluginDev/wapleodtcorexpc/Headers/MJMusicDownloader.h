//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EditVideoBGMPlayer;
@protocol MMBGMSelectedMusicDataProtocol;

@interface MJMusicDownloader : NSObject
{
    _Bool _isCancelled;
    EditVideoBGMPlayer *_bgmPlayer;
    id <MMBGMSelectedMusicDataProtocol> _firstMusicInfo;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) id <MMBGMSelectedMusicDataProtocol> firstMusicInfo; // @synthesize firstMusicInfo=_firstMusicInfo;
@property(retain, nonatomic) EditVideoBGMPlayer *bgmPlayer; // @synthesize bgmPlayer=_bgmPlayer;
@property(nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
- (id)convertMusicLyricInfos;
- (void)callCompletionOnError:(id)arg1;
- (void)callCompletionOnSucceesWithMusicInfo:(id)arg1 musicFilePath:(id)arg2;
- (void)cancel;
- (void)handleDownloadMusicResult:(_Bool)arg1;
- (void)handleMusicRecommendResult:(id)arg1;
- (void)downloadFirstMusicWithTimeout:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

