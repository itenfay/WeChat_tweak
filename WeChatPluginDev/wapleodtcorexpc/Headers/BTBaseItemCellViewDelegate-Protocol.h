//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BTBaseItemCellView, CContact, CMessageWrap, MMUIViewController, MMWebViewController, NSString, ReaderWrap;

@protocol BTBaseItemCellViewDelegate <NSObject>

@optional
- (void)onLongPress:(CMessageWrap *)arg1 contact:(CContact *)arg2 fromView:(BTBaseItemCellView *)arg3;
- (void)onLongPress:(CMessageWrap *)arg1 fromView:(BTBaseItemCellView *)arg2;
- (void)onBrandItemAudioClick:(BTBaseItemCellView *)arg1;
- (void)onBrandItemLongPress:(BTBaseItemCellView *)arg1;
- (void)onReloadItemView:(BTBaseItemCellView *)arg1;
- (MMWebViewController *)getWebViewController:(ReaderWrap *)arg1 url:(NSString *)arg2 forPeek:(_Bool)arg3 fromMsgWrap:(CMessageWrap *)arg4;
- (MMUIViewController *)getViewController;
- (void)onClickLiveStatusBtn:(CContact *)arg1 fromView:(BTBaseItemCellView *)arg2;
- (void)onClickFeedbackBtn:(CContact *)arg1 fromView:(BTBaseItemCellView *)arg2;
- (void)onLongPressHeader:(CContact *)arg1 fromView:(BTBaseItemCellView *)arg2;
- (void)onSelectHeaderOpenContact:(CContact *)arg1 fromView:(BTBaseItemCellView *)arg2;
- (void)onClickHeaderMoreBtn:(CContact *)arg1 fromView:(BTBaseItemCellView *)arg2;
@end

