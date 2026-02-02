//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSValue, WCFinderTagListViewOptions;

@interface WCFinderTagListViewLayout : NSObject
{
    _Bool _isExpand;
    _Bool _dirty;
    WCFinderTagListViewOptions *_options;
    double _width;
    NSMutableArray *_layoutItems;
    long long _oldExpandBtnStyle;
    NSValue *_expandBtnSizeValue;
    struct CGRect _expandBtnFrame;
}

+ (id)displayTitle:(id)arg1 withLimitCharCount:(long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSValue *expandBtnSizeValue; // @synthesize expandBtnSizeValue=_expandBtnSizeValue;
@property(nonatomic) long long oldExpandBtnStyle; // @synthesize oldExpandBtnStyle=_oldExpandBtnStyle;
@property(nonatomic) _Bool dirty; // @synthesize dirty=_dirty;
@property(nonatomic) struct CGRect expandBtnFrame; // @synthesize expandBtnFrame=_expandBtnFrame;
@property(retain, nonatomic) NSMutableArray *layoutItems; // @synthesize layoutItems=_layoutItems;
@property(nonatomic) _Bool isExpand; // @synthesize isExpand=_isExpand;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) WCFinderTagListViewOptions *options; // @synthesize options=_options;
- (struct CGSize)expandBtnSize;
- (void)updateCloseBtnSize;
- (void)enumerateLayout:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) double height;
- (void)doLayout;
@property(copy, nonatomic) NSArray *items;
- (void)markDirty;
- (struct CGSize)calculateTextSize:(id)arg1;
- (id)init;

@end

