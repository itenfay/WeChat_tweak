//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap, ImageScrollView, MsgImgFullScreenViewController, MsgImgPreviewData, NSDictionary, NSString;

@protocol MsgImgFullScreenViewControllerDelegate <NSObject>

@optional
- (_Bool)isMsgImgSelectedInEditMode:(CMessageWrap *)arg1;
- (_Bool)shouldHideForwardToFinderBtn:(MsgImgFullScreenViewController *)arg1;
- (_Bool)shouldNeedShowImgFastBrowseBtn:(MsgImgFullScreenViewController *)arg1;
- (void)onMsgImgFullScreenViewWillDisappear:(MsgImgFullScreenViewController *)arg1;
- (void)onShowImgMsgLocate:(CMessageWrap *)arg1 imageScrollView:(ImageScrollView *)arg2 vc:(MsgImgFullScreenViewController *)arg3;
- (void)onMsgImgPreviewDataRequired:(MsgImgPreviewData *)arg1;
- (_Bool)onCurrentPageMsgImgDataMatch:(CMessageWrap *)arg1;
- (void)onCurrentPageMsgReMoved:(CMessageWrap *)arg1;
- (void)onMsgImgClickTriggerInEditMode:(CMessageWrap *)arg1;
- (void)onMsgImgWindowWillHideToMsg:(CMessageWrap *)arg1 extraInfo:(NSDictionary *)arg2;
- (void)onSightViewDetail:(NSString *)arg1 vc:(MsgImgFullScreenViewController *)arg2;
- (void)onImgMsgLocate:(CMessageWrap *)arg1 vc:(MsgImgFullScreenViewController *)arg2;
- (void)onPlayAttachVideo:(CMessageWrap *)arg1 vc:(MsgImgFullScreenViewController *)arg2;
@end

