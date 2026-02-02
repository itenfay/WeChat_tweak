//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol WXMASConstraintDelegate;

@interface WXMASConstraint : NSObject
{
    _Bool _updateExisting;
    id <WXMASConstraintDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WXMASConstraintDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool updateExisting; // @synthesize updateExisting=_updateExisting;
- (void)uninstall;
- (void)install;
- (void)deactivate;
- (void)activate;
- (void)setOffset:(double)arg1;
- (void)setCenterOffset:(struct CGPoint)arg1;
- (void)setSizeOffset:(struct CGSize)arg1;
- (void)setInset:(double)arg1;
- (void)setInsets:(struct UIEdgeInsets)arg1;
- (CDUnknownBlockType)key;
- (CDUnknownBlockType)equalToWithRelation;
- (CDUnknownBlockType)priority;
- (CDUnknownBlockType)dividedBy;
- (CDUnknownBlockType)multipliedBy;
- (id)centerYWithinMargins;
- (id)centerXWithinMargins;
- (id)trailingMargin;
- (id)leadingMargin;
- (id)bottomMargin;
- (id)topMargin;
- (id)rightMargin;
- (id)leftMargin;
- (id)lastBaseline;
- (id)firstBaseline;
- (id)baseline;
- (id)centerY;
- (id)centerX;
- (id)height;
- (id)width;
- (id)trailing;
- (id)leading;
- (id)bottom;
- (id)right;
- (id)top;
- (id)left;
- (id)addConstraintWithLayoutAttribute:(long long)arg1;
- (id)and;
- (id)with;
- (void)setLayoutConstantWithValue:(id)arg1;
- (CDUnknownBlockType)mas_offset;
- (CDUnknownBlockType)valueOffset;
- (CDUnknownBlockType)offset;
- (CDUnknownBlockType)centerOffset;
- (CDUnknownBlockType)sizeOffset;
- (CDUnknownBlockType)inset;
- (CDUnknownBlockType)insets;
- (CDUnknownBlockType)priorityHigh;
- (CDUnknownBlockType)priorityMedium;
- (CDUnknownBlockType)priorityLow;
- (CDUnknownBlockType)mas_lessThanOrEqualTo;
- (CDUnknownBlockType)lessThanOrEqualTo;
- (CDUnknownBlockType)mas_greaterThanOrEqualTo;
- (CDUnknownBlockType)greaterThanOrEqualTo;
- (CDUnknownBlockType)mas_equalTo;
- (CDUnknownBlockType)equalTo;
- (id)init;

@end

