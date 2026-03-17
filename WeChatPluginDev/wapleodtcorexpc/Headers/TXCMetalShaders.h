//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TXCMetalShaders : NSObject
{
}

+ (id)buildShaderSourceWithVertexSource:(id)arg1 fragmentSource:(id)arg2;
+ (id)buildShaderSourceWithFragmentSource:(id)arg1;
+ (id)rgbaFragmentFunc;
+ (id)bgraFragmentFunc;
+ (id)twoInputVertexFunc;
+ (id)basicVertexFunc;
+ (id)defaultFragmentFuncName;
+ (id)defaultVertexFuncName;

@end

