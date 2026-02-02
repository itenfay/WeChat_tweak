//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSMutableSet, NSString;

@interface FavWebCacheDownloadFileInfo
{
    NSMutableSet *_mediaFiles;
    NSMutableSet *_textFiles;
    NSMutableDictionary *_mimeTypeDic;
}

+ (void)initialize;
+ (void)PBArrayAdd_mimeTypeDic;
+ (void)PBArrayAdd_textFiles;
+ (void)PBArrayAdd_mediaFiles;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *mimeTypeDic; // @synthesize mimeTypeDic=_mimeTypeDic;
@property(retain, nonatomic) NSMutableSet *textFiles; // @synthesize textFiles=_textFiles;
@property(retain, nonatomic) NSMutableSet *mediaFiles; // @synthesize mediaFiles=_mediaFiles;
- (id)getPBPropertyTable;
- (void)removeObject:(id)arg1;
- (long long)count;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

