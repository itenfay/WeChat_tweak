//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAShapeLayer, MMLiveAddBoardViewItem;

@interface MMLiveAddBoardView : UIView
{
    MMLiveAddBoardViewItem *_sendLocationItem;
    _Bool _isRemainSeeItemEnable;
    _Bool _isSendLocationItemEnable;
    double _preferHeight;
    CDUnknownBlockType _addBoardViewItemClickBlock;
    MMLiveAddBoardViewItem *_remainSeeItem;
    CAShapeLayer *_shapeLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) MMLiveAddBoardViewItem *remainSeeItem; // @synthesize remainSeeItem=_remainSeeItem;
@property(nonatomic) _Bool isSendLocationItemEnable; // @synthesize isSendLocationItemEnable=_isSendLocationItemEnable;
@property(nonatomic) _Bool isRemainSeeItemEnable; // @synthesize isRemainSeeItemEnable=_isRemainSeeItemEnable;
@property(copy, nonatomic) CDUnknownBlockType addBoardViewItemClickBlock; // @synthesize addBoardViewItemClickBlock=_addBoardViewItemClickBlock;
@property(nonatomic) double preferHeight; // @synthesize preferHeight=_preferHeight;
- (void)clickFunction:(unsigned long long)arg1;
@property(readonly, nonatomic) MMLiveAddBoardViewItem *sendLocationItem;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

