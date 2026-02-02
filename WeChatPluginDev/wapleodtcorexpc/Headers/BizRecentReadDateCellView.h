//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel;

@interface BizRecentReadDateCellView
{
    MMUILabel *_dateLabel;
    long long _paddingTop;
}

- (void).cxx_destruct;
@property(nonatomic) long long paddingTop; // @synthesize paddingTop=_paddingTop;
@property(retain, nonatomic) MMUILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
- (id)getDateLabelText;
- (void)sizeToFit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)configureLayout;
- (void)applyData:(id)arg1 atIndex:(long long)arg2 withAnimation:(_Bool)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

