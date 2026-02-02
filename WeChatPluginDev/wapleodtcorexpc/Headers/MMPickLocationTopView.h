//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton;
@protocol MMPickLocationActionDelegate;

@interface MMPickLocationTopView : UIView
{
    id <MMPickLocationActionDelegate> _actionDelegate;
    MMUIButton *_foldedBtn;
}

+ (double)PickLocationTopViewHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *foldedBtn; // @synthesize foldedBtn=_foldedBtn;
@property(nonatomic) __weak id <MMPickLocationActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)hideFoldBtn;
- (void)displayFoldBtn;
- (void)onClickFoldedBtn;
- (void)layoutSubviews;
- (id)init;

@end

