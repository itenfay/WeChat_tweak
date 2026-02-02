//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSBlockOperation.h>

@class CRDelay;

@interface CRDelayOperation : NSBlockOperation
{
    CRDelay *_delay;
}

+ (id)operationWithDelayInSeconds:(double)arg1;
+ (id)operationWithDelay:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) CRDelay *delay; // @synthesize delay=_delay;
@property(readonly, nonatomic) double seconds;
- (void)cancel;
- (id)initWithDelay:(id)arg1;

@end

