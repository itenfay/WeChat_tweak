//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WCServiceCenter : NSObject
{
    NSMutableDictionary *_serviceData;
}

+ (id)center;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *serviceData; // @synthesize serviceData=_serviceData;
- (_Bool)unregisterServiceForProtocol:(id)arg1;
- (Class)serviceForProtocol:(id)arg1;
- (_Bool)registerService:(Class)arg1 forProtocol:(id)arg2;
- (id)init;

@end

