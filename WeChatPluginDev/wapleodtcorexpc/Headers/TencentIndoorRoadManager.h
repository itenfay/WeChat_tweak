//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TencentIndoorRoadManager : NSObject
{
    NSString *_curBuildid;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain) NSString *curBuildid; // @synthesize curBuildid=_curBuildid;
- (_Bool)downloadIndoorRoadDataWithBuildid:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)resetBuildid;

@end

