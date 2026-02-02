//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FLTPlatformProto, NSString;

@interface FLTActionRequest : NSObject
{
    NSString *_cmdId;
    FLTPlatformProto *_proto;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithCmdId:(id)arg1 proto:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) FLTPlatformProto *proto; // @synthesize proto=_proto;
@property(copy, nonatomic) NSString *cmdId; // @synthesize cmdId=_cmdId;
- (id)toList;

@end

