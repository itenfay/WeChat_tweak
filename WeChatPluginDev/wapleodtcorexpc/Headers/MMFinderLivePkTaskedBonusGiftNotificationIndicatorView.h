//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface MMFinderLivePkTaskedBonusGiftNotificationIndicatorView : UIView
{
    double _labelDisplayCenterX;
    NSMutableArray *_inDisplayItems;
    NSMutableArray *_pool;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *pool; // @synthesize pool=_pool;
@property(retain, nonatomic) NSMutableArray *inDisplayItems; // @synthesize inDisplayItems=_inDisplayItems;
@property(nonatomic) double labelDisplayCenterX; // @synthesize labelDisplayCenterX=_labelDisplayCenterX;
- (void)returnLabelToPool:(id)arg1;
- (id)rentLabelFromPool;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)pushLine:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

