//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BaseChatCellView, CMessageWrap, MMMsgMenuReporter, MMTableView, MMUIViewController, NSString, UIView;

@protocol ChatViewModelDelegate <NSObject>
- (_Bool)isNeedInsertTimeNodeWhenAddSystemPatMsg;
- (_Bool)canShowOperationMenu;
- (CMessageWrap *)firstMsgAfterEnterSession;
- (_Bool)isLastTranslateAvailableMsg:(CMessageWrap *)arg1 includeSelf:(_Bool)arg2;
- (MMMsgMenuReporter *)getMenuReporter;
- (UIView *)getInputToolView;
- (MMUIViewController *)getViewController;
- (MMTableView *)getTableView;
- (void)updateTableContentOffsetAnimated:(_Bool)arg1 OffsetDelta:(double)arg2;
- (struct CGRect)getNodeRectInScreen:(unsigned int)arg1;
- (void)reloadVisibleNodeWithCellView:(BaseChatCellView *)arg1;
- (void)reloadNodeWithMessageWrap:(CMessageWrap *)arg1;

@optional
- (void)shakeHeadForOtherPatSelfWithMessageWrap:(CMessageWrap *)arg1;
- (void)onStartRevokePatFromChat:(NSString *)arg1;
- (_Bool)isNeedScrollViewAddPatMsg;
- (void)onHidePatToast;
- (void)onShowPatToast;
- (_Bool)isViewModelMessageAutoTranslating:(CMessageWrap *)arg1;
- (_Bool)isChatroomInDarkBkg;
- (_Bool)isUseDefaultChatBkgImage;
- (struct CGRect)getInputToolViewFrame;
- (void)reloadNodeWithMessageWrap:(CMessageWrap *)arg1 WithTryScroll:(_Bool)arg2 ReloadAll:(_Bool)arg3;
@end

