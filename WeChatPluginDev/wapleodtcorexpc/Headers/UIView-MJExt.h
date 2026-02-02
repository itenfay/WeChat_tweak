//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface UIView (MJExt)
- (id)mj_takeSnapshot;
- (id)mj_createAndAddMask;
- (void)mj_dismissView:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)mj_dismissView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)mj_presentView:(id)arg1 withStyle:(unsigned long long)arg2 heightStart:(double)arg3 heightEnd:(double)arg4 animated:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)mj_presentView:(id)arg1 withStyle:(unsigned long long)arg2 height:(double)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)mj_presentView:(id)arg1 withStyle:(unsigned long long)arg2 height:(double)arg3 completion:(CDUnknownBlockType)arg4;
@end

