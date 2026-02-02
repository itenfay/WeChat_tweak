//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol MMFinderLivePivotEducationViewModelDelegate;

@interface MMFinderLivePivotEducationViewModel : NSObject
{
    double _tipsHeight;
    double _tipsAlpha;
    id <MMFinderLivePivotEducationViewModelDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMFinderLivePivotEducationViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double tipsAlpha; // @synthesize tipsAlpha=_tipsAlpha;
@property(nonatomic) double tipsHeight; // @synthesize tipsHeight=_tipsHeight;
@property(readonly, nonatomic) NSString *tipsString;
@property(readonly, nonatomic) NSString *arrowImageName;
@property(readonly, nonatomic) double tipsTop;
@property(readonly, nonatomic) double arrowIconTop;
- (double)tipsViewDefaultHeight;
- (double)tipsViewMaxHeight;
- (void)onScrollViewDidScroll:(id)arg1;
@property(readonly, nonatomic) double backgroundViewY;

@end

