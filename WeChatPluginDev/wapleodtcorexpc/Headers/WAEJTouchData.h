//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAEJTouchData : NSObject
{
    NSString *_identifier;
    struct CGPoint _pos;
}

@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) struct CGPoint pos; // @synthesize pos=_pos;
- (id)initPos:(struct CGPoint)arg1 withIdentifier:(id)arg2;

@end

