//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, UIFont;

@interface MMFinderLiveShowBoxItemsViewConfig : NSObject
{
    _Bool _multiLines;
    NSArray *_validShowBoxItemTypes;
    UIFont *_textFont;
    double _lineHeight;
    double _lineSpacing;
    double _bottomTouchInset;
    struct CGSize _borderImageLabelImageSize;
    struct CGSize _jumpArrowSize;
    struct UIEdgeInsets _paddingLabelPadding;
}

- (void).cxx_destruct;
@property(nonatomic) double bottomTouchInset; // @synthesize bottomTouchInset=_bottomTouchInset;
@property(nonatomic) _Bool multiLines; // @synthesize multiLines=_multiLines;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
@property(nonatomic) struct CGSize jumpArrowSize; // @synthesize jumpArrowSize=_jumpArrowSize;
@property(nonatomic) struct CGSize borderImageLabelImageSize; // @synthesize borderImageLabelImageSize=_borderImageLabelImageSize;
@property(nonatomic) struct UIEdgeInsets paddingLabelPadding; // @synthesize paddingLabelPadding=_paddingLabelPadding;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(retain, nonatomic) NSArray *validShowBoxItemTypes; // @synthesize validShowBoxItemTypes=_validShowBoxItemTypes;

@end

