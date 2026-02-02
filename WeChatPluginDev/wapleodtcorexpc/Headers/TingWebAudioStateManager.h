//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TingWebAudioStateManager : NSObject
{
}

+ (void)playCategory:(id)arg1 itemList:(id)arg2 index:(unsigned long long)arg3 deleteAfterLsiten:(_Bool)arg4 launchOptions:(id)arg5;
+ (id)tingItemFromPlayableInfo:(id)arg1;
+ (_Bool)isValidCategory:(id)arg1;
+ (id)webItemFromTingItem:(id)arg1;
+ (id)tingItemFromWebItem:(id)arg1;
+ (id)isValidTingItem:(id)arg1;
+ (id)opRefreshPlayListWithInfoAndReturnErrmsg:(id)arg1;
+ (id)opSetVituralPlayerForegroundState:(id)arg1;
+ (id)opSetShutDownWithInfoAndReturnErrmsg:(id)arg1;
+ (id)onAudioStateChanged:(id)arg1 tingItem:(id)arg2 status:(int)arg3;
+ (id)operateAudio:(id)arg1 info:(id)arg2;
+ (id)getAudioState:(id)arg1;
+ (id)audioStateInfo:(id)arg1 tingItem:(id)arg2 status:(int)arg3;
+ (id)setAudioState:(id)arg1 info:(id)arg2 scene:(int)arg3;
+ (id)endWithCode:(long long)arg1 func:(id)arg2 desc:(id)arg3;
+ (id)endSuccessfully:(id)arg1 result:(id)arg2;
+ (id)endSuccessfully:(id)arg1;

@end

