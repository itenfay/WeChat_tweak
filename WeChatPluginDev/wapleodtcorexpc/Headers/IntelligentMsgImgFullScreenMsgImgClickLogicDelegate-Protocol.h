//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMUIViewControllerDelegate-Protocol.h"

@class CMessageWrap, ImageScrollView, MsgImgFullScreenViewController, UIView;

@protocol IntelligentMsgImgFullScreenMsgImgClickLogicDelegate <MMUIViewControllerDelegate>
- (void)onIntelligentClickShowImgMsgLocate:(CMessageWrap *)arg1 imageScrollView:(ImageScrollView *)arg2 vc:(MsgImgFullScreenViewController *)arg3;
- (UIView *)getMsgImgFullScreenMsgInView;
- (UIView *)getMediaViewWithMsgWrap:(CMessageWrap *)arg1;
- (struct CGRect)getMediaFrameWithMsgWrap:(CMessageWrap *)arg1;
@end

