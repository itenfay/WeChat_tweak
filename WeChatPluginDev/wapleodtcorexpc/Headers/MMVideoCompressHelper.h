//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@interface MMVideoCompressHelper : NSObject
{
}

+ (void)exportVideoFromUrl:(id)arg1 toOutputUrl:(id)arg2 shouldScaleDuration:(_Bool)arg3 withBlock:(CDUnknownBlockType)arg4;
+ (id)getOutputFilePathFrom:(id)arg1;
+ (id)getCacheFilePathFrom:(id)arg1;

@end
