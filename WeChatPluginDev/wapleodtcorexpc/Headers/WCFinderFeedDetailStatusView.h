//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImageView, UILabel;
@protocol WCFinderFeedDetailStatusViewDelegate;

@interface WCFinderFeedDetailStatusView : UIView
{
    _Bool _disableLayout;
    _Bool _layoutForState;
    unsigned long long _type;
    unsigned long long _uiStyle;
    id <WCFinderFeedDetailStatusViewDelegate> _delegate;
    NSString *_showText;
    UIImageView *_imageView;
    UILabel *_label;
    UIButton *_closeBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool layoutForState; // @synthesize layoutForState=_layoutForState;
@property(nonatomic) _Bool disableLayout; // @synthesize disableLayout=_disableLayout;
@property(copy, nonatomic) NSString *showText; // @synthesize showText=_showText;
@property(nonatomic) __weak id <WCFinderFeedDetailStatusViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long uiStyle; // @synthesize uiStyle=_uiStyle;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)goBack;
- (id)labelColorForUIStyle:(unsigned long long)arg1;
- (id)backgroundColorForUIStyle:(unsigned long long)arg1;
- (void)layoutSubviews;

@end

