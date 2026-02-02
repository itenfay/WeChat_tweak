//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMUIView;

@interface PickerTitleBar : NSObject
{
    _Bool _isTitleInCenter;
    MMUILabel *_titleLabel;
    MMUIView *_bottomLine;
}

@property(retain, nonatomic) MMUIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool isTitleInCenter; // @synthesize isTitleInCenter=_isTitleInCenter;
- (void)layoutSubviews;
- (void)createViews;
- (void)setText:(id)arg1;
- (id)init;

@end

