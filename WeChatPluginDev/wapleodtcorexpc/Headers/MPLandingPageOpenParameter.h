//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MPVideoPageOpenParameter, NSDate, NSString, UIImage, UINavigationController;

@interface MPLandingPageOpenParameter
{
    unsigned int _itemShowType;
    unsigned int _scene;
    unsigned int _subscene;
    unsigned int _funcFlag;
    unsigned int _getA8KeyScene;
    unsigned int _fromVCType;
    NSString *_url;
    NSString *_bizUserName;
    NSString *_bizNickname;
    NSString *_title;
    NSString *_digest;
    NSDate *_pubTime;
    NSString *_sessionId;
    UIImage *_thumbImage;
    NSString *_thumbUrl;
    unsigned long long _commentTopicId;
    NSString *_channelSessionId;
    MPVideoPageOpenParameter *_videoParam;
    UINavigationController *_preRenderNavigationController;
    NSString *_minimizationOpenBizKey;
    struct CGRect _thumbOriginRect;
}

+ (void)initialize;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_videoParam;
+ (void)PBArrayAdd_commentTopicId;
+ (void)PBArrayAdd_fromVCType;
+ (void)PBArrayAdd_getA8KeyScene;
+ (void)PBArrayAdd_funcFlag;
+ (void)PBArrayAdd_sessionId;
+ (void)PBArrayAdd_subscene;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_itemShowType;
+ (void)PBArrayAdd_pubTime;
+ (void)PBArrayAdd_digest;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_bizNickname;
+ (void)PBArrayAdd_bizUserName;
+ (void)PBArrayAdd_url;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *minimizationOpenBizKey; // @synthesize minimizationOpenBizKey=_minimizationOpenBizKey;
@property(nonatomic) __weak UINavigationController *preRenderNavigationController; // @synthesize preRenderNavigationController=_preRenderNavigationController;
@property(retain, nonatomic) MPVideoPageOpenParameter *videoParam; // @synthesize videoParam=_videoParam;
@property(copy, nonatomic) NSString *channelSessionId; // @synthesize channelSessionId=_channelSessionId;
@property(nonatomic) unsigned long long commentTopicId; // @synthesize commentTopicId=_commentTopicId;
@property(nonatomic) unsigned int fromVCType; // @synthesize fromVCType=_fromVCType;
@property(nonatomic) unsigned int getA8KeyScene; // @synthesize getA8KeyScene=_getA8KeyScene;
@property(nonatomic) unsigned int funcFlag; // @synthesize funcFlag=_funcFlag;
@property(copy, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(nonatomic) struct CGRect thumbOriginRect; // @synthesize thumbOriginRect=_thumbOriginRect;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned int subscene; // @synthesize subscene=_subscene;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned int itemShowType; // @synthesize itemShowType=_itemShowType;
@property(retain, nonatomic) NSDate *pubTime; // @synthesize pubTime=_pubTime;
@property(copy, nonatomic) NSString *digest; // @synthesize digest=_digest;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *bizNickname; // @synthesize bizNickname=_bizNickname;
@property(copy, nonatomic) NSString *bizUserName; // @synthesize bizUserName=_bizUserName;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

