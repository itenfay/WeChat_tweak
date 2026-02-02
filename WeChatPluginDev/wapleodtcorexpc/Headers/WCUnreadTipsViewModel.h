//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WCUnreadTipsViewModel : NSObject
{
    NSMutableArray *_userNames;
    NSMutableArray *_feedIds;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *feedIds; // @synthesize feedIds=_feedIds;
@property(retain, nonatomic) NSMutableArray *userNames; // @synthesize userNames=_userNames;
- (void)fetchUserName:(CDUnknownBlockType)arg1;
- (id)initWithUnreadLayer:(id)arg1;

@end

