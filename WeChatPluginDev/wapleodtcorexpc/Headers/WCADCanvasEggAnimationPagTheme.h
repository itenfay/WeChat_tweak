//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCADCanvasEggAnimationPagTheme
{
    NSString *_simpleTransitionAnimationUrl;
    NSString *_simpleTransitionAnimationMD5;
    unsigned long long _animationDuration;
}

+ (id)fromAdInfo:(id)arg1;
+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) NSString *simpleTransitionAnimationMD5; // @synthesize simpleTransitionAnimationMD5=_simpleTransitionAnimationMD5;
@property(retain, nonatomic) NSString *simpleTransitionAnimationUrl; // @synthesize simpleTransitionAnimationUrl=_simpleTransitionAnimationUrl;
- (_Bool)isAnimationPagReady;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

