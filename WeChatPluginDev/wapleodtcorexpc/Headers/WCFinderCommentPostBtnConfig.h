//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface WCFinderCommentPostBtnConfig : NSObject
{
    NSString *_title;
    NSString *_iconUrl;
    NSString *_svgName;
    UIColor *_svgColor;
    UIColor *_bgColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(retain, nonatomic) UIColor *svgColor; // @synthesize svgColor=_svgColor;
@property(retain, nonatomic) NSString *svgName; // @synthesize svgName=_svgName;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)init;

@end

