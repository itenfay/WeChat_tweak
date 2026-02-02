//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJMovieTextTitleViewController;

@protocol MJMovieTextTitleViewControllerDelegate <NSObject>
- (void)movieTitleVCDidSelectDelete:(MJMovieTextTitleViewController *)arg1;
- (void)movieTitleVCDidSelectTTS:(MJMovieTextTitleViewController *)arg1;
- (void)movieTitleVCDidSelectTrim:(MJMovieTextTitleViewController *)arg1;
- (void)movieTitleVCDidSelectEditStyle:(MJMovieTextTitleViewController *)arg1;
- (void)movieTitleVCDidSelectEditText:(MJMovieTextTitleViewController *)arg1;
- (void)movieTitleVCNeedsUpdate:(MJMovieTextTitleViewController *)arg1 onIsPlayingDidChange:(_Bool)arg2;
- (void)movieTitleVCNeedsUpdate:(MJMovieTextTitleViewController *)arg1 onPlaybackTimeDidChange:(CDStruct_1b6d18a9)arg2;
- (void)movieTitleVCNeedsUpdate:(MJMovieTextTitleViewController *)arg1 onSkimTimeDidChange:(CDStruct_1b6d18a9)arg2;
- (void)movieTitleVCNeedsResetPreview:(MJMovieTextTitleViewController *)arg1;
- (void)movieTitleVCNeedsReload:(MJMovieTextTitleViewController *)arg1;
@end

