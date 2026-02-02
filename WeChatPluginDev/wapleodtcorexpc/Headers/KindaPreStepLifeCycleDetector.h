//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUseCase;

@interface KindaPreStepLifeCycleDetector : NSObject
{
    MMUseCase *_usecase;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUseCase *usecase; // @synthesize usecase=_usecase;
- (void)dealloc;

@end

