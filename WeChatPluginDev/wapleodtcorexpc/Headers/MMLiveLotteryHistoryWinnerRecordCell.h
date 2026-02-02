//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton;

@interface MMLiveLotteryHistoryWinnerRecordCell
{
    _Bool _enableToChat;
    CDUnknownBlockType _chatButtonClickBlock;
    UIButton *_finderChatButton;
}

+ (double)seperateLineLeftMargin;
- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *finderChatButton; // @synthesize finderChatButton=_finderChatButton;
@property(copy, nonatomic) CDUnknownBlockType chatButtonClickBlock; // @synthesize chatButtonClickBlock=_chatButtonClickBlock;
@property(nonatomic) _Bool enableToChat; // @synthesize enableToChat=_enableToChat;
- (void)onLotteryFinderChatButtonClicked:(id)arg1;
- (void)layoutFinderChatButton;
- (void)initNameLabel;
- (void)initHeaderImageView;
- (void)layoutUI;
- (double)lotteryWinnerRecordHeadImageViewRightMargin;
- (double)lotteryWinnerRecordCellInnerPadding;

@end

