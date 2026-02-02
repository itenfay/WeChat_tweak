//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MinimizeTaskContainerMoveContext : NSObject
{
    unsigned long long _moveBeginTime;
    struct CGPoint _fromPoint;
}

@property(nonatomic) struct CGPoint fromPoint; // @synthesize fromPoint=_fromPoint;
@property(nonatomic) unsigned long long moveBeginTime; // @synthesize moveBeginTime=_moveBeginTime;

@end

