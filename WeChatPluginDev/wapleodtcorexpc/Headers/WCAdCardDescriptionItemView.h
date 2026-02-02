//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, WCAdSellingPointInfo, WCAdURLImageView;

@interface WCAdCardDescriptionItemView : UIView
{
    WCAdSellingPointInfo *_itemInfo;
    long long _buttonStyle;
    WCAdURLImageView *_iconView;
    MMUILabel *_titleView;
    MMUILabel *_descView;
}

+ (id)textColorForDescWithItemInfo:(id)arg1 buttonStyle:(long long)arg2;
+ (id)fontForDescWithItemInfo:(id)arg1 buttonStyle:(long long)arg2;
+ (id)fontForTitleWithItemInfo:(id)arg1 buttonStyle:(long long)arg2;
+ (double)wordingMaxWidthForWidth:(double)arg1 iconUrl:(id)arg2;
+ (double)heightForWording:(id)arg1 font:(id)arg2 maxWidth:(double)arg3 isSingleLine:(_Bool)arg4;
+ (double)heightWithItemInfo:(id)arg1 buttonStyle:(long long)arg2 maxWidth:(double)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *descView; // @synthesize descView=_descView;
@property(retain, nonatomic) MMUILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) WCAdURLImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) long long buttonStyle; // @synthesize buttonStyle=_buttonStyle;
@property(retain, nonatomic) WCAdSellingPointInfo *itemInfo; // @synthesize itemInfo=_itemInfo;
- (void)updateWidthForRichTextView:(id)arg1;
- (id)createTextViewWithContent:(id)arg1 textColor:(id)arg2 font:(id)arg3 maxWidth:(double)arg4 isSingleLine:(_Bool)arg5;
- (void)layoutSubviews;
- (void)generateViews;
- (id)initWithFrame:(struct CGRect)arg1 itemInfo:(id)arg2 buttonStyle:(long long)arg3;

@end

