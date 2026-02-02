//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WCWebImageSourceFinderWrapper : NSObject
{
    NSString *_feedId;
    NSString *_feedNonceId;
    unsigned long long _reportScene;
    NSDictionary *_extInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) unsigned long long reportScene; // @synthesize reportScene=_reportScene;
@property(copy, nonatomic) NSString *feedNonceId; // @synthesize feedNonceId=_feedNonceId;
@property(copy, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
- (id)initWithDictionary:(id)arg1;

@end

