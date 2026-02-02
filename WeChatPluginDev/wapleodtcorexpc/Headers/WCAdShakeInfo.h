//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCAdInteractionCoverInfo;

@interface WCAdShakeInfo : NSObject
{
    WCAdInteractionCoverInfo *_coverInfo;
    double _triggerGForce;
    NSString *_simpleTransitionAnimationUrl;
    NSString *_simpleTransitionAnimationMD5;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *simpleTransitionAnimationMD5; // @synthesize simpleTransitionAnimationMD5=_simpleTransitionAnimationMD5;
@property(retain, nonatomic) NSString *simpleTransitionAnimationUrl; // @synthesize simpleTransitionAnimationUrl=_simpleTransitionAnimationUrl;
@property(nonatomic) double triggerGForce; // @synthesize triggerGForce=_triggerGForce;
@property(retain, nonatomic) WCAdInteractionCoverInfo *coverInfo; // @synthesize coverInfo=_coverInfo;
- (_Bool)isSimpleAnimationInfoValid;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

