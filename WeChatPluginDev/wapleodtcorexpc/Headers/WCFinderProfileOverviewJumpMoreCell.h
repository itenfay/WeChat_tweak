//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class UILabel, UIView;

@interface WCFinderProfileOverviewJumpMoreCell : UICollectionViewCell
{
    UILabel *_wordingLabel;
    UIView *_topLine;
    struct UIEdgeInsets _contentInsets;
    struct UIEdgeInsets _topLineEdgeInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(nonatomic) struct UIEdgeInsets topLineEdgeInsets; // @synthesize topLineEdgeInsets=_topLineEdgeInsets;
@property(retain, nonatomic) UILabel *wordingLabel; // @synthesize wordingLabel=_wordingLabel;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (void)prepareForReuse;
- (void)layoutTopLine;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

