//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MJTileReusableAttributes : NSObject
{
    struct CGRect _frame;
    CDStruct_e83c9415 _timeRange;
}

@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithTimeRange:(CDStruct_e83c9415)arg1 frame:(struct CGRect)arg2;

@end

