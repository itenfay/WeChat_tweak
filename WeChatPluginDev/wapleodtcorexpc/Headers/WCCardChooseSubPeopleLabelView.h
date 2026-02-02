//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel;

@interface WCCardChooseSubPeopleLabelView
{
    MMUILabel *_mainLabel;
    MMUILabel *_subLabel;
    double _maxWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(retain, nonatomic) MMUILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(retain, nonatomic) MMUILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

