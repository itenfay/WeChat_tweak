//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIColor;

@interface CellSourceView : UIView
{
    unsigned long long _bubbleType;
    UIColor *_fixedBackgroundColor;
    UIView *_separatorLineView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separatorLineView; // @synthesize separatorLineView=_separatorLineView;
@property(retain, nonatomic) UIColor *fixedBackgroundColor; // @synthesize fixedBackgroundColor=_fixedBackgroundColor;
@property(nonatomic) unsigned long long bubbleType; // @synthesize bubbleType=_bubbleType;
- (id)separatorColor;
- (_Bool)shouldShowSeparator;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 fixedBackgroundColor:(id)arg2 bubbleType:(unsigned long long)arg3 separatorColor:(id)arg4;
- (void)setBackgroundColor:(id)arg1;

@end

