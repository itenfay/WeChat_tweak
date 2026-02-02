//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UILabel, UIView;

@interface WCMomentsCompositorTabCellView : UICollectionViewCell
{
    NSString *_currentText;
    _Bool _currentSelected;
    UILabel *_tabTitleLabel;
    UIView *_underlineView;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *underlineView; // @synthesize underlineView=_underlineView;
@property(retain, nonatomic) UILabel *tabTitleLabel; // @synthesize tabTitleLabel=_tabTitleLabel;
- (void)loadTabCellViewModel:(id)arg1;

@end

