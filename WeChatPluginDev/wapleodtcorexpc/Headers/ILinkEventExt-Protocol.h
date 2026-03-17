//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CTRichTextView, LinkWeAppJumpWrap, MMCPLabel, NSDictionary, NSString, RichTextView;

@protocol ILinkEventExt <NSObject>

@optional
- (void)onLinkClicked:(NSString *)arg1 backupUrl:(NSString *)arg2 withRect:(struct CGRect)arg3 extraInfo:(NSDictionary *)arg4;
- (void)onFavAdd:(id)arg1;
- (void)onAddressLongPressed:(NSString *)arg1 withRect:(struct CGRect)arg2 withView:(MMCPLabel *)arg3;
- (void)onRichTextViewTouchesEndWithPoint:(struct CGPoint)arg1;
- (void)onRichTextViewTouchesMovedWithPoint:(struct CGPoint)arg1;
- (void)onRichTextViewTouchesBeganWithPoint:(struct CGPoint)arg1;
- (void)onTextLongPressed:(NSString *)arg1 withRect:(struct CGRect)arg2 withCTRichTextView:(CTRichTextView *)arg3;
- (void)onTextClicked:(NSString *)arg1 withRect:(struct CGRect)arg2 withCTRichTextView:(CTRichTextView *)arg3;
- (void)onPhoneLongPressed:(NSString *)arg1 withRect:(struct CGRect)arg2 withCTRichTextView:(CTRichTextView *)arg3;
- (void)onSearchTopicLongPressed:(NSString *)arg1 withRect:(struct CGRect)arg2 withCTRichTextView:(CTRichTextView *)arg3;
- (void)onLinkLongPressed:(NSString *)arg1 withRect:(struct CGRect)arg2 withCTRichTextView:(CTRichTextView *)arg3;
- (void)onTextLongPressed:(NSString *)arg1 withRect:(struct CGRect)arg2 withView:(RichTextView *)arg3;
- (void)onTextClicked:(NSString *)arg1 withRect:(struct CGRect)arg2 withView:(RichTextView *)arg3;
- (void)onPhoneLongPressed:(NSString *)arg1 withRect:(struct CGRect)arg2 withView:(RichTextView *)arg3;
- (void)onWeAppLinkLongPressed:(LinkWeAppJumpWrap *)arg1 withRect:(struct CGRect)arg2 withView:(RichTextView *)arg3;
- (void)onSearchTopicLongPressed:(NSString *)arg1 withRect:(struct CGRect)arg2 withView:(RichTextView *)arg3;
- (void)onLinkLongPressed:(NSString *)arg1 withRect:(struct CGRect)arg2 withView:(RichTextView *)arg3;
- (void)onWeAppMPShortLinkLongPressed:(NSString *)arg1 withRect:(struct CGRect)arg2 withView:(RichTextView *)arg3;
- (void)onWeAppMPShortLinkClicked:(NSString *)arg1 withRect:(struct CGRect)arg2;
- (void)onSearchTopicClicked:(NSString *)arg1 withRect:(struct CGRect)arg2;
- (void)onBankCardNumberLongPressed:(NSString *)arg1 withRect:(struct CGRect)arg2;
- (void)onBankCardNumberClicked:(NSString *)arg1 withRect:(struct CGRect)arg2;
- (void)onSearchWeAppBoxClicked:(NSString *)arg1 withRect:(struct CGRect)arg2;
- (void)onAddressClicked:(NSString *)arg1 withRect:(struct CGRect)arg2;
- (void)onTextLongPressed:(NSString *)arg1 withRect:(struct CGRect)arg2;
- (void)onTextClicked:(NSString *)arg1 withRect:(struct CGRect)arg2;
- (void)onPhoneLongPressed:(NSString *)arg1 withRect:(struct CGRect)arg2;
- (void)onPhoneClicked:(NSString *)arg1 withRect:(struct CGRect)arg2;
- (void)onWeAppLinkLongPressed:(LinkWeAppJumpWrap *)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkLongPressed:(NSString *)arg1 withRect:(struct CGRect)arg2;
- (void)onWeAppLinkClicked:(LinkWeAppJumpWrap *)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkClicked:(NSString *)arg1 backupUrl:(NSString *)arg2 withRect:(struct CGRect)arg3;
- (void)onLinkClicked:(NSString *)arg1 withRect:(struct CGRect)arg2 withView:(RichTextView *)arg3;
- (void)onLinkClicked:(NSString *)arg1 withRect:(struct CGRect)arg2;
- (void)onWeappLinkHighlighted:(_Bool)arg1 weappJumpWrap:(LinkWeAppJumpWrap *)arg2;
- (void)onLinkHighlighted:(_Bool)arg1 url:(NSString *)arg2 frame:(struct CGRect)arg3;
@end

