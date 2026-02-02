//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TagCtrlInfo;

@interface WCTopicOpenParams : NSObject
{
    _Bool _openWeAppWithoutAlert;
    int _finderReportScene;
    unsigned int _finderEnterType;
    int _bizAddContactScene;
    unsigned long long _scene;
    NSString *_query;
    long long _shareScene;
    NSString *_shareSceneId;
    long long _shareCreateTime;
    long long _enterSource;
    NSString *_talkerUsername;
    NSString *_senderUsername;
    CDUnknownBlockType _customWeAppItemBlock;
    CDUnknownBlockType _weAppDidOpenBlock;
    CDUnknownBlockType _h5DidOpenBlock;
    TagCtrlInfo *_tagCtrlInfo;
    CDUnknownBlockType _webViewDidOpenBlock;
    unsigned long long _finderEnterScene;
    unsigned long long _finderCardType;
    CDUnknownBlockType _finderDidOpenBlock;
    CDUnknownBlockType _bizDidOpenBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType bizDidOpenBlock; // @synthesize bizDidOpenBlock=_bizDidOpenBlock;
@property(nonatomic) int bizAddContactScene; // @synthesize bizAddContactScene=_bizAddContactScene;
@property(copy, nonatomic) CDUnknownBlockType finderDidOpenBlock; // @synthesize finderDidOpenBlock=_finderDidOpenBlock;
@property(nonatomic) unsigned int finderEnterType; // @synthesize finderEnterType=_finderEnterType;
@property(nonatomic) int finderReportScene; // @synthesize finderReportScene=_finderReportScene;
@property(nonatomic) unsigned long long finderCardType; // @synthesize finderCardType=_finderCardType;
@property(nonatomic) unsigned long long finderEnterScene; // @synthesize finderEnterScene=_finderEnterScene;
@property(copy, nonatomic) CDUnknownBlockType webViewDidOpenBlock; // @synthesize webViewDidOpenBlock=_webViewDidOpenBlock;
@property(retain, nonatomic) TagCtrlInfo *tagCtrlInfo; // @synthesize tagCtrlInfo=_tagCtrlInfo;
@property(nonatomic) _Bool openWeAppWithoutAlert; // @synthesize openWeAppWithoutAlert=_openWeAppWithoutAlert;
@property(copy, nonatomic) CDUnknownBlockType h5DidOpenBlock; // @synthesize h5DidOpenBlock=_h5DidOpenBlock;
@property(copy, nonatomic) CDUnknownBlockType weAppDidOpenBlock; // @synthesize weAppDidOpenBlock=_weAppDidOpenBlock;
@property(copy, nonatomic) CDUnknownBlockType customWeAppItemBlock; // @synthesize customWeAppItemBlock=_customWeAppItemBlock;
@property(copy, nonatomic) NSString *senderUsername; // @synthesize senderUsername=_senderUsername;
@property(copy, nonatomic) NSString *talkerUsername; // @synthesize talkerUsername=_talkerUsername;
@property(nonatomic) long long enterSource; // @synthesize enterSource=_enterSource;
@property(nonatomic) long long shareCreateTime; // @synthesize shareCreateTime=_shareCreateTime;
@property(retain, nonatomic) NSString *shareSceneId; // @synthesize shareSceneId=_shareSceneId;
@property(nonatomic) long long shareScene; // @synthesize shareScene=_shareScene;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;

@end

