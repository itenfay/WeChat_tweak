//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSAttributedString, UIBezierPath;
@protocol OS_dispatch_semaphore, YYTextLinePositionModifier;

@interface YYTextContainer : NSObject
{
    _Bool _readonly;
    NSObject<OS_dispatch_semaphore> *_lock;
    struct CGSize _size;
    struct UIEdgeInsets _insets;
    UIBezierPath *_path;
    NSArray *_exclusionPaths;
    _Bool _pathFillEvenOdd;
    double _pathLineWidth;
    _Bool _verticalForm;
    unsigned long long _maximumNumberOfRows;
    unsigned long long _truncationType;
    NSAttributedString *_truncationToken;
    id <YYTextLinePositionModifier> _linePositionModifier;
}

+ (id)containerWithPath:(id)arg1;
+ (id)containerWithSize:(struct CGSize)arg1 insets:(struct UIEdgeInsets)arg2;
+ (id)containerWithSize:(struct CGSize)arg1;
- (void).cxx_destruct;
@property(copy) id <YYTextLinePositionModifier> linePositionModifier;
@property(copy) NSAttributedString *truncationToken;
@property unsigned long long truncationType;
@property unsigned long long maximumNumberOfRows;
@property(getter=isVerticalForm) _Bool verticalForm;
@property double pathLineWidth;
@property(getter=isPathFillEvenOdd) _Bool pathFillEvenOdd;
@property(copy) NSArray *exclusionPaths;
@property(copy) UIBezierPath *path;
@property struct UIEdgeInsets insets;
@property struct CGSize size;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

