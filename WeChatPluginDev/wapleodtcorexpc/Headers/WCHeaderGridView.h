//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSDictionary, NSMutableArray, NSString, RichTextView, UIColor, UIImageView, UILabel;

@interface WCHeaderGridView : UIView
{
    NSMutableArray *m_arrContacts;
    double imageHeight;
    double rowSpace;
    double sectionSpace;
    unsigned int countPerLine;
    unsigned int likeCount;
    UIImageView *m_iconImageView;
    RichTextView *m_richText;
    NSMutableArray *m_arrHeaderViews;
    NSMutableArray *m_arrHeaderMatteViews;
    _Bool isHBComment;
    _Bool isRewardGrid;
    UILabel *_m_titleLabel;
    CDUnknownBlockType _onHedaImageClick;
    NSString *_customTextContent;
    NSDictionary *_customHeadImgUrlDic;
    UIColor *_customIconImageColor;
    NSString *_customIconSVGImageName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *customIconSVGImageName; // @synthesize customIconSVGImageName=_customIconSVGImageName;
@property(retain, nonatomic) UIColor *customIconImageColor; // @synthesize customIconImageColor=_customIconImageColor;
@property(retain, nonatomic) NSDictionary *customHeadImgUrlDic; // @synthesize customHeadImgUrlDic=_customHeadImgUrlDic;
@property(retain, nonatomic) NSString *customTextContent; // @synthesize customTextContent=_customTextContent;
@property(copy, nonatomic) CDUnknownBlockType onHedaImageClick; // @synthesize onHedaImageClick=_onHedaImageClick;
@property(readonly, nonatomic) UILabel *m_titleLabel; // @synthesize m_titleLabel=_m_titleLabel;
@property(readonly, nonatomic) UIImageView *m_iconImageView; // @synthesize m_iconImageView;
@property(nonatomic) unsigned int countPerLine; // @synthesize countPerLine;
@property(nonatomic) double sectionSpace; // @synthesize sectionSpace;
@property(nonatomic) double rowSpace; // @synthesize rowSpace;
@property(nonatomic) double imageHeight; // @synthesize imageHeight;
- (id)accessibilityLabelForHeadImageAtIndex:(long long)arg1;
- (void)setCustomHeadImageCornerForHeadView:(id)arg1 index:(int)arg2;
- (void)updateCustomHeadImageForHeadView:(id)arg1 index:(int)arg2;
- (id)displayNameForContactAtIndex:(long long)arg1;
- (id)fetchCustomHeadImgUrlForIndex:(int)arg1;
- (void)updateView;
- (void)initView;
- (id)getIconImageWithSize:(struct CGSize)arg1;
- (void)onClickHeadImageView:(id)arg1;
- (id)initWithRewardInfos:(id)arg1 likeCount:(unsigned int)arg2 isRewardGrid:(_Bool)arg3;
- (id)initWithUserInfos:(id)arg1 likeCount:(unsigned int)arg2 isHBComment:(_Bool)arg3 customTextContent:(id)arg4 customHeadImgUrlDic:(id)arg5 customIconImageColor:(id)arg6 customIconSVGImageName:(id)arg7;
- (id)initWithUserInfos:(id)arg1 likeCount:(unsigned int)arg2 isHBComment:(_Bool)arg3;
- (id)initWithUserInfos:(id)arg1 likeCount:(unsigned int)arg2;

@end

