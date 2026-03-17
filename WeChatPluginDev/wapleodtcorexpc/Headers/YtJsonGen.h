//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface YtJsonGen : NSObject
{
}

+ (id)getUploadDic:(float)arg1 withChangePointNum:(int)arg2 withExtraConfig:(id)arg3 withClientVersion:(id)arg4 withControlConfig:(id)arg5;
+ (id)sharedInstance;
- (void)printFloat5P:(id)arg1 tag:(id)arg2;
- (id)ComposeLipReadRequestWith:(id)arg1;
- (id)ComposeGetLiveTypeReqWith:(id)arg1;
- (id)convertToJsonData:(id)arg1;
- (id)init;

@end

