//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIActivityIndicatorView, MMUILabel;

@interface WCListenLyricHintView
{
    unsigned long long _mode;
    MMUIActivityIndicatorView *_indicatorView;
    MMUILabel *_textLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) MMUIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void)setEmptyText:(id)arg1;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

