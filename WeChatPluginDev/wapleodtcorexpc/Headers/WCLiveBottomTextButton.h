//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString;

@interface WCLiveBottomTextButton
{
    _Bool _bBottomDescLabelNoLimitedWidth;
    _Bool _hideDescLabel;
    MMUILabel *_m_bottomDescriptionLabel;
    NSString *_m_bottomDescription;
    double _bottomLabelOffsetY;
    unsigned long long _buttonTextLocation;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long buttonTextLocation; // @synthesize buttonTextLocation=_buttonTextLocation;
@property(nonatomic) double bottomLabelOffsetY; // @synthesize bottomLabelOffsetY=_bottomLabelOffsetY;
@property(nonatomic) _Bool hideDescLabel; // @synthesize hideDescLabel=_hideDescLabel;
@property(nonatomic) _Bool bBottomDescLabelNoLimitedWidth; // @synthesize bBottomDescLabelNoLimitedWidth=_bBottomDescLabelNoLimitedWidth;
@property(retain, nonatomic) NSString *m_bottomDescription; // @synthesize m_bottomDescription=_m_bottomDescription;
@property(retain, nonatomic) MMUILabel *m_bottomDescriptionLabel; // @synthesize m_bottomDescriptionLabel=_m_bottomDescriptionLabel;
- (id)getBottomDescriptionLabel;
- (void)setBottomDescription:(id)arg1 withOffetY:(double)arg2;
- (void)updateOffsetY:(double)arg1;
- (void)setBottomTextColor:(id)arg1;
- (void)layoutBottomDescriptionLabel;
- (void)layoutSubviews;
- (void)updateTextLocation:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 blurEffectColor:(id)arg2 roundCorner:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

