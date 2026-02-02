//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderWindowProductInfo, MMFinderLiveFloatMsg, MMLiveCommentDataItem, MMLiveInputToolView, NSString;

@protocol MMLiveInputToolViewDelegate <NSObject>
- (_Bool)didSendLocation:(NSString *)arg1;
- (void)onInputViewShowChange:(_Bool)arg1;
- (double)getVisibleHeight;
- (_Bool)didCommitText:(NSString *)arg1;

@optional
- (void)onSwitchAccountTipsViewClick;
- (void)onSwitchAccountTipsViewExposed;
- (void)onCurrentUserIdentityHeadImageClick;
- (void)onQuestionProductDescClick:(FinderWindowProductInfo *)arg1;
- (void)inputViewProductQuestionInputModeDidChange:(_Bool)arg1;
- (void)onHasSendMsgTagChange:(_Bool)arg1;
- (_Bool)customHandleInputViewSwitchToBarrageInputMode;
- (MMLiveCommentDataItem *)inputViewGetSelfCommentDataItemWithText:(NSString *)arg1;
- (_Bool)inputViewCanCommitFloatMsg:(MMFinderLiveFloatMsg *)arg1;
- (void)inputViewBarrageInputModeDidChange:(_Bool)arg1;
- (_Bool)inputViewShouldDismisAfterCommit:(MMLiveInputToolView *)arg1;
@end

