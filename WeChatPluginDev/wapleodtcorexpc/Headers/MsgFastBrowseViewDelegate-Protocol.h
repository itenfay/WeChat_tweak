//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MsgFastBrowseView, MsgImageSquareThumbView, NSArray, NSMutableSet, SimpleImgInfo;

@protocol MsgFastBrowseViewDelegate <NSObject>
- (double)getContentViewY;
- (double)getVisibleHeight;
- (NSArray *)messageWrapsForMsgFastBrowseView:(MsgFastBrowseView *)arg1;

@optional
- (void)onSquareImgUpdate:(MsgImageSquareThumbView *)arg1 withInfo:(SimpleImgInfo *)arg2;
- (void)onMsgFastBrowseViewWillBeginDragging:(MsgFastBrowseView *)arg1;
- (void)onMsgFastBrowseViewDidScroll:(MsgFastBrowseView *)arg1;
- (NSMutableSet *)expiredMsgForMsgFastBrowseView:(MsgFastBrowseView *)arg1;
- (void)onMsgFastBrowseViewGetMoreMsg:(MsgFastBrowseView *)arg1 Last:(_Bool)arg2 Next:(_Bool)arg3;
- (void)onLongPressSquareImg:(MsgImageSquareThumbView *)arg1 withInfo:(SimpleImgInfo *)arg2;
- (void)onSquareImgClicked:(MsgImageSquareThumbView *)arg1 withInfo:(SimpleImgInfo *)arg2 withOffset:(unsigned int)arg3;
- (void)onSquareImgCreated:(MsgImageSquareThumbView *)arg1 withInfo:(SimpleImgInfo *)arg2;
- (void)msgFastBrowseView:(MsgFastBrowseView *)arg1 didChangeCheckMarkTo:(_Bool)arg2 atSection:(unsigned long long)arg3;
- (_Bool)msgFastBrowseView:(MsgFastBrowseView *)arg1 willChangeCheckMarkTo:(_Bool)arg2 atSection:(unsigned long long)arg3;
- (void)msgFastBrowseView:(MsgFastBrowseView *)arg1 didChangeCheckMarkTo:(_Bool)arg2 withMsgInfo:(SimpleImgInfo *)arg3;
- (_Bool)msgFastBrowseView:(MsgFastBrowseView *)arg1 willChangeCheckMarkTo:(_Bool)arg2 withMsgInfo:(SimpleImgInfo *)arg3;
@end

