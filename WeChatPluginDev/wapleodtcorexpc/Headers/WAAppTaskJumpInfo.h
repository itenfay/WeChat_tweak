//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAAppTaskJumpInfo : NSObject
{
    unsigned int _sourceType;
    NSString *_sourceAppID;
    NSString *_agentId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *agentId; // @synthesize agentId=_agentId;
@property(nonatomic) unsigned int sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) NSString *sourceAppID; // @synthesize sourceAppID=_sourceAppID;
- (id)description;

@end

