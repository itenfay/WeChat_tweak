//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class UILabel;

@interface WCFinderSearchFeedReusableView : UICollectionReusableView
{
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

