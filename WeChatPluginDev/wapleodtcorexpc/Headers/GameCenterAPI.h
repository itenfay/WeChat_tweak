//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface GameCenterAPI : NSObject
{
}

+ (int)openGameMsgCenter:(id)arg1 extInfo:(id)arg2;
+ (int)openGameDetail:(id)arg1 extInfo:(id)arg2 retErrorMsg:(id *)arg3;
+ (int)openGameLibrary:(id)arg1;
+ (int)openMainPage:(id)arg1;
+ (_Bool)openGameCenterView:(id)arg1 openType:(int)arg2 extInfo:(id)arg3 retErrorMsg:(id *)arg4;
+ (_Bool)openGameTabHome:(id)arg1 withExtra:(id)arg2 withVC:(id)arg3 retErrorMsg:(id *)arg4;
+ (id)getGameTabBarVcWithParams:(id)arg1 extra:(id)arg2 onCloseBlock:(CDUnknownBlockType)arg3;

@end

