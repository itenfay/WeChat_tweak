//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCMediaItem;

@protocol WCAlbumPreviewBrowserViewControllerDelegate <NSObject>
- (long long)getSelectedMediaType;
- (void)onPreviewPickFinish;
- (void)pickMedia:(WCMediaItem *)arg1;
- (_Bool)canSelectMediaInPreview:(WCMediaItem *)arg1;
- (long long)indexInSelectedMedia:(WCMediaItem *)arg1;
- (unsigned int)selectedMediaInfosCount;
@end

