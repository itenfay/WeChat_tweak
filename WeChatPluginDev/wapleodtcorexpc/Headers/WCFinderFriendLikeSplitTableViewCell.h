//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UIView;

@interface WCFinderFriendLikeSplitTableViewCell : UITableViewCell
{
    UILabel *_splitLabel;
    UIView *_leftLine;
    UIView *_rightLine;
}

+ (double)splitTableViewCellHeight;
- (void).cxx_destruct;
@property(nonatomic) __weak UIView *rightLine; // @synthesize rightLine=_rightLine;
@property(nonatomic) __weak UIView *leftLine; // @synthesize leftLine=_leftLine;
@property(nonatomic) __weak UILabel *splitLabel; // @synthesize splitLabel=_splitLabel;
- (void)layoutSubviews;
- (void)setUPUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

