//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GCLabelDynamicLayout;

@interface GCInteractCellModelLayout
{
    double _topMargin;
    double _headWidth;
    double _avatarToTitleLandSpace;
    GCLabelDynamicLayout *_titleLabelLayout;
    double _titleToActionDescSpace;
    GCLabelDynamicLayout *_actionDescLabelLayout;
    double _actionDescToActionTextSpace;
    GCLabelDynamicLayout *_actionTextLayout;
    double _actionTextToQuoteSpace;
    GCLabelDynamicLayout *_quoteLayout;
    GCLabelDynamicLayout *_actionBtnLayout;
    double _actionBtnUpSpace;
    double _rightImgWidth;
    GCLabelDynamicLayout *_rightFollowBtnLayout;
    GCLabelDynamicLayout *_wechatNickLabelLayout;
    GCLabelDynamicLayout *_markLabelLayout;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GCLabelDynamicLayout *markLabelLayout; // @synthesize markLabelLayout=_markLabelLayout;
@property(retain, nonatomic) GCLabelDynamicLayout *wechatNickLabelLayout; // @synthesize wechatNickLabelLayout=_wechatNickLabelLayout;
@property(retain, nonatomic) GCLabelDynamicLayout *rightFollowBtnLayout; // @synthesize rightFollowBtnLayout=_rightFollowBtnLayout;
@property(nonatomic) double rightImgWidth; // @synthesize rightImgWidth=_rightImgWidth;
@property(nonatomic) double actionBtnUpSpace; // @synthesize actionBtnUpSpace=_actionBtnUpSpace;
@property(retain, nonatomic) GCLabelDynamicLayout *actionBtnLayout; // @synthesize actionBtnLayout=_actionBtnLayout;
@property(retain, nonatomic) GCLabelDynamicLayout *quoteLayout; // @synthesize quoteLayout=_quoteLayout;
@property(nonatomic) double actionTextToQuoteSpace; // @synthesize actionTextToQuoteSpace=_actionTextToQuoteSpace;
@property(retain, nonatomic) GCLabelDynamicLayout *actionTextLayout; // @synthesize actionTextLayout=_actionTextLayout;
@property(nonatomic) double actionDescToActionTextSpace; // @synthesize actionDescToActionTextSpace=_actionDescToActionTextSpace;
@property(retain, nonatomic) GCLabelDynamicLayout *actionDescLabelLayout; // @synthesize actionDescLabelLayout=_actionDescLabelLayout;
@property(nonatomic) double titleToActionDescSpace; // @synthesize titleToActionDescSpace=_titleToActionDescSpace;
@property(retain, nonatomic) GCLabelDynamicLayout *titleLabelLayout; // @synthesize titleLabelLayout=_titleLabelLayout;
@property(nonatomic) double avatarToTitleLandSpace; // @synthesize avatarToTitleLandSpace=_avatarToTitleLandSpace;
@property(nonatomic) double headWidth; // @synthesize headWidth=_headWidth;
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
- (id)init;

@end

