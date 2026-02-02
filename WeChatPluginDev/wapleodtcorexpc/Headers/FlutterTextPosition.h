//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITextPosition.h>

@interface FlutterTextPosition : UITextPosition
{
    unsigned long long _index;
    long long _affinity;
}

+ (id)positionWithIndex:(unsigned long long)arg1 affinity:(long long)arg2;
+ (id)positionWithIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) long long affinity; // @synthesize affinity=_affinity;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
- (id)initWithIndex:(unsigned long long)arg1 affinity:(long long)arg2;

@end

