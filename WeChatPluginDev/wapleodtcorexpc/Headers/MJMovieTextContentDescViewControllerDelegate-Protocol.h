//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJElementSegmentViewModel, MJMovieTextContentDescViewController, NSIndexPath;

@protocol MJMovieTextContentDescViewControllerDelegate <NSObject>
- (void)contentDescVC:(MJMovieTextContentDescViewController *)arg1 didTapOnSegmentAtIndexPath:(NSIndexPath *)arg2;
- (long long)contentDescVC:(MJMovieTextContentDescViewController *)arg1 willScrollThumbnailToTime:(CDStruct_1b6d18a9)arg2 showHandleBox:(_Bool)arg3;
- (MJElementSegmentViewModel *)contentDescVC:(MJMovieTextContentDescViewController *)arg1 requestStoryElementSegmentVMAtIndexPath:(NSIndexPath *)arg2;
- (long long)contentDescVCRequestNumberOfStoryElementSegmentVMs:(MJMovieTextContentDescViewController *)arg1;
- (void)contentDescVCDidSelectDelete:(MJMovieTextContentDescViewController *)arg1;
- (void)contentDescVCDidSelectEditStyle:(MJMovieTextContentDescViewController *)arg1;
- (void)contentDescVCDidSelectEditText:(MJMovieTextContentDescViewController *)arg1;
- (void)contentDescVCNeedsUpdate:(MJMovieTextContentDescViewController *)arg1 onIsPlayingDidChange:(_Bool)arg2;
- (void)contentDescVCNeedsUpdate:(MJMovieTextContentDescViewController *)arg1 onPlaybackTimeDidChange:(CDStruct_1b6d18a9)arg2;
- (void)contentDescVCNeedsUpdate:(MJMovieTextContentDescViewController *)arg1 onSkimTimeDidChange:(CDStruct_1b6d18a9)arg2;
- (void)contentDescVCNeedsResetPreview:(MJMovieTextContentDescViewController *)arg1;
- (void)contentDescVCNeedsReload:(MJMovieTextContentDescViewController *)arg1;
@end

