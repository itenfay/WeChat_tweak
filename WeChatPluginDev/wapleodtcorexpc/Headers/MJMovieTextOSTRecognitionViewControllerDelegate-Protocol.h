//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJMovieTextOSTRecognitionViewController, MJTimelineViewController;

@protocol MJMovieTextOSTRecognitionViewControllerDelegate <NSObject>
- (void)OSTRecognitionVC:(MJMovieTextOSTRecognitionViewController *)arg1 didUpdateTimelineViewController:(MJTimelineViewController *)arg2;
- (void)OSTRecognitionVCDidSelectEditCaptionStyle:(MJMovieTextOSTRecognitionViewController *)arg1;
- (void)OSTRecognitionVCDidSelectEditCaptionText:(MJMovieTextOSTRecognitionViewController *)arg1;
@end

