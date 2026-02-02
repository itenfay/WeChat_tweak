//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WAAppBrandNotifyChatToolItem : NSObject
{
    NSString *_desc;
    NSString *_entryPagePath;
    NSString *_root;
    NSArray *_scopes;
    NSArray *_supportedMaterials;
}

+ (void)initialize;
+ (void)PBArrayAdd_supportedMaterials;
+ (void)PBArrayAdd_scopes;
+ (void)PBArrayAdd_root;
+ (void)PBArrayAdd_entryPagePath;
+ (void)PBArrayAdd_desc;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *supportedMaterials; // @synthesize supportedMaterials=_supportedMaterials;
@property(retain, nonatomic) NSArray *scopes; // @synthesize scopes=_scopes;
@property(retain, nonatomic) NSString *root; // @synthesize root=_root;
@property(retain, nonatomic) NSString *entryPagePath; // @synthesize entryPagePath=_entryPagePath;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

