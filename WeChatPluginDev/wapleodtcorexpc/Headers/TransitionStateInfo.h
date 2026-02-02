//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface TransitionStateInfo : NSObject
{
    long long _transitionState;
    NSDictionary *_extraInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(nonatomic) long long transitionState; // @synthesize transitionState=_transitionState;

@end

