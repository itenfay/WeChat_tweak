//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface VOIPSettingUtil : NSObject
{
}

+ (_Bool)changeVoipMicToRemoteIO;
+ (long long)FrontMicCheckAndSetConfig:(int)arg1 enbleConfig:(int)arg2 playVolume:(int)arg3;
+ (id)getParamOfKeyStaticCap:(id)arg1 defaultVal:(id)arg2;
+ (id)getParamOfKey:(id)arg1 defaultVal:(id)arg2;
+ (id)getParamOfKeyItem:(id)arg1 filePath:(id)arg2 defaultVal:(id)arg3;
+ (_Bool)saveParamsStaticCab:(id)arg1;
+ (_Bool)saveParams:(id)arg1;
+ (_Bool)saveParamsItem:(id)arg1 filePath:(id)arg2 paramFilter:(id)arg3;
+ (id)getVoipSettingStaticCapPath;
+ (id)getVoipSettingConfinPath;
+ (id)getVoipSettingConfigRootDir;
+ (int)getMicPortChange;

@end

