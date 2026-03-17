//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface UIView (Swizzle)
+ (long long)mmOrientationFlag;
+ (void)mmSetOrientationFlag:(long long)arg1;
+ (void)mmSetAnimationsEnabled:(_Bool)arg1;
+ (void)load;
- (void)checkAndReportAfterScreenUpdate;
- (_Bool)mm_drawViewHierarchyInRect:(struct CGRect)arg1 afterScreenUpdates:(_Bool)arg2;
- (id)mm_snapshotViewAfterScreenUpdates:(_Bool)arg1;
- (_Bool)mm_enableSnapshotForSelf;
@end

