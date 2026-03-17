//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol EditVideoCropViewDelegate <NSObject>
- (void)onCropTimeChange:(CDStruct_e83c9415)arg1;
- (void)seekToTime:(double)arg1;
- (void)onEditSuccess:(_Bool)arg1 withTimeRange:(CDStruct_e83c9415)arg2;
@end

