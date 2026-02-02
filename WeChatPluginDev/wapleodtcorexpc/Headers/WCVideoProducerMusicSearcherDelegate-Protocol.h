//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSString, WCVideoProducerMusicCellViewModel, WCVideoProducerMusicSearcherViewController;

@protocol WCVideoProducerMusicSearcherDelegate <NSObject>
- (void)musicSearcherVC:(WCVideoProducerMusicSearcherViewController *)arg1 didRequestAudioModule:(_Bool)arg2;
- (void)musicSearcherVC:(WCVideoProducerMusicSearcherViewController *)arg1 didCancelWithMusic:(WCVideoProducerMusicCellViewModel *)arg2;
- (void)musicSearcherVC:(WCVideoProducerMusicSearcherViewController *)arg1 didCommitMusic:(WCVideoProducerMusicCellViewModel *)arg2;
- (void)musicSearcherVC:(WCVideoProducerMusicSearcherViewController *)arg1 didSelectMusic:(WCVideoProducerMusicCellViewModel *)arg2 atIndex:(NSIndexPath *)arg3;
- (void)musicSearcherVC:(WCVideoProducerMusicSearcherViewController *)arg1 didRequestSearchKey:(NSString *)arg2;
@end

