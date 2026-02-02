//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact;

@protocol FlutterCommentMentionDelegate <NSObject>

@optional
- (void)onMentionContactSelect:(CContact *)arg1;
- (void)onMentionPanelShow;
- (void)onMentionBtnClick;
- (void)onMentionBtnExpose;
@end

