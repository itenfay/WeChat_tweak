//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class NSString, UILabel;

@interface TextStateEmojiBoardIconCollectionHeaderView : UICollectionReusableView
{
    NSString *_sectionTitle;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

