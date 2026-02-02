//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MMWebViewControllerShareData : NSObject
{
    NSString *_title;
    NSString *_desc;
    NSString *_imageUrl;
    NSString *_link;
    NSString *_appId;
    NSDictionary *_reportExtInfo;
    NSString *_fromScene;
    NSString *_floatBallTitle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *floatBallTitle; // @synthesize floatBallTitle=_floatBallTitle;
@property(copy, nonatomic) NSString *fromScene; // @synthesize fromScene=_fromScene;
@property(copy, nonatomic) NSDictionary *reportExtInfo; // @synthesize reportExtInfo=_reportExtInfo;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;

@end

