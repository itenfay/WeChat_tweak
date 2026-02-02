//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, WCCanvasRandomLayoutEncoreInfo, WCCanvasRandomLayoutEncorePickInfo, WCCanvasRandomLayoutTransitionAnimationInfo;

@interface WCCanvasRandomLayoutInfo
{
    unsigned int _cornerRadius;
    NSArray *_layoutItems;
    NSString *_hugeDiskTransitionImg;
    NSString *_hugeDiskTransitionColor;
    double _hugeDiskTransitionColorAlpha;
    NSArray *_transitionImgs;
    WCCanvasRandomLayoutTransitionAnimationInfo *_transitionAnimationInfo;
    WCCanvasRandomLayoutEncoreInfo *_encoreInfo;
    WCCanvasRandomLayoutEncorePickInfo *_randomEncorePickInfo;
    NSString *_theChosenRandomCardId;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1 withSizeType:(long long)arg2 basicWidth:(int)arg3 basicRootFontSize:(int)arg4 widthRoundingType:(long long)arg5 heightRoundingType:(long long)arg6;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *theChosenRandomCardId; // @synthesize theChosenRandomCardId=_theChosenRandomCardId;
@property(retain, nonatomic) WCCanvasRandomLayoutEncorePickInfo *randomEncorePickInfo; // @synthesize randomEncorePickInfo=_randomEncorePickInfo;
@property(retain, nonatomic) WCCanvasRandomLayoutEncoreInfo *encoreInfo; // @synthesize encoreInfo=_encoreInfo;
@property(retain, nonatomic) WCCanvasRandomLayoutTransitionAnimationInfo *transitionAnimationInfo; // @synthesize transitionAnimationInfo=_transitionAnimationInfo;
@property(retain, nonatomic) NSArray *transitionImgs; // @synthesize transitionImgs=_transitionImgs;
@property(nonatomic) double hugeDiskTransitionColorAlpha; // @synthesize hugeDiskTransitionColorAlpha=_hugeDiskTransitionColorAlpha;
@property(retain, nonatomic) NSString *hugeDiskTransitionColor; // @synthesize hugeDiskTransitionColor=_hugeDiskTransitionColor;
@property(retain, nonatomic) NSString *hugeDiskTransitionImg; // @synthesize hugeDiskTransitionImg=_hugeDiskTransitionImg;
@property(nonatomic) unsigned int cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) NSArray *layoutItems; // @synthesize layoutItems=_layoutItems;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

