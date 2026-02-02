//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSJumpLiteappInfo, MMLiteAppInfoItem, NSMutableDictionary, NSString, UIViewController;

@interface TextState3rdPartyLiteAppHandler
{
    _Bool _syncCheckUpdate;
    _Bool _isHalfScreen;
    _Bool _isTransparent;
    _Bool _isOpenWithNewTab;
    _Bool _isRedirect;
    _Bool _isForbidRightGesture;
    float _heightPercent;
    JSJumpLiteappInfo *_jumpInfo;
    NSMutableDictionary *_resultParam;
    MMLiteAppInfoItem *_appInfo;
    NSString *_page;
    NSString *_query;
    NSString *_appId;
    NSString *_enterType;
    double _delayTime;
    UIViewController *_contextViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *contextViewController; // @synthesize contextViewController=_contextViewController;
@property(nonatomic) double delayTime; // @synthesize delayTime=_delayTime;
@property(nonatomic) _Bool isForbidRightGesture; // @synthesize isForbidRightGesture=_isForbidRightGesture;
@property(nonatomic) _Bool isRedirect; // @synthesize isRedirect=_isRedirect;
@property(nonatomic) _Bool isOpenWithNewTab; // @synthesize isOpenWithNewTab=_isOpenWithNewTab;
@property(nonatomic) _Bool isTransparent; // @synthesize isTransparent=_isTransparent;
@property(nonatomic) float heightPercent; // @synthesize heightPercent=_heightPercent;
@property(nonatomic) _Bool isHalfScreen; // @synthesize isHalfScreen=_isHalfScreen;
@property(retain, nonatomic) NSString *enterType; // @synthesize enterType=_enterType;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) NSString *page; // @synthesize page=_page;
@property(retain, nonatomic) MMLiteAppInfoItem *appInfo; // @synthesize appInfo=_appInfo;
@property(retain, nonatomic) NSMutableDictionary *resultParam; // @synthesize resultParam=_resultParam;
@property(nonatomic) _Bool syncCheckUpdate; // @synthesize syncCheckUpdate=_syncCheckUpdate;
@property(retain, nonatomic) JSJumpLiteappInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
- (void)onLiteAppUpdateFinish:(unsigned long long)arg1 appId:(id)arg2 appInfo:(id)arg3;
- (_Bool)doSourceActionWithViewController:(id)arg1 scene:(unsigned int)arg2;
- (unsigned int)type;
- (id)initWithBuffer:(id)arg1 keyBuffer:(id)arg2;

@end

