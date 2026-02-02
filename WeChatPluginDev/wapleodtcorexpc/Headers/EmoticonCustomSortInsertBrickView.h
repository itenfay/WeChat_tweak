//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonCustomSortSingleBrick, MMBadgeView, UIImageView;

@interface EmoticonCustomSortInsertBrickView
{
    UIImageView *_emoticonView;
    MMBadgeView *_countView;
    EmoticonCustomSortSingleBrick *_mainBrick;
    EmoticonCustomSortSingleBrick *_midBrick;
    EmoticonCustomSortSingleBrick *_bottomBrick;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonCustomSortSingleBrick *bottomBrick; // @synthesize bottomBrick=_bottomBrick;
@property(retain, nonatomic) EmoticonCustomSortSingleBrick *midBrick; // @synthesize midBrick=_midBrick;
@property(retain, nonatomic) EmoticonCustomSortSingleBrick *mainBrick; // @synthesize mainBrick=_mainBrick;
@property(retain, nonatomic) MMBadgeView *countView; // @synthesize countView=_countView;
@property(retain, nonatomic) UIImageView *emoticonView; // @synthesize emoticonView=_emoticonView;
- (void)updateWithWrap:(id)arg1 andTotalCount:(unsigned long long)arg2;
- (id)genBrickBGView;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

