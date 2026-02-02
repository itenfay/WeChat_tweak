//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMSnackBarView;
@protocol MMSnackBarWindowViewDelegate;

@interface MMSnackBarWindowView : UIView
{
    MMSnackBarView *_snackBarView;
    id <MMSnackBarWindowViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMSnackBarWindowViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMSnackBarView *snackBarView; // @synthesize snackBarView=_snackBarView;
- (void)updateSnackBarPosition;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

