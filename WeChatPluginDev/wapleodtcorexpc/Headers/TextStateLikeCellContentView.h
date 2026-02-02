//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CContact, TextStateItemView, UIImageView, UILabel, WCFinderFeedContentTextView;
@protocol TextStateBaseNotifyInfo, TextStateLikeCellContentViewDelegate;

@interface TextStateLikeCellContentView : UIView
{
    _Bool _shouldShowPreview;
    id <TextStateLikeCellContentViewDelegate> _delegate;
    id <TextStateBaseNotifyInfo> _info;
    UILabel *_timelabel;
    UIView *_picImageView;
    UILabel *_usernameLabel;
    UILabel *_referenceLabel;
    UIImageView *_emojiImageView;
    UIView *_headImageView;
    TextStateItemView *_iconView;
    CContact *_contact;
    WCFinderFeedContentTextView *_textView;
}

+ (double)getCellHight;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedContentTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) TextStateItemView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIImageView *emojiImageView; // @synthesize emojiImageView=_emojiImageView;
@property(retain, nonatomic) UILabel *referenceLabel; // @synthesize referenceLabel=_referenceLabel;
@property(retain, nonatomic) UILabel *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
@property(retain, nonatomic) UIView *picImageView; // @synthesize picImageView=_picImageView;
@property(retain, nonatomic) UILabel *timelabel; // @synthesize timelabel=_timelabel;
@property(retain, nonatomic) id <TextStateBaseNotifyInfo> info; // @synthesize info=_info;
@property(nonatomic) _Bool shouldShowPreview; // @synthesize shouldShowPreview=_shouldShowPreview;
@property(nonatomic) __weak id <TextStateLikeCellContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)genTextStateByCommentThumbMessage:(id)arg1;
- (id)generatePicImageViewInner:(id)arg1 mediaItem:(id)arg2 iconDescription:(id)arg3;
- (id)generatePicImageView;
- (void)onClickHeadImage;
- (id)createHeadImageViewWithUserName:(id)arg1;
- (id)createWebImageViewWithUrl:(id)arg1;
- (id)createItemView;
- (void)configInfo:(id)arg1;

@end

