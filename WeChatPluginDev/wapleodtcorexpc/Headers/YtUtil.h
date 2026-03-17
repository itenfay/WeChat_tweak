//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface YtUtil : NSObject
{
}

+ (id)getBase64Image:(id)arg1;
+ (id)UIImageWithCVMat:(void *)arg1;
+ (id)encodeBase64:(id)arg1;
+ (unsigned long long)nowUs;
+ (unsigned long long)nowMs;
+ (id)jsonDict2Str:(id)arg1 withError:(id)arg2;
+ (id)actionSeq2Str:(id)arg1;
+ (id)YTDict2NSSString:(id)arg1;
+ (id)UpdateSelectDataConfig:(id)arg1 withSdcs:(id)arg2 withAvcs:(id)arg3 withIsUpdateSdcs:(_Bool)arg4;
+ (id)SelectDataStr:(id)arg1;
+ (id)getStringWithDic:(id)arg1;

@end

