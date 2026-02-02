//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;
@protocol EmotionStoreDesignerEmojiGridViewDelegate;

@interface EmotionStoreDesignerEmojiGridView
{
    NSArray *m_designerEmojiCells;
    long long m_numOfItemInOneLine;
    id <EmotionStoreDesignerEmojiGridViewDelegate> _delegate;
    NSArray *_emojiInfos;
    long long _maxLineNum;
    long long _maxNumOfEmojiToShow;
}

+ (void)calNumOfItemInOneLine:(long long *)arg1 ItemSideLen:(double *)arg2 ForTotalWidth:(double)arg3;
+ (id)configEmojiCell:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long maxNumOfEmojiToShow; // @synthesize maxNumOfEmojiToShow=_maxNumOfEmojiToShow;
@property(nonatomic) long long maxLineNum; // @synthesize maxLineNum=_maxLineNum;
@property(retain, nonatomic) NSArray *emojiInfos; // @synthesize emojiInfos=_emojiInfos;
@property(nonatomic) __weak id <EmotionStoreDesignerEmojiGridViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onEmojiCellClicked:(id)arg1;
- (void)adjustSubviewsForTotalWidth:(double)arg1;
- (void)configDesignerEmojiCellsForEmojis:(id)arg1;
- (void)useDefaultSettingForDesignerProfile;
- (void)adjustForWidth:(double)arg1;

@end

