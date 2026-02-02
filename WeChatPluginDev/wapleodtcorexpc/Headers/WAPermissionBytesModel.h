//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAPermissionBytesModel : NSObject
{
    NSString *_apiName;
    unsigned long long _apiIndex;
    long long _apiRunMode;
    long long _mainThreadMode;
}

- (void).cxx_destruct;
@property(nonatomic) long long mainThreadMode; // @synthesize mainThreadMode=_mainThreadMode;
@property(nonatomic) long long apiRunMode; // @synthesize apiRunMode=_apiRunMode;
@property(nonatomic) unsigned long long apiIndex; // @synthesize apiIndex=_apiIndex;
@property(copy, nonatomic) NSString *apiName; // @synthesize apiName=_apiName;

@end

