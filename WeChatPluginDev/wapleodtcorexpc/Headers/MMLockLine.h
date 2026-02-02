//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLockLine : NSObject
{
    _Bool _isFullPath;
    struct CGPoint _fromPoint;
    struct CGPoint _toPoint;
}

@property(nonatomic) _Bool isFullPath; // @synthesize isFullPath=_isFullPath;
@property(nonatomic) struct CGPoint toPoint; // @synthesize toPoint=_toPoint;
@property(nonatomic) struct CGPoint fromPoint; // @synthesize fromPoint=_fromPoint;
- (id)initWithFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 AndIsFullPath:(_Bool)arg3;

@end

