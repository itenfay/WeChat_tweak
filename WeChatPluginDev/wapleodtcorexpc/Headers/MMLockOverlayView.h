//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface MMLockOverlayView : UIView
{
    _Bool _errored;
    NSMutableArray *_pointsToDraw;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool errored; // @synthesize errored=_errored;
@property(retain, nonatomic) NSMutableArray *pointsToDraw; // @synthesize pointsToDraw=_pointsToDraw;
- (void)hightlightError;
- (void)resetView;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

