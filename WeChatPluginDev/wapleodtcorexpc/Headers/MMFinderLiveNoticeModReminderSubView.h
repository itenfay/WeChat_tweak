//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, UIImageView, UIView;

@interface MMFinderLiveNoticeModReminderSubView
{
    _Bool _isDisable;
    int _type;
    int _selectType;
    CDUnknownBlockType _selectBlock;
    unsigned long long _fromType;
    MMUIButton *_bgButton;
    MMUILabel *_titleLabel;
    MMUILabel *_stateLabel;
    UIImageView *_selectStateImg;
    UIView *_sepLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *sepLine; // @synthesize sepLine=_sepLine;
@property(retain, nonatomic) UIImageView *selectStateImg; // @synthesize selectStateImg=_selectStateImg;
@property(retain, nonatomic) MMUILabel *stateLabel; // @synthesize stateLabel=_stateLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *bgButton; // @synthesize bgButton=_bgButton;
@property(nonatomic) unsigned long long fromType; // @synthesize fromType=_fromType;
@property(nonatomic) int selectType; // @synthesize selectType=_selectType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool isDisable; // @synthesize isDisable=_isDisable;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
- (id)accessibilityLabel;
- (void)actionClick;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isSelect;
- (void)updateType:(int)arg1 selectType:(int)arg2 isDisable:(_Bool)arg3 fromType:(unsigned long long)arg4;

@end

