//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMWebImageView, RichTextView;

@interface GameCenterMsgListInteractMsgCell
{
    RichTextView *_commentView;
    MMUILabel *_descLabel;
    MMWebImageView *_descImageView;
    MMUILabel *_countLabel;
}

+ (id)convertRichText:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) MMWebImageView *descImageView; // @synthesize descImageView=_descImageView;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) RichTextView *commentView; // @synthesize commentView=_commentView;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (void)updateWithCellData:(id)arg1;
- (void)setupGameCenterMsgListInteractMsgCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

