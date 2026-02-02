//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderGroupLiveChatBoxId : NSObject
{
    unsigned int _type;
    NSString *_roomUsername;
}

+ (_Bool)isFinderLiveBoxId:(id)arg1 equal:(id)arg2;
+ (id)genFinderBoxId:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *roomUsername; // @synthesize roomUsername=_roomUsername;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToFinderLiveBoxId:(id)arg1;
- (id)buildFinderBoxId;

@end

