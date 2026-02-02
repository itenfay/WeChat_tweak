//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WADeviceVoipAuthDeviceItem : NSObject
{
    unsigned int _status;
    NSString *_appId;
    NSString *_modelId;
    NSString *_sn;
    NSString *_name;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *sn; // @synthesize sn=_sn;
@property(copy, nonatomic) NSString *modelId; // @synthesize modelId=_modelId;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;

@end

