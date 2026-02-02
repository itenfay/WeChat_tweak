//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class RichTextView;

@interface WCFinderPostTopicBubbleCollectionViewCell : UICollectionViewCell
{
    RichTextView *_contentTextView;
}

+ (double)getTextViewWidthWithText:(id)arg1;
+ (double)getBubbleWidthWithText:(id)arg1;
+ (id)getStandardRichTextView;
- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *contentTextView; // @synthesize contentTextView=_contentTextView;
- (void)updateBubbleWithTopicInfo:(id)arg1;
- (void)updateBubbleTips:(id)arg1;

@end

