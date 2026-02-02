//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMGrowTextView, NSString, UILabel, UIView;

@interface MMFinderLiveLotteryMsgEditPanel
{
    NSString *_msgTitleText;
    NSString *_msgPlaceholderText;
    CDUnknownBlockType _completion;
    double _keyboardHeight;
    MMGrowTextView *_growTextView;
    UIView *_inputContentBackView;
    UILabel *_wordCountTips;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *wordCountTips; // @synthesize wordCountTips=_wordCountTips;
@property(retain, nonatomic) UIView *inputContentBackView; // @synthesize inputContentBackView=_inputContentBackView;
@property(retain, nonatomic) MMGrowTextView *growTextView; // @synthesize growTextView=_growTextView;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSString *msgPlaceholderText; // @synthesize msgPlaceholderText=_msgPlaceholderText;
@property(retain, nonatomic) NSString *msgTitleText; // @synthesize msgTitleText=_msgTitleText;
- (void)onRightButtonAction;
- (void)onLeftButtonAction;
- (id)getCurrentLeftButton;
- (double)contentHeight;
- (id)stringByRemovingLastEmptyLineInString:(id)arg1;
- (void)layoutWordCountTips;
- (void)fixTopicText:(_Bool)arg1;
- (void)TextDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)updateConfig;
- (id)validUriPrefixes;
- (id)placeholderText;
- (id)titleText;
- (void)layoutOtherUI;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

