//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AppMsgShareItem, NSString;

@interface MMWebViewMinimizationData
{
    unsigned int _getA8KeyScene;
    NSString *_webViewUrl;
    NSString *_iconUrl;
    NSString *_publisherUserName;
    NSString *_publisherNickName;
    NSString *_strWebExtInfo;
    NSString *_webViewFullUrl;
    AppMsgShareItem *_webShareItem;
}

+ (void)initialize;
+ (void)PBArrayAdd_webShareItem;
+ (void)PBArrayAdd_webViewFullUrl;
+ (void)PBArrayAdd_strWebExtInfo;
+ (void)PBArrayAdd_getA8KeyScene;
+ (void)PBArrayAdd_publisherNickName;
+ (void)PBArrayAdd_publisherUserName;
+ (void)PBArrayAdd_iconUrl;
+ (void)PBArrayAdd_webViewUrl;
- (void).cxx_destruct;
@property(retain, nonatomic) AppMsgShareItem *webShareItem; // @synthesize webShareItem=_webShareItem;
@property(copy, nonatomic) NSString *webViewFullUrl; // @synthesize webViewFullUrl=_webViewFullUrl;
@property(retain, nonatomic) NSString *strWebExtInfo; // @synthesize strWebExtInfo=_strWebExtInfo;
@property(nonatomic) unsigned int getA8KeyScene; // @synthesize getA8KeyScene=_getA8KeyScene;
@property(copy, nonatomic) NSString *publisherNickName; // @synthesize publisherNickName=_publisherNickName;
@property(copy, nonatomic) NSString *publisherUserName; // @synthesize publisherUserName=_publisherUserName;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *webViewUrl; // @synthesize webViewUrl=_webViewUrl;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

