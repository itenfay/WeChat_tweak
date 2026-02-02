//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMAssetInfo, MMAssetPickerController, NSArray, NSMutableArray, WCFileBrowseInfo, WCFileBrowser;

@protocol WCFileBrowseDelegate <NSObject>

@optional
- (void)onFileBrowser:(WCFileBrowser *)arg1 assetPickerController:(MMAssetPickerController *)arg2 clickAssetInfo:(MMAssetInfo *)arg3;
- (void)onFileBrowser:(WCFileBrowser *)arg1 clickFile:(WCFileBrowseInfo *)arg2;
- (void)onFileBrowseOpeniCloud;
- (void)onFileBrowseMultiSelect:(NSMutableArray *)arg1;
- (_Bool)onFileBrowseWillSelectFile:(WCFileBrowseInfo *)arg1 selected:(NSArray *)arg2;
@end

