//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, UIImage;

@interface WAHeaderStackDisplayView
{
    double _coverGap;
    double _headerSize;
    UIImage *_defaultImage;
    NSMutableArray *_headerViews;
    NSMutableArray *_layers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *layers; // @synthesize layers=_layers;
@property(retain, nonatomic) NSMutableArray *headerViews; // @synthesize headerViews=_headerViews;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(nonatomic) double headerSize; // @synthesize headerSize=_headerSize;
@property(nonatomic) double coverGap; // @synthesize coverGap=_coverGap;
- (void)orderHeaderViews;
- (void)resetHeaderViewsPosition;
- (void)fitHeaderViewCount:(unsigned long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)fillWithHeaderImageUrls:(id)arg1 animated:(_Bool)arg2;
- (double)getHeight;
- (double)getWidth;
- (id)initWithHeaderSize:(double)arg1;
- (id)init;

@end

