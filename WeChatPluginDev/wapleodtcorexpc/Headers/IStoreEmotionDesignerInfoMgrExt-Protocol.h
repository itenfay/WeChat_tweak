//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EmotionActivity, EmotionLink, NSArray, NSString, PersonalDesigner;

@protocol IStoreEmotionDesignerInfoMgrExt <NSObject>

@optional
- (void)onGetEmotionActivityForActivityId:(NSString *)arg1 md5:(NSString *)arg2 linkId:(NSString *)arg3 activity:(EmotionActivity *)arg4 link:(EmotionLink *)arg5;
- (void)onDesignerInfoUpdated:(PersonalDesigner *)arg1;
- (void)onGetDesignerForDesignerUin:(unsigned int)arg1 AndDesigner:(PersonalDesigner *)arg2;
- (void)onGetDesignerPreviewForDesignerId:(NSString *)arg1 andPreviewEmotions:(NSArray *)arg2 previewEmojis:(NSArray *)arg3;
- (void)onGetDesignerForDesignerId:(NSString *)arg1 AndDesigner:(PersonalDesigner *)arg2;
@end

