//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CLLocation;

@interface TencentLBSPoint : NSObject
{
    CLLocation *_loc;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CLLocation *loc; // @synthesize loc=_loc;
- (id)initWithTencentLBSLocation:(id)arg1;
- (_Bool)isReachable:(id)arg1;

@end

