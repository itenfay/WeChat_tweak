//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class UILabel, UIView;

@interface WCFinderLandScapeBigCardHeader : UITableViewHeaderFooterView
{
    UILabel *_headerLabel;
    UIView *_bgView;
}

+ (id)headerID;
+ (double)headerH;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
- (void)layoutSubviews;
- (void)setup;
- (id)initWithReuseIdentifier:(id)arg1;

@end

