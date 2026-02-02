//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMWebDebugPkgDescItem : NSObject
{
    NSString *_appId;
    NSString *_desc;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;

@end

