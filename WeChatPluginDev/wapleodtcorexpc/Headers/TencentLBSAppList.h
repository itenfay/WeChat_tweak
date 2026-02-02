//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface TencentLBSAppList : NSObject
{
    NSString *_docPath;
    NSString *_path;
    NSDate *_last;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDate *last; // @synthesize last=_last;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *docPath; // @synthesize docPath=_docPath;
- (void)postAppList;
- (id)init;

@end

