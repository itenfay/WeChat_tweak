//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIScrollView.h>

@class NSMutableArray, UIView;
@protocol MMActionSheetScrollViewDelegate;

@interface MMActionSheetScrollView : UIScrollView
{
    id <MMActionSheetScrollViewDelegate> _actionSheetDelegate;
    UIView *_customView;
    NSMutableArray *_itemViewArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *itemViewArray; // @synthesize itemViewArray=_itemViewArray;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(nonatomic) __weak id <MMActionSheetScrollViewDelegate> actionSheetDelegate; // @synthesize actionSheetDelegate=_actionSheetDelegate;
- (void)layoutSubviews;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (void)reloadItems:(id)arg1 itemDelegate:(id)arg2;
@property(readonly, nonatomic) double iconMargin;

@end

