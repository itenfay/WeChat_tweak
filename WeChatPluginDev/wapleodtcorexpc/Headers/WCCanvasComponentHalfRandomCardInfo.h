//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, WCCanvasComponentHalfRandomCardRotateAnimInfo;

@interface WCCanvasComponentHalfRandomCardInfo
{
    WCCanvasComponentHalfRandomCardRotateAnimInfo *_rotateAnimInfo;
    NSArray *_items;
    NSString *_backgroundImg;
    double _backgroundImgWidth;
    double _backgroundImgHeight;
    NSString *_bulletCommentsTitle;
    NSArray *_positiveBulletComments;
    NSArray *_negativeBulletComments;
    NSString *_theChosenRandomCardId;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1 withSizeType:(long long)arg2 basicWidth:(int)arg3 basicRootFontSize:(int)arg4 widthRoundingType:(long long)arg5 heightRoundingType:(long long)arg6;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *theChosenRandomCardId; // @synthesize theChosenRandomCardId=_theChosenRandomCardId;
@property(retain, nonatomic) NSArray *negativeBulletComments; // @synthesize negativeBulletComments=_negativeBulletComments;
@property(retain, nonatomic) NSArray *positiveBulletComments; // @synthesize positiveBulletComments=_positiveBulletComments;
@property(retain, nonatomic) NSString *bulletCommentsTitle; // @synthesize bulletCommentsTitle=_bulletCommentsTitle;
@property(nonatomic) double backgroundImgHeight; // @synthesize backgroundImgHeight=_backgroundImgHeight;
@property(nonatomic) double backgroundImgWidth; // @synthesize backgroundImgWidth=_backgroundImgWidth;
@property(retain, nonatomic) NSString *backgroundImg; // @synthesize backgroundImg=_backgroundImg;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) WCCanvasComponentHalfRandomCardRotateAnimInfo *rotateAnimInfo; // @synthesize rotateAnimInfo=_rotateAnimInfo;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

