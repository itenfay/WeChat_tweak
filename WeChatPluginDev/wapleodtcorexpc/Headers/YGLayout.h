//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIView;

@interface YGLayout : NSObject
{
    _Bool _isEnabled;
    _Bool _isIncludedInLayout;
    _Bool _isUIView;
    struct YGNode *_node;
    UIView *_view;
    NSString *_view_id;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *view_id; // @synthesize view_id=_view_id;
@property(readonly, nonatomic) _Bool isUIView; // @synthesize isUIView=_isUIView;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(readonly, nonatomic) struct YGNode *node; // @synthesize node=_node;
@property(nonatomic, setter=setIncludedInLayout:) _Bool isIncludedInLayout; // @synthesize isIncludedInLayout=_isIncludedInLayout;
@property(nonatomic, setter=setEnabled:) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
- (id)getViewId;
- (void)setViewId:(id)arg1;
- (void)recursiveMarkDirty:(id)arg1;
- (void)requestLayout;
- (struct CGSize)calculateLayoutWithSize:(struct CGSize)arg1;
@property(readonly, nonatomic) struct CGSize intrinsicSize;
- (void)applyLayoutPreservingOrigin:(_Bool)arg1 dimensionFlexibility:(long long)arg2;
- (void)applyLayoutPreservingOrigin:(_Bool)arg1;
- (void)applyLayout;
@property(readonly, nonatomic) int resolvedDirection;
@property(nonatomic) double aspectRatio;
@property(nonatomic) struct YGValue maxHeight;
@property(nonatomic) struct YGValue maxWidth;
@property(nonatomic) struct YGValue minHeight;
@property(nonatomic) struct YGValue minWidth;
@property(nonatomic) struct YGValue height;
@property(nonatomic) struct YGValue width;
@property(nonatomic) double borderWidth;
@property(nonatomic) double borderEndWidth;
@property(nonatomic) double borderStartWidth;
@property(nonatomic) double borderBottomWidth;
@property(nonatomic) double borderRightWidth;
@property(nonatomic) double borderTopWidth;
@property(nonatomic) double borderLeftWidth;
@property(nonatomic) struct YGValue padding;
@property(nonatomic) struct YGValue paddingVertical;
@property(nonatomic) struct YGValue paddingHorizontal;
@property(nonatomic) struct YGValue paddingEnd;
@property(nonatomic) struct YGValue paddingStart;
@property(nonatomic) struct YGValue paddingBottom;
@property(nonatomic) struct YGValue paddingRight;
@property(nonatomic) struct YGValue paddingTop;
@property(nonatomic) struct YGValue paddingLeft;
@property(nonatomic) struct YGValue margin;
@property(nonatomic) struct YGValue marginVertical;
@property(nonatomic) struct YGValue marginHorizontal;
@property(nonatomic) struct YGValue marginEnd;
@property(nonatomic) struct YGValue marginStart;
@property(nonatomic) struct YGValue marginBottom;
@property(nonatomic) struct YGValue marginRight;
@property(nonatomic) struct YGValue marginTop;
@property(nonatomic) struct YGValue marginLeft;
@property(nonatomic) struct YGValue end;
@property(nonatomic) struct YGValue start;
@property(nonatomic) struct YGValue bottom;
@property(nonatomic) struct YGValue right;
@property(nonatomic) struct YGValue top;
@property(nonatomic) struct YGValue left;
@property(nonatomic) struct YGValue flexBasis;
@property(nonatomic) double flexShrink;
@property(nonatomic) double flexGrow;
@property(nonatomic) double flex;
@property(nonatomic) int display;
@property(nonatomic) int overflow;
@property(nonatomic) int flexWrap;
@property(nonatomic) int alignSelf;
@property(nonatomic) int alignItems;
@property(nonatomic) int alignContent;
@property(nonatomic) int justifyContent;
@property(nonatomic) int flexDirection;
@property(nonatomic) int direction;
@property(nonatomic) int position;
@property(readonly, nonatomic) _Bool isLeaf;
@property(readonly, nonatomic) unsigned long long numberOfChildren;
- (void)markDirty;
@property(readonly, nonatomic) _Bool isDirty;
- (void)dealloc;
- (id)initWithView:(id)arg1;

@end

