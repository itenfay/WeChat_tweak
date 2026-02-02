//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderRelatedRecommendTips, NSMutableArray, UIImageView, WCFinderCustomImageRichTextView;

@interface WCFinderMoreRelatedContentView : UIView
{
    CDUnknownBlockType _recoverBlock;
    NSMutableArray *_avatarArray;
    WCFinderCustomImageRichTextView *_richTextView;
    FinderRelatedRecommendTips *_recommendTips;
    UIImageView *_topArrowImageView;
    double _layoutWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double layoutWidth; // @synthesize layoutWidth=_layoutWidth;
@property(retain, nonatomic) UIImageView *topArrowImageView; // @synthesize topArrowImageView=_topArrowImageView;
@property(retain, nonatomic) FinderRelatedRecommendTips *recommendTips; // @synthesize recommendTips=_recommendTips;
@property(retain, nonatomic) WCFinderCustomImageRichTextView *richTextView; // @synthesize richTextView=_richTextView;
@property(retain, nonatomic) NSMutableArray *avatarArray; // @synthesize avatarArray=_avatarArray;
@property(copy, nonatomic) CDUnknownBlockType recoverBlock; // @synthesize recoverBlock=_recoverBlock;
- (double)tipsMargin;
- (double)showDurationTime;
- (void)layoutRecommentTips;
- (void)updateContentByRecommendTips:(id)arg1;
- (void)clearAvatarArray;
- (void)updateContentTitle:(id)arg1 showArrow:(_Bool)arg2;
- (id)downArrowXmlStr;
- (void)layoutSubviews;
- (id)showTitle;
- (id)initWithFrame:(struct CGRect)arg1;

@end

