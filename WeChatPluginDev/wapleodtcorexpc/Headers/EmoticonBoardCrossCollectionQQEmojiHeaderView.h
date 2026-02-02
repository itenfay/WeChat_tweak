//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class NSString, UIColor, UILabel;

@interface EmoticonBoardCrossCollectionQQEmojiHeaderView : UICollectionReusableView
{
    NSString *_title;
    UIColor *_titleColor;
    double _topMargin;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithFrame:(struct CGRect)arg1;

@end

