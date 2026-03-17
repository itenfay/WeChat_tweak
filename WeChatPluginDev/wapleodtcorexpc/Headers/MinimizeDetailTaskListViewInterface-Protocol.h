//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MinimizeTaskData, NSString;

@protocol MinimizeDetailTaskListViewInterface <NSObject>
@property(retain, nonatomic) MinimizeTaskData *taskData;
- (void)showSubviewsWhenMaximizeEnd;
- (void)hideSubviewsWhenMaximizeBegin;
- (_Bool)isEqualToTaskKey:(NSString *)arg1;
- (void)longPressed;
- (void)setHighlightForLongPress:(_Bool)arg1 scale:(double)arg2;
- (_Bool)shouldHighlightForLongPressWithPoint:(struct CGPoint)arg1;
- (_Bool)isSupportLongPress;
- (void)setCloseBtnVisible:(_Bool)arg1;
- (void)updatePositionType:(unsigned long long)arg1;
@end

