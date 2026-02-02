//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, NSMutableArray;

@interface MMFinderLiveLandscapeBarrageParamCardItemView : UIView
{
    CDUnknownBlockType _onBarrageParamCardSelect;
    MMUILabel *_titleLabel;
    NSMutableArray *_paramCardBtnList;
}

+ (double)staticHeight;
+ (double)staticWidth;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *paramCardBtnList; // @synthesize paramCardBtnList=_paramCardBtnList;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType onBarrageParamCardSelect; // @synthesize onBarrageParamCardSelect=_onBarrageParamCardSelect;
- (void)onParamCardBtnClicked:(id)arg1;
- (void)addParamCard:(id)arg1;
- (void)layoutUI;
- (void)createTitleLabel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1;

@end

