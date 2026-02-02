//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCADCanvasEggAnimationHugeDiskImproved
{
    NSString *_transitionImg;
    NSString *_transitionColor;
}

+ (id)fromAdInfo:(id)arg1;
+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *transitionColor; // @synthesize transitionColor=_transitionColor;
@property(retain, nonatomic) NSString *transitionImg; // @synthesize transitionImg=_transitionImg;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

