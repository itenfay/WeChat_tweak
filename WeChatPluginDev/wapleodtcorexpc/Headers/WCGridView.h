//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray;

@interface WCGridView : UIView
{
    NSArray *_itemViews;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *itemViews; // @synthesize itemViews=_itemViews;
- (void)layoutItemViews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

