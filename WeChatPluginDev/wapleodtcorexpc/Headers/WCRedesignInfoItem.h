//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, UIColor;

@interface WCRedesignInfoItem
{
    NSString *_subtitle;
    UIColor *_subtitleColor;
    MMUILabel *_subtitleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UIColor *subtitleColor; // @synthesize subtitleColor=_subtitleColor;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
- (void)updateAccessibility;
- (void)updateSubtitle;
- (id)getValue;
- (void)setM_title:(id)arg1;
- (void)onLayoutContentViewSubviews;
- (void)initContentView;
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;

@end

