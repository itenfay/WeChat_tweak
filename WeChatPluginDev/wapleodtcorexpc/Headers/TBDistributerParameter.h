//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TBDistributerParameter : NSObject
{
    _Bool _animated;
    _Bool _byGestured;
}

@property(nonatomic) _Bool byGestured; // @synthesize byGestured=_byGestured;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
- (id)init;
- (void)reset;
- (void)updateAnimated:(_Bool)arg1 byGestured:(_Bool)arg2;

@end

