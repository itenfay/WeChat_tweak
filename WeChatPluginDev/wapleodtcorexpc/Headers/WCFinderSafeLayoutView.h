//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface WCFinderSafeLayoutView : UIView
{
    UIView *_contentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)refreshLayout;
- (void)layoutSubviews;

@end

