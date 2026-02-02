//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCMomentMiaoJianUtil : NSObject
{
}

+ (id)_decodeFromBase64UrlStr:(id)arg1;
+ (id)_decodeFromBase64String:(id)arg1;
+ (id)_encodeToBase64WithUrlStr:(id)arg1;
+ (id)_encodeToBase64WithString:(id)arg1;
+ (id)_safeReportStringWithString:(id)arg1;
+ (id)_generateJSONStringWithObject:(id)arg1 replacingForReport:(_Bool)arg2;
+ (unsigned long long)cleanMJDir;
+ (id)getWCMomentsMJDir;
+ (id)filePathFromMJDirOfFileName:(id)arg1;
+ (_Bool)removeFileFromMJDirByFileName:(id)arg1;
+ (id)saveImageToMJDir:(id)arg1;
+ (id)generateUrlSafeJsonBase64FromObject:(id)arg1;
+ (id)generateJsonBase64FromObject:(id)arg1;
+ (id)omjMusicInfoFromSelectedMusicData:(id)arg1;
+ (id)omjMusicInfoFromSprMiaoJianBgmSearchMusicItem:(id)arg1;
+ (id)songInfoFromMusicInfo:(id)arg1;
+ (id)lyricsFromMusicInfo:(id)arg1;
+ (id)parseMiaoJianExtInfo:(id)arg1;
+ (_Bool)isAppInfoForMiaoJian:(id)arg1;
+ (_Bool)isDataItemOfMiaoJianVideo:(id)arg1;
+ (_Bool)clearMiaoJianMetaForUploadTask:(id)arg1;
+ (id)parseMiaoJianMessageExtForUploadTask:(id)arg1;
+ (_Bool)injectMiaoJianMetaForUploadTask:(id)arg1 fromSightDraft:(id)arg2;

@end

