//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, UIView, WXMASConstraint;

@interface WXMASConstraintMaker : NSObject
{
    _Bool _updateExisting;
    _Bool _removeExisting;
    UIView *_view;
    NSMutableArray *_constraints;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *constraints; // @synthesize constraints=_constraints;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic) _Bool removeExisting; // @synthesize removeExisting=_removeExisting;
@property(nonatomic) _Bool updateExisting; // @synthesize updateExisting=_updateExisting;
- (CDUnknownBlockType)group;
@property(readonly, nonatomic) WXMASConstraint *center;
@property(readonly, nonatomic) WXMASConstraint *size;
@property(readonly, nonatomic) WXMASConstraint *edges;
@property(readonly, nonatomic) WXMASConstraint *centerYWithinMargins;
@property(readonly, nonatomic) WXMASConstraint *centerXWithinMargins;
@property(readonly, nonatomic) WXMASConstraint *trailingMargin;
@property(readonly, nonatomic) WXMASConstraint *leadingMargin;
@property(readonly, nonatomic) WXMASConstraint *bottomMargin;
@property(readonly, nonatomic) WXMASConstraint *topMargin;
@property(readonly, nonatomic) WXMASConstraint *rightMargin;
@property(readonly, nonatomic) WXMASConstraint *leftMargin;
@property(readonly, nonatomic) WXMASConstraint *lastBaseline;
@property(readonly, nonatomic) WXMASConstraint *firstBaseline;
@property(readonly, nonatomic) CDUnknownBlockType attributes;
@property(readonly, nonatomic) WXMASConstraint *baseline;
@property(readonly, nonatomic) WXMASConstraint *centerY;
@property(readonly, nonatomic) WXMASConstraint *centerX;
@property(readonly, nonatomic) WXMASConstraint *height;
@property(readonly, nonatomic) WXMASConstraint *width;
@property(readonly, nonatomic) WXMASConstraint *trailing;
@property(readonly, nonatomic) WXMASConstraint *leading;
@property(readonly, nonatomic) WXMASConstraint *bottom;
@property(readonly, nonatomic) WXMASConstraint *right;
@property(readonly, nonatomic) WXMASConstraint *top;
@property(readonly, nonatomic) WXMASConstraint *left;
- (id)addConstraintWithLayoutAttribute:(long long)arg1;
- (id)addConstraintWithAttributes:(long long)arg1;
- (id)constraint:(id)arg1 addConstraintWithLayoutAttribute:(long long)arg2;
- (void)constraint:(id)arg1 shouldBeReplacedWithConstraint:(id)arg2;
- (id)install;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

