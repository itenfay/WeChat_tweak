//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;

@interface MMGroupLiveCommentTableViewCellFrame
{
    long long _layoutResult;
    double _cellHeightPortrait;
    double _cellHeightLandscape;
    NSArray *_arrStylesPortrait;
    NSArray *_arrStylesLandscape;
    struct CGSize _pubbleSizePortrait;
    struct CGSize _pubbleSizeLandscape;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *arrStylesLandscape; // @synthesize arrStylesLandscape=_arrStylesLandscape;
@property(retain, nonatomic) NSArray *arrStylesPortrait; // @synthesize arrStylesPortrait=_arrStylesPortrait;
@property(nonatomic) double cellHeightLandscape; // @synthesize cellHeightLandscape=_cellHeightLandscape;
@property(nonatomic) double cellHeightPortrait; // @synthesize cellHeightPortrait=_cellHeightPortrait;
@property(nonatomic) struct CGSize pubbleSizeLandscape; // @synthesize pubbleSizeLandscape=_pubbleSizeLandscape;
@property(nonatomic) struct CGSize pubbleSizePortrait; // @synthesize pubbleSizePortrait=_pubbleSizePortrait;
@property(readonly, nonatomic) NSArray *arrStyles;
- (double)currCellHeight;
- (double)cellHeight;
@property(readonly, nonatomic) struct CGSize pubbleSize;
- (void)resetCellFrame;
- (void)calculateSizeWithComment:(id)arg1 isPortrait:(_Bool)arg2;
- (_Bool)calculateIfNeeded;
- (void)calculateWithCommentInfo:(id)arg1 isLastLine:(_Bool)arg2;

@end

