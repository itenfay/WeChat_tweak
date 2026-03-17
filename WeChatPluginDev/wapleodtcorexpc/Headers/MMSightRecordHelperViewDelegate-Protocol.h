//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMSightRecordHelperView;

@protocol MMSightRecordHelperViewDelegate <NSObject>

@optional
- (void)onRecordHelperViewStartRecord:(MMSightRecordHelperView *)arg1;
- (void)onRecordHelperViewTouchMoved:(MMSightRecordHelperView *)arg1 point:(struct CGPoint)arg2;
- (void)onRecordHelperViewTouchEnded:(MMSightRecordHelperView *)arg1 shouldRecord:(_Bool)arg2;
- (void)onRecordHelperViewTouchBegan:(MMSightRecordHelperView *)arg1;
@end

