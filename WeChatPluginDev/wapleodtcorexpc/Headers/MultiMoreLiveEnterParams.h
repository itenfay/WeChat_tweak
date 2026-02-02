//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MultiMoreLiveEnterParams : NSObject
{
    _Bool _useDarkStyle;
    int _commentScene;
    long long _scene;
    unsigned long long _selectTabId;
    unsigned long long _selectSubTabId;
    NSString *_byPassInfo;
    unsigned long long _entryScene;
    NSString *_title;
    NSString *_feedExportId;
    NSString *_feedNonceId;
    NSString *_appId;
    unsigned long long _versionType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long versionType; // @synthesize versionType=_versionType;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *feedNonceId; // @synthesize feedNonceId=_feedNonceId;
@property(retain, nonatomic) NSString *feedExportId; // @synthesize feedExportId=_feedExportId;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long entryScene; // @synthesize entryScene=_entryScene;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) NSString *byPassInfo; // @synthesize byPassInfo=_byPassInfo;
@property(nonatomic) unsigned long long selectSubTabId; // @synthesize selectSubTabId=_selectSubTabId;
@property(nonatomic) unsigned long long selectTabId; // @synthesize selectTabId=_selectTabId;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool useDarkStyle; // @synthesize useDarkStyle=_useDarkStyle;
- (id)description;

@end

