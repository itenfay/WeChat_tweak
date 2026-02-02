//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJShootPreviewViewController, OMJRecordingFinishInfo;

@protocol MJShootPreviewViewControllerDelegate <NSObject>
- (void)didRecevieAIResultFromServerTimeoutInShootPreviewViewController:(MJShootPreviewViewController *)arg1;
- (void)shootPreviewViewController:(MJShootPreviewViewController *)arg1 didFinishClipWithInfo:(OMJRecordingFinishInfo *)arg2;
- (void)shootPreviewViewController:(MJShootPreviewViewController *)arg1 didFinishExportWithInfo:(OMJRecordingFinishInfo *)arg2;
@end

