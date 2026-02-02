//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMUIViewControllerDelegate-Protocol.h"

@class CContact, MMUIViewController, NSArray, NSDictionary, NSString, SessionSelectView;

@protocol SessionSelectViewDelegate <MMUIViewControllerDelegate>
- (MMUIViewController *)getViewController;
- (void)OnSelectSession:(CContact *)arg1 SelectView:(SessionSelectView *)arg2;

@optional
- (NSString *)sectionTitleForCurrentSessionView;
- (void)contactInBizChatSessionViewDidSelect:(CContact *)arg1;
- (CContact *)contactInBizChatSessionViewAtRow:(unsigned long long)arg1;
- (long long)numberOfRowInBizChatSessionView;
- (NSString *)sectionTitleForBizChatSessionView;
- (_Bool)onShouldFilterContact:(CContact *)arg1;
- (void)onSelectChatroomMembers:(CContact *)arg1;
- (void)onSelectAtWWKFSession;
- (void)onSelectAtChatBoxSession;
- (_Bool)showChatRoomOnly;
- (void)onSelectChatRoomWithArrKeywords:(NSArray *)arg1;
- (void)selectViewWillBeginDragging:(SessionSelectView *)arg1;
- (void)onSessionSelectSearchSessions:(NSArray *)arg1 sectionTitles:(NSDictionary *)arg2 sectionResults:(NSDictionary *)arg3;
- (void)OnSelectForwardToEnterpriseChat:(SessionSelectView *)arg1 appType:(long long)arg2;
- (void)OnSelectFromContactSelectView:(SessionSelectView *)arg1;
- (void)OnSelectEnterpriseChat:(CContact *)arg1 SelectView:(SessionSelectView *)arg2;
- (void)OnSelectCreateRoomSelectView:(SessionSelectView *)arg1;
- (NSString *)onSessionSelectGetSearchString;
- (void)onSessionSelectSearch:(NSArray *)arg1;
- (_Bool)isCurrentSession:(CContact *)arg1;
- (_Bool)shouldShowTextState;
- (_Bool)selectView:(SessionSelectView *)arg1 shouldSelectContact:(CContact *)arg2;
- (double)recentForwardMarginForSelectView:(SessionSelectView *)arg1 defaultMargin:(double)arg2;
@end

