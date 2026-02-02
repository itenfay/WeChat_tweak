//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UILabel;
@protocol ShareViewDelegate><NSObject;

@interface ShareView : UIView
{
    id <ShareViewDelegate><NSObject> _delegate;
    UILabel *_shareLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *shareLabel; // @synthesize shareLabel=_shareLabel;
@property(nonatomic) __weak id <ShareViewDelegate><NSObject> delegate; // @synthesize delegate=_delegate;
- (void)onClickShareLabel;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

