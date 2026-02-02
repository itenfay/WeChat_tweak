//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, UIButton, UIImageView;

@interface MMWebNaviErrorView : UIView
{
    unsigned int _reason;
    CDUnknownBlockType _reloadAction;
    UIImageView *_errIcon;
    MMUILabel *_errLbl;
    UIButton *_reloadButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *reloadButton; // @synthesize reloadButton=_reloadButton;
@property(retain, nonatomic) MMUILabel *errLbl; // @synthesize errLbl=_errLbl;
@property(retain, nonatomic) UIImageView *errIcon; // @synthesize errIcon=_errIcon;
@property(copy, nonatomic) CDUnknownBlockType reloadAction; // @synthesize reloadAction=_reloadAction;
@property(nonatomic) unsigned int reason; // @synthesize reason=_reason;
- (void)onReload;
- (void)setText:(id)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

