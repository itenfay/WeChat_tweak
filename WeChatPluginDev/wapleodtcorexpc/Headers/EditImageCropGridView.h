//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;

@interface EditImageCropGridView
{
    _Bool _enableShowGridCorners;
    NSArray *_blLineView;
    NSArray *_brLineView;
    NSArray *_tlLineView;
    NSArray *_trLineView;
    NSArray *_borderGridLines;
    NSArray *_horizontalGridLines;
    NSArray *_verticalGridLines;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enableShowGridCorners; // @synthesize enableShowGridCorners=_enableShowGridCorners;
@property(retain, nonatomic) NSArray *verticalGridLines; // @synthesize verticalGridLines=_verticalGridLines;
@property(retain, nonatomic) NSArray *horizontalGridLines; // @synthesize horizontalGridLines=_horizontalGridLines;
@property(retain, nonatomic) NSArray *_borderGridLines; // @synthesize _borderGridLines;
@property(retain, nonatomic) NSArray *_trLineView; // @synthesize _trLineView;
@property(retain, nonatomic) NSArray *_tlLineView; // @synthesize _tlLineView;
@property(retain, nonatomic) NSArray *_brLineView; // @synthesize _brLineView;
@property(retain, nonatomic) NSArray *_blLineView; // @synthesize _blLineView;
- (id)createLineView;
- (void)layoutLines;
- (void)setCenterGridHidden:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)didMoveToSuperview;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCorners:(_Bool)arg1;

@end

