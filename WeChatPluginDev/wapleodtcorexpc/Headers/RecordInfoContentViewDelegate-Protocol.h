//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIView;

@protocol RecordInfoContentViewDelegate <NSObject>

@optional
- (double)getVoiceViewBottomPadding;
- (double)getContentYOffset;
- (double)getVisibleHeight;
- (void)onTransFail;
- (void)onTransSuccess;
- (void)onReTrans;
- (void)onCommitText;
- (void)onInputViewChangedWithInputBar:(UIView *)arg1;
- (void)onEndEditing;
- (void)onBeginEditWithInputBar:(UIView *)arg1;
@end

