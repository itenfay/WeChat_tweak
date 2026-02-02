//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor, WCFinderRedDotTipsShowInfo;

@interface WCFinderHeadActionSheetItem : NSObject
{
    NSString *_title;
    NSString *_subTitle;
    UIColor *_subTitleColor;
    WCFinderRedDotTipsShowInfo *_showInfo;
    NSString *_cameraTemplateTitle;
    CDUnknownBlockType _clickBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(copy, nonatomic) NSString *cameraTemplateTitle; // @synthesize cameraTemplateTitle=_cameraTemplateTitle;
@property(retain, nonatomic) WCFinderRedDotTipsShowInfo *showInfo; // @synthesize showInfo=_showInfo;
@property(retain, nonatomic) UIColor *subTitleColor; // @synthesize subTitleColor=_subTitleColor;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

