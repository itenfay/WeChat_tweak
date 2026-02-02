//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface QLogoSourceSelector : NSObject
{
    NSMutableDictionary *_logoSourceDict;
    NSMutableDictionary *_logoImageDict;
    NSMutableDictionary *_downloadingList;
}

+ (id)instance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *downloadingList; // @synthesize downloadingList=_downloadingList;
@property(retain, nonatomic) NSMutableDictionary *logoImageDict; // @synthesize logoImageDict=_logoImageDict;
@property(retain, nonatomic) NSMutableDictionary *logoSourceDict; // @synthesize logoSourceDict=_logoSourceDict;
- (id)init;
- (void)setLocalLogoResourceDictWithIsBing:(_Bool)arg1;
- (void)updateLogoSourceFile:(id)arg1 isBing:(_Bool)arg2;
- (id)readLocalLogoSourceFileWithIsBing:(_Bool)arg1;
- (id)getLogoSourceFilePathWithIsBing:(_Bool)arg1;
- (void)downloadLogo:(id)arg1 withURL:(id)arg2;
- (void)clearLogoImageCache;
- (id)readLocalLogoImage:(id)arg1;
- (id)getLogoImagePath:(id)arg1;
- (id)getLogoImageBasePath;
- (id)resolveLogoSourceDict:(id)arg1;
- (id)getQLogoWithMapStatus:(id)arg1 isBing:(_Bool)arg2;
- (_Bool)validateCustomLogoImageReplace:(id)arg1;
- (id)getLogoWithMapStatus:(id)arg1 forBingSource:(_Bool)arg2 orSource:(id)arg3;
- (_Bool)hasLocalConfigWithIsBing:(_Bool)arg1;

@end

