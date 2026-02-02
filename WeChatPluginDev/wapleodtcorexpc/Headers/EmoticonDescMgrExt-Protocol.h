//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmotionLinkInfo, NSArray, NSString;

@protocol EmoticonDescMgrExt

@optional
- (void)onGetEmoticonDescLink:(EmotionLinkInfo *)arg1 pid:(NSString *)arg2;
- (void)onGetEmoticonActivityInfo:(NSString *)arg1 isActivity:(_Bool)arg2;
- (void)onGetEmoticonDescNoResult:(NSString *)arg1;
- (void)onGetEmoticonDesc:(NSString *)arg1 emoticonWrapList:(NSArray *)arg2;
- (void)onGetEmoticonClickFlag:(unsigned int)arg1 downloadFlag:(unsigned int)arg2 pid:(NSString *)arg3;
- (void)onGetEmoticonDesc:(NSString *)arg1 descList:(NSArray *)arg2;
@end

