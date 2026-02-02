//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCCanvasRandomLayoutTransitionImgInfo
{
    NSString *_transitionImgUrl;
    NSString *_transitionColor;
    double _transitionColorAlpha;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(nonatomic) double transitionColorAlpha; // @synthesize transitionColorAlpha=_transitionColorAlpha;
@property(retain, nonatomic) NSString *transitionColor; // @synthesize transitionColor=_transitionColor;
@property(retain, nonatomic) NSString *transitionImgUrl; // @synthesize transitionImgUrl=_transitionImgUrl;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

