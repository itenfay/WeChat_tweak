//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAMediaProxy : NSObject
{
}

+ (_Bool)generateTempLocalID:(id *)arg1 path:(id *)arg2 appID:(id)arg3 fileType:(id)arg4;
+ (void)jumpToGameRecordShare:(id)arg1 withWidth:(unsigned int)arg2 withHeight:(unsigned int)arg3 withAppName:(id)arg4 withAppId:(id)arg5 withExtConfigJson:(id)arg6 withShareOptions:(id)arg7 withShareTitle:(id)arg8 withShareDesc:(id)arg9 withAppVersion:(unsigned int)arg10 withAppState:(unsigned int)arg11 withIsDevEdited:(_Bool)arg12 withController:(id)arg13 callbck:(CDUnknownBlockType)arg14;
+ (id)addTmpResource:(id)arg1 filePath:(id)arg2 thumbImage:(id)arg3;
+ (void)showEditPanel:(id)arg1 parmas:(id)arg2 filePath:(id)arg3 thumbImage:(id)arg4 controller:(id)arg5 callback:(CDUnknownBlockType)arg6;
+ (id)formatHaoWanUrl:(id)arg1 videoPath:(id)arg2 fileSize:(unsigned int)arg3 thumbImage:(id)arg4;
+ (unsigned int)getVideoDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

