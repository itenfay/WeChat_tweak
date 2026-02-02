//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, NSURLQueryItem;

@interface MiaoJianShareParams : NSObject
{
    _Bool _isAutoExpandTemplate;
    int _exportedOpenWX;
    long long _launchType;
    long long _editTab;
    NSArray *_assetIdList;
    NSString *_templateId;
    NSString *_musicId;
    NSString *_miaojianExtInfo;
    NSString *_creationProjectStr;
    NSURLQueryItem *_queryItemForScene;
    NSURLQueryItem *_queryItemForLaunchType;
    NSURLQueryItem *_queryItemForEditTab;
    NSURLQueryItem *_queryItemForAssetIdList;
    NSURLQueryItem *_queryItemForIsAutoExpandTemplate;
    NSURLQueryItem *_queryItemForTemplateId;
    NSURLQueryItem *_queryItemForMusicId;
    NSURLQueryItem *_queryItemForMiaoJianExtInfo;
    NSURLQueryItem *_queryItemForCreationProjectStr;
    NSURLQueryItem *_queryItemForExportedOpenWX;
    NSMutableArray *_queryItemListForExtKV;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *queryItemListForExtKV; // @synthesize queryItemListForExtKV=_queryItemListForExtKV;
@property(retain, nonatomic) NSURLQueryItem *queryItemForExportedOpenWX; // @synthesize queryItemForExportedOpenWX=_queryItemForExportedOpenWX;
@property(retain, nonatomic) NSURLQueryItem *queryItemForCreationProjectStr; // @synthesize queryItemForCreationProjectStr=_queryItemForCreationProjectStr;
@property(retain, nonatomic) NSURLQueryItem *queryItemForMiaoJianExtInfo; // @synthesize queryItemForMiaoJianExtInfo=_queryItemForMiaoJianExtInfo;
@property(retain, nonatomic) NSURLQueryItem *queryItemForMusicId; // @synthesize queryItemForMusicId=_queryItemForMusicId;
@property(retain, nonatomic) NSURLQueryItem *queryItemForTemplateId; // @synthesize queryItemForTemplateId=_queryItemForTemplateId;
@property(retain, nonatomic) NSURLQueryItem *queryItemForIsAutoExpandTemplate; // @synthesize queryItemForIsAutoExpandTemplate=_queryItemForIsAutoExpandTemplate;
@property(retain, nonatomic) NSURLQueryItem *queryItemForAssetIdList; // @synthesize queryItemForAssetIdList=_queryItemForAssetIdList;
@property(retain, nonatomic) NSURLQueryItem *queryItemForEditTab; // @synthesize queryItemForEditTab=_queryItemForEditTab;
@property(retain, nonatomic) NSURLQueryItem *queryItemForLaunchType; // @synthesize queryItemForLaunchType=_queryItemForLaunchType;
@property(retain, nonatomic) NSURLQueryItem *queryItemForScene; // @synthesize queryItemForScene=_queryItemForScene;
@property(retain, nonatomic) NSString *creationProjectStr; // @synthesize creationProjectStr=_creationProjectStr;
@property(retain, nonatomic) NSString *miaojianExtInfo; // @synthesize miaojianExtInfo=_miaojianExtInfo;
@property(retain, nonatomic) NSString *musicId; // @synthesize musicId=_musicId;
@property(retain, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(retain, nonatomic) NSArray *assetIdList; // @synthesize assetIdList=_assetIdList;
@property(nonatomic) int exportedOpenWX; // @synthesize exportedOpenWX=_exportedOpenWX;
@property(nonatomic) _Bool isAutoExpandTemplate; // @synthesize isAutoExpandTemplate=_isAutoExpandTemplate;
@property(nonatomic) long long editTab; // @synthesize editTab=_editTab;
@property(readonly, nonatomic) long long launchType; // @synthesize launchType=_launchType;
- (id)description;
- (void)clearExtKV;
- (void)removeExtValuefromKey:(id)arg1;
- (void)addExtValue:(id)arg1 forKey:(id)arg2;
- (void)setLaunchType:(long long)arg1;
- (id)initWithLaunchType:(long long)arg1;

@end

