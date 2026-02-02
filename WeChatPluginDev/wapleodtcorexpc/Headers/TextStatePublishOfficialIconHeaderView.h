//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class NSString, UILabel;

@interface TextStatePublishOfficialIconHeaderView : UICollectionReusableView
{
    NSString *_sectionName;
    UILabel *_sectionNameLabel;
}

+ (double)headerHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *sectionNameLabel; // @synthesize sectionNameLabel=_sectionNameLabel;
@property(retain, nonatomic) NSString *sectionName; // @synthesize sectionName=_sectionName;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

