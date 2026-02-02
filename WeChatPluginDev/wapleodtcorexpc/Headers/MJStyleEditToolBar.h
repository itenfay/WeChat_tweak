//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, MMUILabel;

@interface MJStyleEditToolBar : UIView
{
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _doneBlock;
    MMUILabel *_titleLabel;
    MMUIButton *_doneButton;
    MMUIButton *_cancelButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MMUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(readonly, nonatomic) MMUIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(readonly, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType doneBlock; // @synthesize doneBlock=_doneBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

