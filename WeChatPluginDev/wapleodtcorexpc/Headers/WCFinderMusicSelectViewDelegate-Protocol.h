//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIViewController, WCVideoProducerMusicCellViewModel;

@protocol WCFinderMusicSelectViewDelegate <NSObject>

@optional
- (void)finderTemplateMusicViewDidChangeOriginSoundEnabled:(_Bool)arg1;
- (void)finderTemplateMusicViewDidAddMusicFromSearchModel:(WCVideoProducerMusicCellViewModel *)arg1;
- (void)finderTemplateMusicViewDidCancelSearchMusic;
- (void)finderTemplateMusicViewDidStartSearchMusic;
- (UIViewController *)finderTemplateMuiscViewGetViewController;
- (void)finderTemplateMuiscViewDidChangeToANewIndex:(unsigned long long)arg1;
- (void)finderTemplateMuiscViewDidClickMusic;
- (void)finderTemplateMuiscViewDidClickOstBtn;
- (void)finderTemplateMuiscViewDidClickCloseBtn;
@end

