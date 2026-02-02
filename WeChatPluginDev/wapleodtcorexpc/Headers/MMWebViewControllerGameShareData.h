//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GameShareDataImageModel, GameShareDataTailInfo, NSDictionary, NSString;

@interface MMWebViewControllerGameShareData : NSObject
{
    _Bool _needUploadFirst;
    int _shareType;
    NSString *_title;
    NSString *_desc;
    NSString *_imageUrl;
    NSString *_link;
    NSString *_appId;
    NSDictionary *_reportExtInfo;
    NSString *_fromScene;
    NSString *_floatBallTitle;
    NSString *_videoId;
    GameShareDataTailInfo *_tailInfo;
    GameShareDataImageModel *_imageModel;
}

- (void).cxx_destruct;
@property(nonatomic) int shareType; // @synthesize shareType=_shareType;
@property(retain, nonatomic) GameShareDataImageModel *imageModel; // @synthesize imageModel=_imageModel;
@property(retain, nonatomic) GameShareDataTailInfo *tailInfo; // @synthesize tailInfo=_tailInfo;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(nonatomic) _Bool needUploadFirst; // @synthesize needUploadFirst=_needUploadFirst;
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

