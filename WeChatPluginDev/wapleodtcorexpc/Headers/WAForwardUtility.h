//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WAForwardUtility : NSObject
{
}

+ (id)ConvertWeAppFile2MsgWrapWithFileData:(id)arg1 fileName:(id)arg2 fileExt:(id)arg3;
+ (id)ConvertWeAppFile2MsgWrapWithFilePath:(id)arg1 fileName:(id)arg2;
+ (id)ConvertWeAppImage2MsgWrapWithImage:(id)arg1 retErrMsg:(id *)arg2;
+ (id)ConvertWeAppVideo2MsgWrapWithVideoInfo:(id)arg1;
+ (id)ConvertWeAppVideo2MsgWrapWithVideoPath:(id)arg1 thumbImage:(id)arg2;

@end

