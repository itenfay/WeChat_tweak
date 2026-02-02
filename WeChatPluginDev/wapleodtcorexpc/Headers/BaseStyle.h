//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface BaseStyle : NSObject
{
    struct CGRect _frame;
    _Bool _bUserInteractionEnabled;
    _Bool _endOfContent;
    _Bool _hasAdjustment;
    _Bool _bHighlighted;
    _Bool _isSelectable;
    BaseStyle *_eventRespondStyle;
    struct _NSRange _range;
    struct _NSRange _displayRange;
}

- (void).cxx_destruct;
@property(nonatomic) __weak BaseStyle *eventRespondStyle; // @synthesize eventRespondStyle=_eventRespondStyle;
@property(nonatomic) _Bool isSelectable; // @synthesize isSelectable=_isSelectable;
@property(nonatomic) _Bool bHighlighted; // @synthesize bHighlighted=_bHighlighted;
@property(nonatomic) _Bool hasAdjustment; // @synthesize hasAdjustment=_hasAdjustment;
@property(nonatomic) _Bool endOfContent; // @synthesize endOfContent=_endOfContent;
@property(nonatomic) struct _NSRange displayRange; // @synthesize displayRange=_displayRange;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(nonatomic) _Bool bUserInteractionEnabled; // @synthesize bUserInteractionEnabled=_bUserInteractionEnabled;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)init;

@end

