//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIView, UIImageView;

@interface MJTrimHandle : UIView
{
    unsigned long long _style;
    UIView *_lineView;
    UIView *_handleView;
    UIImageView *_handleIconView;
    MMUIView *_snapIndicatorLine;
    MMUIView *_snapIndicatorDot;
}

+ (id)trimHandleWithStyle:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIView *snapIndicatorDot; // @synthesize snapIndicatorDot=_snapIndicatorDot;
@property(retain, nonatomic) MMUIView *snapIndicatorLine; // @synthesize snapIndicatorLine=_snapIndicatorLine;
@property(retain, nonatomic) UIImageView *handleIconView; // @synthesize handleIconView=_handleIconView;
@property(retain, nonatomic) UIView *handleView; // @synthesize handleView=_handleView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void)layoutViews;
- (void)setupViews;
- (id)initWithStyle:(unsigned long long)arg1;

@end

