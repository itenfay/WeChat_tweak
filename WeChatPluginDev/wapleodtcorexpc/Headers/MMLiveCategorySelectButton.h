//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveTagInfo, UIImageView, UILabel;

@interface MMLiveCategorySelectButton
{
    _Bool _hideLogo;
    double _maxWidth;
    FinderLiveTagInfo *_tagInfo;
    UIImageView *_iconView;
    UILabel *_textLabel;
    UIImageView *_arrowImageView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hideLogo; // @synthesize hideLogo=_hideLogo;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) FinderLiveTagInfo *tagInfo; // @synthesize tagInfo=_tagInfo;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
- (void)adjustSubViewsCenterY;
- (void)sizeToFit;
- (void)updateWithTag:(id)arg1;
- (void)hideLogo:(_Bool)arg1 maxWidth:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

