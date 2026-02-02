//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CameraScanCombineReporter : NSObject
{
}

+ (unsigned int)cardResultTypeFromCombineSvrResultType:(long long)arg1;
+ (void)reportDetectPerfWithItemVM:(id)arg1 modelVersion:(long long)arg2;
+ (void)reportCombineAction:(unsigned int)arg1 itemVM:(id)arg2 itemIndex:(long long)arg3 itemCount:(unsigned long long)arg4 preload:(_Bool)arg5 errCode:(unsigned int)arg6 baseInfo:(id)arg7;
+ (void)reportAlbumDetectAction:(unsigned int)arg1 itemVM:(id)arg2 baseInfo:(id)arg3;
+ (void)reportCardItemOpenWithItemVM:(id)arg1 itemIndex:(long long)arg2 itemCount:(unsigned long long)arg3 preload:(_Bool)arg4 baseInfo:(id)arg5;
+ (void)reportStreamDetectFailed:(unsigned int)arg1 itemVM:(id)arg2 itemIndex:(long long)arg3 itemCount:(unsigned long long)arg4 baseInfo:(id)arg5;
+ (void)reportStreamDetectAction:(unsigned int)arg1 itemVM:(id)arg2 itemIndex:(long long)arg3 itemCount:(unsigned long long)arg4 baseInfo:(id)arg5;
+ (void)reportClientActionType:(unsigned int)arg1 withExtraInfo:(id)arg2;
+ (void)reportClientActionType:(unsigned int)arg1;

@end

