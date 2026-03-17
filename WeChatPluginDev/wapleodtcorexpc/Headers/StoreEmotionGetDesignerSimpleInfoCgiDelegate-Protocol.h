//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, PersonalDesigner;

@protocol StoreEmotionGetDesignerSimpleInfoCgiDelegate <NSObject>

@optional
- (void)onGetDesignerSimpleInfoCgiFailedWithDesignerId:(NSString *)arg1;
- (void)onGetDesignerSimpleInfoCgiOkWithDesignerId:(NSString *)arg1 previewEmotion:(NSArray *)arg2 previewEmoji:(NSArray *)arg3;
- (void)onGetDesignerSimpleInfoCgiOkWithDesignerId:(NSString *)arg1 PersonalDesigner:(PersonalDesigner *)arg2;
@end

