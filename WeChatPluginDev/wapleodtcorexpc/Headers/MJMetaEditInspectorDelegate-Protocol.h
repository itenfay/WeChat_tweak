//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJMetaBackupInfo, MJMetaEditInspector, MJSegmentViewModel, MJStickerPickerItem, NSDate, OMCGeographicInfo;

@protocol MJMetaEditInspectorDelegate <NSObject>

@optional
- (void)metaEditInspector:(MJMetaEditInspector *)arg1 segmentVM:(MJSegmentViewModel *)arg2 didCancelEditWithBackupItem:(MJMetaBackupInfo *)arg3;
- (void)didEndEditWithMetaEditInspector:(MJMetaEditInspector *)arg1;
- (void)metaEditInspector:(MJMetaEditInspector *)arg1 segmentVM:(MJSegmentViewModel *)arg2 updateDate:(NSDate *)arg3;
- (void)metaEditInspector:(MJMetaEditInspector *)arg1 segmentVM:(MJSegmentViewModel *)arg2 updateGeographic:(OMCGeographicInfo *)arg3;
- (void)metaEditInspector:(MJMetaEditInspector *)arg1 segmentVM:(MJSegmentViewModel *)arg2 replaceItem:(MJStickerPickerItem *)arg3;
@end

