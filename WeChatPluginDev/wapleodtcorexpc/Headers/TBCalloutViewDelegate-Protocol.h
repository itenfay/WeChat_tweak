//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TBCalloutView;

@protocol TBCalloutViewDelegate <NSObject>

@optional
- (void)calloutViewDidDisappear:(TBCalloutView *)arg1;
- (void)calloutViewWillDisappear:(TBCalloutView *)arg1;
- (void)calloutViewDidAppear:(TBCalloutView *)arg1;
- (void)calloutViewWillAppear:(TBCalloutView *)arg1;
- (double)calloutView:(TBCalloutView *)arg1 delayForRepositionWithSize:(struct CGSize)arg2;
- (void)calloutViewClicked:(TBCalloutView *)arg1;
- (_Bool)calloutViewShouldHighlight:(TBCalloutView *)arg1;
@end

