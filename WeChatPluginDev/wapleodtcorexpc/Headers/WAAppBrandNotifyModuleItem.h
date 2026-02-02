//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface WAAppBrandNotifyModuleItem : NSObject
{
    _Bool _independent;
    NSString *_name;
    NSString *_md5;
    NSArray *_aliasList;
    NSString *_withoutLibMd5;
    NSMutableArray *_arrPluginCodeInfo;
    NSString *_debugUrl;
    NSMutableArray *_arrWidgetInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_arrWidgetInfo;
+ (void)PBArrayAdd_debugUrl;
+ (void)PBArrayAdd_arrPluginCodeInfo;
+ (void)PBArrayAdd_withoutLibMd5;
+ (void)PBArrayAdd_aliasList;
+ (void)PBArrayAdd_independent;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_name;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrWidgetInfo; // @synthesize arrWidgetInfo=_arrWidgetInfo;
@property(retain, nonatomic) NSString *debugUrl; // @synthesize debugUrl=_debugUrl;
@property(retain, nonatomic) NSMutableArray *arrPluginCodeInfo; // @synthesize arrPluginCodeInfo=_arrPluginCodeInfo;
@property(retain, nonatomic) NSString *withoutLibMd5; // @synthesize withoutLibMd5=_withoutLibMd5;
@property(retain, nonatomic) NSArray *aliasList; // @synthesize aliasList=_aliasList;
@property(nonatomic) _Bool independent; // @synthesize independent=_independent;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

