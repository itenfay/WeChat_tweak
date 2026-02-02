//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface GCTipLabel : UIView
{
    UILabel *_unReadCountLabel;
    UIImageView *_unReadIconView;
    unsigned long long _tipType;
}

+ (id)createTipLabel:(unsigned long long)arg1;
+ (id)createTipLabel;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long tipType; // @synthesize tipType=_tipType;
@property(retain, nonatomic) UIImageView *unReadIconView; // @synthesize unReadIconView=_unReadIconView;
@property(retain, nonatomic) UILabel *unReadCountLabel; // @synthesize unReadCountLabel=_unReadCountLabel;
- (void)setUnreadIconImage:(id)arg1;
- (void)updateWidth;
- (void)setText:(id)arg1;
- (void)layoutSubviews;
- (void)updateLayerCornerRadius;
- (id)initWithLabel:(id)arg1 tipType:(unsigned long long)arg2;

@end

