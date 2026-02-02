//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderLiveLotteryClaimMethod, NSMutableArray;

@interface MMFinderLiveLotteryGetPrizeMethodView : UIView
{
    double _currentHeight;
    FinderLiveLotteryClaimMethod *_claimMethod;
    NSMutableArray *_itemArray;
    NSMutableArray *_itemHeightArray;
    UIView *_sepelateLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *sepelateLine; // @synthesize sepelateLine=_sepelateLine;
@property(copy, nonatomic) NSMutableArray *itemHeightArray; // @synthesize itemHeightArray=_itemHeightArray;
@property(copy, nonatomic) NSMutableArray *itemArray; // @synthesize itemArray=_itemArray;
@property(retain, nonatomic) FinderLiveLotteryClaimMethod *claimMethod; // @synthesize claimMethod=_claimMethod;
@property(nonatomic) double currentHeight; // @synthesize currentHeight=_currentHeight;
- (void)createItemWithClaimInfo:(id)arg1 originY:(double)arg2 height:(double)arg3;
- (void)layoutSeparateLine;
- (void)createUI;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)getHeightWithClaimInfo:(id)arg1;
- (double)getPrizeMethodViewHeight:(id)arg1;

@end

