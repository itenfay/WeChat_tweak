//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;
@protocol MMOrderCenterTableViewCellComponentAggregatedDelegate;

@interface MMOrderCenterTableViewCellFinderRefererView : UIView
{
    id <MMOrderCenterTableViewCellComponentAggregatedDelegate> _delegate;
    UIView *_separatorBarView;
    UIImageView *_finderLogoView;
    UILabel *_refererNameView;
    UIImageView *_rightChevronView;
}

+ (double)heightForOrder:(id)arg1 inWidth:(double)arg2 estimate:(_Bool)arg3;
+ (_Bool)shouldUseComponentForOrder:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *rightChevronView; // @synthesize rightChevronView=_rightChevronView;
@property(retain, nonatomic) UILabel *refererNameView; // @synthesize refererNameView=_refererNameView;
@property(retain, nonatomic) UIImageView *finderLogoView; // @synthesize finderLogoView=_finderLogoView;
@property(retain, nonatomic) UIView *separatorBarView; // @synthesize separatorBarView=_separatorBarView;
@property(nonatomic) __weak id <MMOrderCenterTableViewCellComponentAggregatedDelegate> delegate; // @synthesize delegate=_delegate;
- (id)accessibilityElements;
- (void)onTapped;
- (void)updateWithOrder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

