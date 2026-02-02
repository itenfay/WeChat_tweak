//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPaySetPayUserDutyCgiResp : NSObject
{
    unsigned int _retcode;
    NSString *_retmsg;
}

+ (id)genFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *retmsg; // @synthesize retmsg=_retmsg;
@property(nonatomic) unsigned int retcode; // @synthesize retcode=_retcode;

@end

