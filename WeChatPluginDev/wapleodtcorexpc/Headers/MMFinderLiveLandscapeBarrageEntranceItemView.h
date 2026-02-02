//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, UISwitch;

@interface MMFinderLiveLandscapeBarrageEntranceItemView : UIView
{
    _Bool _isEntranceOn;
    CDUnknownBlockType _onBarrageEntranceOnChanged;
    MMUILabel *_titleLabel;
    UISwitch *_entranceSwitch;
}

+ (double)staticHeight;
+ (double)staticWidth;
- (void).cxx_destruct;
@property(retain, nonatomic) UISwitch *entranceSwitch; // @synthesize entranceSwitch=_entranceSwitch;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType onBarrageEntranceOnChanged; // @synthesize onBarrageEntranceOnChanged=_onBarrageEntranceOnChanged;
@property(nonatomic) _Bool isEntranceOn; // @synthesize isEntranceOn=_isEntranceOn;
- (void)switchDidChanged:(id)arg1;
- (void)layoutEntranceSwitch;
- (void)layoutTitleLabel;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithEntranceOn:(_Bool)arg1;

@end

