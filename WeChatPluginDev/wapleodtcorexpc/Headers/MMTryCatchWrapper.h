//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMTryCatchWrapper : NSObject
{
}

+ (id)runWithTask:(id)arg1 didReceiveData:(id)arg2;
+ (id)runWithTask:(id)arg1 didReceiveResponse:(id)arg2;
+ (id)runWithTask:(id)arg1 sessionTask:(id)arg2 error:(id)arg3;
+ (id)runWithConfig:(id)arg1 scheme:(id)arg2 schemeHandler:(id)arg3;
+ (id)runBlockWithTryCatch:(CDUnknownBlockType)arg1;

@end

