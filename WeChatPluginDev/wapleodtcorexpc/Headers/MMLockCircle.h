//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface MMLockCircle : UIView
{
    _Bool _selected;
    _Bool _skiped;
    _Bool _errored;
}

@property(nonatomic) _Bool errored; // @synthesize errored=_errored;
@property(nonatomic) _Bool skiped; // @synthesize skiped=_skiped;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (void)hightlightErrorCell;
- (void)resetCell;
- (void)highlightCell;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithRadius:(double)arg1;

@end

