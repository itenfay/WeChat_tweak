//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdHeadFinderTopicInfo : NSObject
{
    NSString *_finderEncryptedTopicId;
    NSString *_finderTopicName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *finderTopicName; // @synthesize finderTopicName=_finderTopicName;
@property(retain, nonatomic) NSString *finderEncryptedTopicId; // @synthesize finderEncryptedTopicId=_finderEncryptedTopicId;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

