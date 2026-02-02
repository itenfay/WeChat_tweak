//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSDictionary;

@interface MJRulerView : UIView
{
    struct vector<std::tuple<CGPoint, double>, std::allocator<std::tuple<CGPoint, double>>> _dotMarks;
    struct vector<std::tuple<double, std::string, std::string>, std::allocator<std::tuple<double, std::string, std::string>>> _textMarks;
    list_ea53b405 _lruList;
    struct map<std::string, std::pair<CATextLayer *, std::__list_iterator<std::string, void *>>, std::less<std::string>, std::allocator<std::pair<const std::string, std::pair<CATextLayer *, std::__list_iterator<std::string, void *>>>>> _cache;
    NSDictionary *_markStyles;
}

+ (Class)layerClass;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *markStyles; // @synthesize markStyles=_markStyles;
- (id)textLayerForMark:(const void *)arg1 withStyle:(id)arg2;
- (void)drawTexts:(const void *)arg1 withStyle:(id)arg2;
- (void)drawDots:(const void *)arg1 onPath:(id)arg2;
- (void)hideAllTextLayers;
- (void)drawMarks:(const void *)arg1;
- (id)shapeLayer;
- (id)initWithMarkStyles:(id)arg1;

@end

