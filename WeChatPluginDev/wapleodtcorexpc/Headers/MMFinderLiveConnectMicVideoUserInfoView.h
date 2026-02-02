//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMFinderLiveConnectMicVideoUserInfoView
{
    _Bool _isGlobalSmallMode;
    _Bool _isInFullScreenPKStyle;
}

@property(nonatomic) _Bool isInFullScreenPKStyle; // @synthesize isInFullScreenPKStyle=_isInFullScreenPKStyle;
@property(nonatomic) _Bool isGlobalSmallMode; // @synthesize isGlobalSmallMode=_isGlobalSmallMode;
@property(readonly, nonatomic) double contentWidth;
- (void)updateMicMutedButtonAppearance;
- (void)layoutUI;
- (double)nameLabelFontSize;
- (struct CGRect)displayNormalizedFrame;
- (unsigned long long)viewType;
- (_Bool)needDisplayGlobalRankSignView;
- (void)updateHeadImageViewSize;
- (void)show;

@end

