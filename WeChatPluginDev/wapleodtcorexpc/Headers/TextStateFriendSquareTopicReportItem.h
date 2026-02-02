//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TextStateFriendSquareTopicReportItem : NSObject
{
    unsigned int _iconType;
    NSString *_iconId;
    NSString *_iconCustomDescription;
    unsigned long long _userCount;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long userCount; // @synthesize userCount=_userCount;
@property(nonatomic) unsigned int iconType; // @synthesize iconType=_iconType;
@property(retain, nonatomic) NSString *iconCustomDescription; // @synthesize iconCustomDescription=_iconCustomDescription;
@property(retain, nonatomic) NSString *iconId; // @synthesize iconId=_iconId;

@end

