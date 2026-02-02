//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface MJStyleEditData : NSObject
{
    _Bool _segmentHasMultiSubtitles;
    unsigned long long _type;
    NSArray *_stickers;
    double _spacing;
    struct CGSize _cellSize;
    struct UIEdgeInsets _sectionInset;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool segmentHasMultiSubtitles; // @synthesize segmentHasMultiSubtitles=_segmentHasMultiSubtitles;
@property(nonatomic) struct UIEdgeInsets sectionInset; // @synthesize sectionInset=_sectionInset;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
@property(retain, nonatomic) NSArray *stickers; // @synthesize stickers=_stickers;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (unsigned long long)numberOfItems;
- (id)initWithType:(unsigned long long)arg1 stickers:(id)arg2 cellSize:(struct CGSize)arg3 spacing:(double)arg4 sectionInset:(struct UIEdgeInsets)arg5 segmentHasMultiSubtitles:(_Bool)arg6;

@end

