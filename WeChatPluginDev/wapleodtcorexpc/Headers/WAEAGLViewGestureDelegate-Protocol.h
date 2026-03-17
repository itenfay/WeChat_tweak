//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WAEAGLView;

@protocol WAEAGLViewGestureDelegate <NSObject>

@optional
- (void)onTouchesCancel:(WAEAGLView *)arg1;
- (void)onTouchesEnd:(WAEAGLView *)arg1;
- (void)onTouchesBegin:(WAEAGLView *)arg1;
@end

