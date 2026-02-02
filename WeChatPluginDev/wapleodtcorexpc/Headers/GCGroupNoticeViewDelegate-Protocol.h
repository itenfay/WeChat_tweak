//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ContentBlock, GCGroupNoticeView;

@protocol GCGroupNoticeViewDelegate <NSObject>
- (void)onNoticeLinkClick:(GCGroupNoticeView *)arg1 contentBlock:(ContentBlock *)arg2;
- (void)onNoticeCloseBtnClick:(GCGroupNoticeView *)arg1;
@end

