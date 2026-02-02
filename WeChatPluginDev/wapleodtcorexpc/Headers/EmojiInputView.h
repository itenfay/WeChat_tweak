//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;

@interface EmojiInputView : UIView
{
    NSArray *_emojiList;
    CDUnknownBlockType _tapEmojiHandler;
    NSMutableArray *_buttonList;
}

+ (id)emojiListForScene:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *buttonList; // @synthesize buttonList=_buttonList;
@property(copy, nonatomic) CDUnknownBlockType tapEmojiHandler; // @synthesize tapEmojiHandler=_tapEmojiHandler;
@property(retain, nonatomic) NSArray *emojiList; // @synthesize emojiList=_emojiList;
- (void)onTapButton:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateLayout;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect)arg1;

@end

