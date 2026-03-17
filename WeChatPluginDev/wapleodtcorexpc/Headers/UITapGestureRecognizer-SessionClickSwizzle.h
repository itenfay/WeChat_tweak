//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITapGestureRecognizer.h>

@interface UITapGestureRecognizer (SessionClickSwizzle)
+ (_Bool)hookRemoveTargetAction;
+ (_Bool)hookAddTargetAction;
+ (_Bool)hookInitWithTargetAction;
+ (void)hookUIGestureRecognizer;
+ (void)load;
- (void)sf_removeTarget:(id)arg1 action:(SEL)arg2;
- (void)sf_addTarget:(id)arg1 action:(SEL)arg2;
- (id)sf_initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)trackTapGestureAction:(id)arg1;
- (void)hookUITapGestureRecognizer:(id)arg1 action:(SEL)arg2;
- (void)setScTargetActionDic:(id)arg1;
- (id)scTargetActionDic;
@end

