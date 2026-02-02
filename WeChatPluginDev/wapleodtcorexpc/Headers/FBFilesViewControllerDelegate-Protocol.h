//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FBFilesViewController, NSArray, WCFileBrowseInfo;

@protocol FBFilesViewControllerDelegate <NSObject>

@optional
- (void)FBFilesViewController:(FBFilesViewController *)arg1 DidSelectFiles:(NSArray *)arg2;
- (_Bool)onFileBrowseWillSelectFile:(WCFileBrowseInfo *)arg1 selectedFiles:(NSArray *)arg2;
@end

