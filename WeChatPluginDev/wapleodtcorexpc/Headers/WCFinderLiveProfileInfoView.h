//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderAudienceLiveInfoItem, MMUILabel, UIView;

@interface WCFinderLiveProfileInfoView
{
    MMUILabel *_titleLabel;
    MMUILabel *_valueLabel;
    UIView *_seperatorLine;
    FinderAudienceLiveInfoItem *_item;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderAudienceLiveInfoItem *item; // @synthesize item=_item;
@property(retain, nonatomic) UIView *seperatorLine; // @synthesize seperatorLine=_seperatorLine;
@property(retain, nonatomic) MMUILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)updateWithAudienceLiveInfoItem:(id)arg1;
- (void)initView;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

