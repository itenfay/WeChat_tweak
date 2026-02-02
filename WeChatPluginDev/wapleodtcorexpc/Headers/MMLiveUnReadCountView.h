//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface MMLiveUnReadCountView : UIView
{
    UILabel *_unReadCountLabel;
    long long _contentType;
    unsigned long long _unReadCount;
    CDUnknownBlockType _transferHitTestBlock;
    UIImageView *_unReadIconView;
}

+ (id)createUnReadCountStr:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *unReadIconView; // @synthesize unReadIconView=_unReadIconView;
@property(copy, nonatomic) CDUnknownBlockType transferHitTestBlock; // @synthesize transferHitTestBlock=_transferHitTestBlock;
@property(nonatomic) unsigned long long unReadCount; // @synthesize unReadCount=_unReadCount;
@property(nonatomic) long long contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) UILabel *unReadCountLabel; // @synthesize unReadCountLabel=_unReadCountLabel;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)accessibilityLabel;
- (void)rotateIcon:(double)arg1;
- (void)refreshUI;
- (void)setText:(id)arg1;
- (void)layoutSubviews;
- (id)initWithLabel:(id)arg1 icon:(id)arg2 backgroundColor:(id)arg3;

@end

