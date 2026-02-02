//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class GetProfileInfoResponse_ProfilePageInfo, MMUIButton, MMUILabel, MMWebImageView, UIImageView, UIView;
@protocol IWARichTextViewHelper;

@interface WAMenuAboveHeaderView : UIButton
{
    UIView *_headerView;
    MMWebImageView *_headerIconView;
    id <IWARichTextViewHelper> _headerRichTextHelper;
    MMUIButton *_headerRightButton;
    MMWebImageView *_coverImageView;
    UIImageView *_playIconView;
    MMUILabel *_contentLabel;
    GetProfileInfoResponse_ProfilePageInfo *_pageInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GetProfileInfoResponse_ProfilePageInfo *pageInfo; // @synthesize pageInfo=_pageInfo;
@property(retain, nonatomic) MMUILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIImageView *playIconView; // @synthesize playIconView=_playIconView;
@property(retain, nonatomic) MMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) MMUIButton *headerRightButton; // @synthesize headerRightButton=_headerRightButton;
@property(retain, nonatomic) id <IWARichTextViewHelper> headerRichTextHelper; // @synthesize headerRichTextHelper=_headerRichTextHelper;
@property(retain, nonatomic) MMWebImageView *headerIconView; // @synthesize headerIconView=_headerIconView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (void)updateLayout;
- (void)config:(id)arg1;

@end

