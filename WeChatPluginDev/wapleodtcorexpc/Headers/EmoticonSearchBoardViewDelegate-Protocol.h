//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CEmoticonWrap, NSDictionary, NSString;

@protocol EmoticonSearchBoardViewDelegate <NSObject>
- (void)onExposure:(NSDictionary *)arg1 bottomIndex:(unsigned long long)arg2;
- (void)onClickEmotionStore;
- (void)onClickWSSButtton:(NSString *)arg1;
- (void)onClickPurchaseTipButton:(long long)arg1 chooseEmoticonWrap:(CEmoticonWrap *)arg2;
- (void)onSearchEmoticonLongPressToPreview:(CEmoticonWrap *)arg1 description:(NSString *)arg2 frame:(struct CGRect)arg3 index:(unsigned long long)arg4;
- (void)onSearchBarCancelButtonClicked;
- (void)onSearchBarSearchEmoticonWithText:(NSString *)arg1;
- (void)onSendEmoticonWithEmoticonWrap:(CEmoticonWrap *)arg1;
@end

