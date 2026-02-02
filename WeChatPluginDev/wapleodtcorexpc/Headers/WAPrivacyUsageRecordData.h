//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAPrivacyUsageRecordData : NSObject
{
    unsigned int _timestamp;
    NSString *_fromPluginNickName;
    NSString *_desc;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *fromPluginNickName; // @synthesize fromPluginNickName=_fromPluginNickName;
@property(nonatomic) unsigned int timestamp; // @synthesize timestamp=_timestamp;

@end

