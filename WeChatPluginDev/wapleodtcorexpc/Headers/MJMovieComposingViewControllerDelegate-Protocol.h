//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJMovieComposingViewController, MMImagePreviewControllerActionFlow, NSDictionary, NSError, NSURL;

@protocol MJMovieComposingViewControllerDelegate <NSObject>
- (void)composingViewController:(MJMovieComposingViewController *)arg1 didFinishWithActionFlow:(MMImagePreviewControllerActionFlow *)arg2 userInfo:(NSDictionary *)arg3;
- (void)composingViewController:(MJMovieComposingViewController *)arg1 didFinishWithVideoFileURL:(NSURL *)arg2 userInfo:(NSDictionary *)arg3;
- (void)composingViewController:(MJMovieComposingViewController *)arg1 didFailWithError:(NSError *)arg2;
- (void)composingViewControllerDidCancel:(MJMovieComposingViewController *)arg1;
@end

