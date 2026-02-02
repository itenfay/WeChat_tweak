//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class MMUILabel, NSString, UIImageView;

@interface WCRedesignButtonItem
{
    NSString *_subtitle;
    CDUnknownBlockType _tapHandler;
    MMUILabel *_subtitleLabel;
    UIImageView *_arrowImageView;
}

@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(copy, nonatomic) CDUnknownBlockType tapHandler; // @synthesize tapHandler=_tapHandler;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
- (void)onTapBackground;
- (void)updateAccessibility;
- (id)getValue;
- (void)setEnable:(_Bool)arg1;
- (void)setM_title:(id)arg1;
- (void)onLayoutContentViewSubviews;
- (void)initContentView;
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;

@end
