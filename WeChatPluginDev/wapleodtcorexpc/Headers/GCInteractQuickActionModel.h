//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface GCInteractQuickActionModel : NSObject
{
    NSString *_svgImgStr;
    NSString *_title;
    CDUnknownBlockType _touchBlock;
    UIColor *_textColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) CDUnknownBlockType touchBlock; // @synthesize touchBlock=_touchBlock;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *svgImgStr; // @synthesize svgImgStr=_svgImgStr;

@end

