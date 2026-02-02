//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMUIHalfScreenViewControllerDelegate-Protocol.h"

@class CEmoticonWrap, NSArray, UITableView;

@protocol EmoticonSearchHalfScreenViewControllerDelegate <MMUIHalfScreenViewControllerDelegate>

@optional
- (_Bool)isMsgTableViewScrollToBottom;
- (UITableView *)getMsgTableView;
- (void)onEmoticonRecommendHalfScreenViewControllerUpdateHeight;
- (void)onSearchEmoticonViewControllerSendEmoticon:(CEmoticonWrap *)arg1;
- (NSArray *)getRecommendMessageContexts;
@end

