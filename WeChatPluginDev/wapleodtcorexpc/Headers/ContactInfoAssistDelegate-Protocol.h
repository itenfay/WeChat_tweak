//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, CContactVerifyLogic, ClickCommandRequestInfo, MMPageSheetAdapter, MMUIViewController, NSString, UIScrollView;

@protocol ContactInfoAssistDelegate <NSObject>
- (CContactVerifyLogic *)getContactVerifyLogic;
- (void)onSendVerifyMsg;
- (id)getUserData;
- (void)delAllMsg;
- (MMUIViewController *)getViewController;
- (void)stopLoadingWithFailText:(NSString *)arg1;
- (void)stopLoadingWithOKText:(NSString *)arg1;
- (void)startLoadingWithText:(NSString *)arg1;
- (void)onRemoveContact;
- (void)onExpose;
- (void)onPopViewController:(_Bool)arg1;
- (void)onSayHello;
- (void)onShareMyFriend;
- (void)onFriendRequestSend;
- (void)contactVerifyOk:(CContact *)arg1;
- (void)onNewMessage:(CContact *)arg1 requestInfo:(ClickCommandRequestInfo *)arg2;
- (void)onNewMessageWithPushOnTop:(CContact *)arg1;
- (void)onNewMessage:(CContact *)arg1;
- (void)onTalk:(CContact *)arg1;
- (void)onTableViewReload;

@optional
@property(nonatomic) Class m_popToViewControllerClassWhenDelete;
// Preceding property had unknown attributes: ?
// Original attribute string: T#,?,N

- (unsigned long long)getContactAddFriendStatScene;
- (MMPageSheetAdapter *)getPageSheetAdapter;
- (NSString *)getSearchClickId;
- (NSString *)getSearchId;
- (void)onVerifyOK;
- (void)onAddToContact;
- (unsigned int)GetFromScene;
- (void)scrollViewDidScroll:(UIScrollView *)arg1;
@end

