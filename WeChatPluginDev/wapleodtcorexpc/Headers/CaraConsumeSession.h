//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface CaraConsumeSession : NSObject
{
    float _stayTimeInterval;
    NSString *_username;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) float stayTimeInterval; // @synthesize stayTimeInterval=_stayTimeInterval;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
- (id)zidl;
- (id)initWithContact:(id)arg1 stayTimeInterval:(float)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

