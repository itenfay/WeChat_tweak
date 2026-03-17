//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString, NSURL, UIImage, UINavigationController;

@protocol IWAMediaService <NSObject>
+ (void)jumpToGameRecordShare:(NSString *)arg1 withWidth:(unsigned int)arg2 withHeight:(unsigned int)arg3 withAppName:(NSString *)arg4 withAppId:(NSString *)arg5 withExtConfigJson:(NSString *)arg6 withShareOptions:(NSArray *)arg7 withShareTitle:(NSString *)arg8 withShareDesc:(NSString *)arg9 withAppVersion:(unsigned int)arg10 withAppState:(unsigned int)arg11 withIsDevEdited:(_Bool)arg12 withController:(UINavigationController *)arg13 callbck:(void (^)(NSDictionary *))arg14;
+ (NSMutableDictionary *)addTmpResource:(NSString *)arg1 filePath:(NSString *)arg2 thumbImage:(UIImage *)arg3;
+ (void)showEditPanel:(NSString *)arg1 parmas:(NSDictionary *)arg2 filePath:(NSString *)arg3 thumbImage:(UIImage *)arg4 controller:(UINavigationController *)arg5 callback:(void (^)(int, NSString *, NSMutableDictionary *))arg6;
+ (NSString *)formatHaoWanUrl:(NSString *)arg1 videoPath:(NSString *)arg2 fileSize:(unsigned int)arg3 thumbImage:(UIImage *)arg4;
+ (unsigned int)getVideoDuration:(NSURL *)arg1;
@end

