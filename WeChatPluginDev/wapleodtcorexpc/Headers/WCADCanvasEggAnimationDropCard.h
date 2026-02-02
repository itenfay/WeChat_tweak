//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface WCADCanvasEggAnimationDropCard
{
    NSArray *_transitionImgs;
    NSString *_transitionAnimationUrl;
    NSString *_transitionAnimationMd5;
}

+ (id)fromAdInfo:(id)arg1;
+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *transitionAnimationMd5; // @synthesize transitionAnimationMd5=_transitionAnimationMd5;
@property(retain, nonatomic) NSString *transitionAnimationUrl; // @synthesize transitionAnimationUrl=_transitionAnimationUrl;
@property(retain, nonatomic) NSArray *transitionImgs; // @synthesize transitionImgs=_transitionImgs;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

