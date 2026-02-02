//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCAdFinderTopicInfo : NSObject
{
    NSString *_finderEncryptedTopicId;
    NSString *_finderTopicName;
    NSString *_finderTopicTitle;
    NSString *_relationText;
    NSArray *_relationAvatarList;
    NSArray *_displayRelationAvatarList;
    NSArray *_finderTopicResList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *finderTopicResList; // @synthesize finderTopicResList=_finderTopicResList;
@property(retain, nonatomic) NSArray *displayRelationAvatarList; // @synthesize displayRelationAvatarList=_displayRelationAvatarList;
@property(retain, nonatomic) NSArray *relationAvatarList; // @synthesize relationAvatarList=_relationAvatarList;
@property(retain, nonatomic) NSString *relationText; // @synthesize relationText=_relationText;
@property(retain, nonatomic) NSString *finderTopicTitle; // @synthesize finderTopicTitle=_finderTopicTitle;
@property(retain, nonatomic) NSString *finderTopicName; // @synthesize finderTopicName=_finderTopicName;
@property(retain, nonatomic) NSString *finderEncryptedTopicId; // @synthesize finderEncryptedTopicId=_finderEncryptedTopicId;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

