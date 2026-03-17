//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderEditVideoCropView;

@protocol WCFinderEditVideoCropViewDelegate <NSObject>

@optional
- (void)finderEditCropView:(WCFinderEditVideoCropView *)arg1 valueDidChange:(double)arg2 currentEditIndex:(long long)arg3;
- (void)finderEditCropViewDidChangeCropTimeRangeWithStartTime:(double)arg1 endTime:(double)arg2 editAssetIndex:(long long)arg3;
- (void)finderEditCropView:(WCFinderEditVideoCropView *)arg1 didClickDoneBtnWithEditIndex:(long long)arg2;
- (void)finderEditCropView:(WCFinderEditVideoCropView *)arg1 didClickCloseBtnWithEditIndex:(long long)arg2 withOriginStartTime:(double)arg3 originEndTime:(double)arg4;
@end

