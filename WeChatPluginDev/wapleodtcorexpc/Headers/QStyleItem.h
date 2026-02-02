//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface QStyleItem : NSObject
{
    long long _styleID;
    long long _index;
    long long _order;
}

@property(readonly, nonatomic) long long order; // @synthesize order=_order;
@property(readonly, nonatomic) long long index; // @synthesize index=_index;
@property(readonly, nonatomic) long long styleID; // @synthesize styleID=_styleID;
- (id)toJSON;
- (id)initWithJSON:(id)arg1;

@end

