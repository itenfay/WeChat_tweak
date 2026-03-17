//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMAssetInfo, NSArray, NSString, WCVideoProducerAssetCellViewModel, WCVideoProducerAssetClipperViewController;

@protocol WCVideoProducerAssetClipperDelegate <NSObject>
- (void)assetClipperVC:(WCVideoProducerAssetClipperViewController *)arg1 didCancelWithCellVM:(WCVideoProducerAssetCellViewModel *)arg2;
- (void)assetClipperVC:(WCVideoProducerAssetClipperViewController *)arg1 didCommitWithCellVM:(WCVideoProducerAssetCellViewModel *)arg2;
- (void)assetClipperVC:(WCVideoProducerAssetClipperViewController *)arg1 didClickLaunchMJApp:(_Bool)arg2 withCellVMList:(NSArray *)arg3;
- (void)assetClipperVC:(WCVideoProducerAssetClipperViewController *)arg1 didShowLaunchMJApp:(_Bool)arg2;
- (void)assetClipperVC:(WCVideoProducerAssetClipperViewController *)arg1 didPlaySegmentWithId:(NSString *)arg2 forTimeRangeInClip:(CDStruct_e83c9415)arg3;
- (void)assetClipperVC:(WCVideoProducerAssetClipperViewController *)arg1 didSeekSegmentWithId:(NSString *)arg2 toTimeInClip:(CDStruct_1b6d18a9)arg3;
- (MMAssetInfo *)assetClipperVC:(WCVideoProducerAssetClipperViewController *)arg1 didFindAssetInfoForLocalIdentifier:(NSString *)arg2 orAssetFilePath:(NSString *)arg3;
@end

